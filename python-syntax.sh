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


PYTHON_FILES=`find $CHECK_DIR -name '*.py'`

TEST_EXIT_STATUS=0

echo "Checking for syntax errors in all Python files"

for path in $PYTHON_FILES
do
    {
        python -m py_compile $path && 
        echo "$path: ✅"
    } ||
    {
        echo "$path: ❌" &&
        TEST_EXIT_STATUS=1 &&
        break
    }
done

find . | grep -E "(__pycache__|\.pyc|\.pyo$)" | xargs rm -rf

unset IFS; set +f

exit $TEST_EXIT_STATUS