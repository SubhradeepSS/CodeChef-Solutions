#!/bin/bash
set -f
IFS=$'\n';

CHECK_DIR=`./`

if [ $# == 1 ]
then
    CHECK_DIR=$1
    if [ ! -d "$1" ]; then
        echo "Directory '$1' does not exist."
        exit 0
    fi
fi


JAVA_FILES=`find $CHECK_DIR -name '*.java'`

TEST_EXIT_STATUS=0

echo "Checking if all Java files compile successfully"

for path in $JAVA_FILES
do
    {
        javac $path && 
        echo "$path: ✅"
    } ||
    {
        echo "$path: ❌" &&
        TEST_EXIT_STATUS=1 &&
        break
    }
done

find . -name "Codechef.class" -delete


unset IFS; set +f

exit $TEST_EXIT_STATUS


