#!/bin/sh

#user_name=`whoami`

#if [ $user_name != "root" ]
#then
#    echo "Please execute this program with sudo"
#    return 1
#fi

########## checking arguments ##########
if [ $# = 2 ]
then
	S_VER=$1
	TC_NUM=$2
	P_VER=""
else
	if [ $# = 3 ]
	then
		S_VER=$1
		TC_NUM=$2
		P_VER=$3-
		echo $P_VER | grep -q "4.0-$"
		if [ $? != 0 ]
		then
			echo "Invalid platform version : $P_VER"
			echo "format is 4.0 or omitted"
			return 1
		fi
	else
		echo "Usage : build.sh <snapshot ver> <tc num> [platform ver]"
		echo "        snapshot ver : yyyymmdd.n"
		echo "        tc num       : TCNNNN"
		echo "        platform ver : 4.0 or omitted"
		return 1
	fi
fi

echo $S_VER | grep -q "[0-9]\{8\}[.][0-9]$"
if [ $? != 0 ]
then
	echo "Invalid snapshot version : $S_VER"
	echo "format is yyyymmdd.n"
	return 1
fi

echo $TC_NUM | grep -q "TC[0-9]\{4\}$"
if [ $? != 0 ]
then
	echo "Invalid tc num : $TC_NUM"
	echo "format is TCNNNN"
	return 1
fi

########## Set varaiables ##########
RPI3_KS_FILE=tizen-"$P_VER"unified_"$S_VER"_iot-headless-2parts-armv7l-rpi3.ks
ARTIK530_KS_FILE=tizen-"$P_VER"unified_"$S_VER"_iot-headed-3parts-armv7l-artik530_710.ks

RPI3_KS_LOC=http://download.tizen.org/snapshots/tizen/"$P_VER"unified/tizen-"$P_VER"unified_"$S_VER"/images/standard/iot-headless-2parts-armv7l-rpi3/"$RPI3_KS_FILE"
ARTIK530_KS_LOC=http://download.tizen.org/snapshots/tizen/"$P_VER"unified/tizen-"$P_VER"unified_"$S_VER"/images/standard/iot-headed-3parts-armv7l-artik530_710/"$ARTIK530_KS_FILE"

DOWNDIR="download"
RPI3_BUILD_DIR="rpi3"
ARTIK530_BUILD_DIR="artik530"

TESTSET_DIR="test_set"
TC_RPI3="$TESTSET_DIR"/"$TC_NUM"_rpi3_bb_list.txt
TC_ARTIK530="$TESTSET_DIR"/"$TC_NUM"_artik530_bb_list.txt

########## checking envrionment ##########
#if [ ! -e $TC_RPI3 ]
#then
#	echo "There is no a file of image list($TC_RPI3)."
#	return 2
#fi

if [ ! -e $TC_ARTIK530 ]
then
	echo "There is no a file of image list($TC_ARTIK530)."
	return 2
fi

if [ ! -e $DOWNDIR ]
then
	mkdir $DOWNDIR
fi

#if [ ! -e $RPI3_BUILD_DIR ]
#then
#	mkdir $RPI3_BUILD_DIR
#fi

if [ ! -e $ARTIK530_BUILD_DIR ]
then
	mkdir $ARTIK530_BUILD_DIR
fi

########## function : downloading ks files ##########
download_ks_file() {
#	if [ ! -e $DOWNDIR/$RPI3_KS_FILE ]
#	then
#		wget -r -np -nd -P $DOWNDIR $RPI3_KS_LOC
#	fi
	if [ ! -e $DOWNDIR/$ARTIK530_KS_FILE ]
	then
		wget -r -np -nd -P $DOWNDIR $ARTIK530_KS_LOC
		return $?
	fi
}

########## function : making ks files ##########
### input, list, output
update_building_block_list() {

sed -e '/%packages/,/%end/{/%packages/!{/%end/!d}}' $1 > $3

exec < $2
BB_LIST="\\\n"
while read A
do
BB_LIST="$BB_LIST""$A""\n"
done

sed -i "/%packages/a $BB_LIST" $3

sed -i "s/lang en_US.UTF-8/lang C/g" $3

}

echo "1. download ks files : snapshot-tizen-"$P_VER""$S_VER""
download_ks_file
if [ $? != 0 ]
then
	return 3
fi
#echo "2. update the image list of "$TC_NUM" to ks file for RIP3"
#update_building_block_list $DOWNDIR/$RPI3_KS_FILE $TC_RPI3 $RPI3_BUILD_DIR/rpi3_"$TC_NUM".ks
echo "3. update the image list of "$TC_NUM" to ks file for ARTIK530"
update_building_block_list $DOWNDIR/$ARTIK530_KS_FILE $TC_ARTIK530 $ARTIK530_BUILD_DIR/artik530_"$TC_NUM".ks
echo "4. make the image for artik530"
if [ ! -e $ARTIK530_BUILD_DIR/tizen-"$P_VER"artik530_"$S_VER"_armv7l.tar.gz ]
then
	cd $ARTIK530_BUILD_DIR
	sudo mic cr loop artik530_"$TC_NUM".ks --outdir=./ --pack-to=tizen-"$P_VER"artik530_"$S_VER"_"$TC_NUM"_armv7l.tar.gz --arch=armv7l --logfile=./tizen-"$P_VER"artik530_"$S_VER"_"$TC_NUM"_armv7l.log --tmpfs
	mic_result=$?
	cd ../

	if [ $mic_result != 0 ]
	then
		return 4
	fi
fi
#echo "5. make the image for rpi3"
#if [ ! -e $RPI3_BUILD_DIR/tizen-"$P_VER"rpi3_"$S_VER"_armv7l.tar.gz ]
#then
#	cd $RPI3_BUILD_DIR
#	mic cr loop rpi3_"$TC_NUM".ks --outdir=./ --pack-to=tizen-"$P_VER"rpi3_"$S_VER"_armv7l.tar.gz --arch=armv7l --logfile=tizen-"$P_VER"rpi3_"$S_VER"_armv7l.log
#	cd ../
#fi

echo "6. Done"
return 0
