#!/bin/sh

if [ $# = 1 ]
then
SNAPSHOT=$1
VERSION=""
else
	if [ $# = 2 ]
	then
		SNAPSHOT=$1
		VERSION=$2
	else
        echo "Usage : build_snapshot.sh <snapshot ver> [platform ver]"
        echo "        snapshot ver : yyyymmdd.n"
        echo "        platform ver : 4.0 or omitted"
        exit 1
	fi
fi


TEST_SET_DIR=./test_set

TC_LIST=`ls $TEST_SET_DIR | cut -c1-6`

for TC in $TC_LIST
do
	./build.sh $SNAPSHOT $TC $VERSION
done


