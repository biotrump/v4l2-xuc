#!/bin/bash
#Thomas Tsai <thomas@biotrump.com>
#temp for my workspace
export TARGET_ARCH="armeabi-v7a"

if [ ! -d $V4L2_LIB_OUT ]; then
	mkdir -p $V4L2_LIB_OUT
else
	rm -rf $V4L2_LIB_OUT/*
fi

pushd $V4L2_LIB_OUT

cmake -DTARGET_ARCH=${TARGET_ARCH} $V4L2_LIB_DIR

#-DV4L2_LIB_DIR:FILEPATH=${V4L2_LIB_DIR} -DV4L2_LIB_OUT:FILEPATH=${V4L2_LIB_OUT} \

make ${MAKE_FLAGS}
pwd
ls -l
read
popd
