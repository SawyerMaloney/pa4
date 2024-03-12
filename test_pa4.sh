#!/bin/sh
# Author: Amittai Aviram - aviram@bc.edu

PROG=parse
INPUT_DIR=testcases
OUTPUT=output.txt
EXPECTED=expected_pa4.txt
if [ $(uname) == "Linux" ]
then
    EXPECTED=expected_pa4_linux.txt
fi

rm -f ${OUTPUT}
echo Building $PROG ...
make clean && make
if [ $? != 0 ]
then
    echo "\n ***** BUILD FAILURE ***** \n"
    exit 1
fi
echo Building complete.

echo Running ...
for FILE in ${INPUT_DIR}/*.tig
do
    echo ${FILE} >> ${OUTPUT}
    ./${PROG} ${FILE} >> ${OUTPUT} 2>&1
done
echo Running complete.

echo Comparing real and expected output.
DIFF=$(diff --strip-trailing-cr ${OUTPUT} ${EXPECTED})
if [ "$DIFF" != "" ]
then
    echo "\nAt least one parsing error.  Please examine ${OUTPUT} to identify the \
        problematic input files."
else
    printf "\n======== CORRECT ========\n\n"
    rm ${OUTPUT}
fi
make clean

