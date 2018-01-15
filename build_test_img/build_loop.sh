#!/bin/bash

#!/bin/sh

#user_name=`whoami`

#if [ $user_name != "root" ]
#then
#    echo "Please execute this program with sudo"
#    exit 1
#fi


DOWNURL="http://download.tizen.org/snapshots/tizen/4.0-unified/"

ARTIK_530_IMAGE_LIST=`ls ./test_set | sed -e 's/^\(.\+\)_artik530_bb_list.txt/\1/'`
P_VER=4.0
BUILD_RESULT="build_result_"`date +%Y%m%d%H%M`".log"

ARTIK_BUILD_DIR=./artik530

touch $BUILD_RESULT


cur_ver=0
while [ 1 ]
do
    date
    echo "Current Version : $CUR_VERSION"
    FOUND_FLAG="0"
    wget -q -nd -np $DOWNURL
    if [ $? != 0 ]
    then
        sleep 3
        continue
    fi
    IMAGE_LIST=`grep tizen-4.0-unified index.html | sed -e 's/^.\+\"tizen-4.0-unified_\(.\+\)\/\".\+$/\1/'`
    rm -f index.html

	max_ver=0
    for ver in $IMAGE_LIST
    do
		if [ 1 -eq `echo "${max_ver} < ${ver}" | bc` ]
		then
			max_ver=$ver
		fi
    done
	echo "max version : $max_ver"

	if [ $cur_ver != $max_ver ]
	then
		echo "Build images...."
		SNAPSHOT=$max_ver
		ALL_RESULT=0

######## check the previous result ########
		if [ x"$P_VER" != "x" ]
		then
			P_VERX="${P_VER}-"
		fi

		ARTIK_DIR="tizen-${P_VERX}artik530_${SNAPSHOT}"
		ARTIK_SUCCESS_DIR="./result/success/artik530/${ARTIK_DIR}"

		if [ -e ${ARTIK_SUCCESS_DIR} ]
		then
			echo "SNAPSHOT(${SNAPSHOT}) was already built!!!"
			cur_ver=$max_ver
			continue
		fi

		for IMAGE in $ARTIK_530_IMAGE_LIST
		do
			echo "#################################################################"
			echo " `date +%Y.%m.%d_%H:%M` : Building $SNAPSHOT $IMAGE $P_VER"
			echo " `date +%Y.%m.%d_%H:%M` : Building $SNAPSHOT $IMAGE $P_VER" >> $BUILD_RESULT
			echo "#################################################################"
			./build.sh $SNAPSHOT $IMAGE $P_VER
			result=$?
			echo "#################################################################"
			echo " `date +%Y.%m.%d_%H:%M` : Build Result : $result ($SNAPSHOT $IMAGE $P_VER)"
			echo " `date +%Y.%m.%d_%H:%M` : Build Result : $result ($SNAPSHOT $IMAGE $P_VER)" >> $BUILD_RESULT
			echo "#################################################################"
			if [ $result != "0" ]
			then
				ALL_RESULT=1
			fi
		done

		if [ $ALL_RESULT = "0" ]
		then
			cur_ver=$max_ver
			echo " `date +%Y.%m.%d_%H:%M` : All Building ($SNAPSHOT) is Successful!!!!"
#			ARTIK_SUCCESS_DIR="./result/success/artik530/${ARTIK_DIR}"
			if [ ! -e $ARTIK_SUCCESS_DIR ]
			then
				mkdir -p $ARTIK_SUCCESS_DIR
			fi
			mv $ARTIK_BUILD_DIR/*.tar.gz $ARTIK_SUCCESS_DIR/
			ARTIK_SUCCESS_LOG_DIR="./result/success/artik530/${ARTIK_DIR}/log"
			if [ ! -e $ARTIK_SUCCESS_LOG_DIR ]
			then
				mkdir -p $ARTIK_SUCCESS_LOG_DIR
			fi
			mv $ARTIK_BUILD_DIR/* $ARTIK_SUCCESS_LOG_DIR/
			ARTIK_LATEST_DIR="./result/success/artik530/latest"
			if [ -e $ARTIK_LATEST_DIR ]
			then
				rm -f $ARTIK_LATEST_DIR
			fi
			ln -s $ARTIK_DIR $ARTIK_LATEST_DIR
		else
			echo " `date +%Y.%m.%d_%H:%M` : All Building ($SNAPSHOT) is Failed!!!!"
			ARTIK_FAIL_DIR="./result/failed/artik530/${ARTIK_DIR}_`date +%Y%m%d%H%M`"
			mkdir -p $ARTIK_FAIL_DIR
			mv $ARTIK_BUILD_DIR/* $ARTIK_FAIL_DIR/
			cp $BUILD_RESULT $ARTIK_FAIL_DIR/
		fi
	else
		echo "No Change"
	fi

    sleep 1h
done

