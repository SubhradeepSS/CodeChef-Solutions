#!/bin/bash
set -f
IFS=$'\n';

CHECK_DIR=`../`

if [ $# == 1 ]
then
    CHECK_DIR=$1
    if [ ! -d "$1" ]; then
        echo "Directory '$1' does not exist."
        exit 0
    fi
fi


CPP_FILES=`find $CHECK_DIR -name '*.cpp'`
TEST_PROG_FILE=`head /dev/urandom | tr -dc A-Za-z0-9 | head -c 10 ; echo ''`

TEST_EXIT_STATUS=0

echo "Checking if all C++ files compile successfully"

for path in $CPP_FILES
do
    {
        g++ -o $TEST_PROG_FILE $path && 
        echo "$path: ✅" &&
        rm $TEST_PROG_FILE
    } ||
    {
        echo "$path: ❌" &&
        TEST_EXIT_STATUS=1 &&
        break
    }
done


unset IFS; set +f

exit $TEST_EXIT_STATUS