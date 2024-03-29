cmake_minimum_required(VERSION 2.8)
#C and C++ APIs for V4L2 under openCV
PROJECT( v4l2-lib )

message("CMAKE_SOURCE_DIR : ${CMAKE_SOURCE_DIR}")
message("PROJECT_NAME : ${PROJECT_NAME}")
message("v4l2-lib_SOURCE_DIR : ${v4l2-lib_SOURCE_DIR}")
message("v4l2-lib_BINARY_DIR : ${v4l2-lib_BINARY_DIR}")

if(ANDROID_NDK)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${v4l2-lib_BINARY_DIR}/bin/${ANDROID_ABI})
	set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${v4l2-lib_BINARY_DIR}/libs/${ANDROID_ABI})
	set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${v4l2-lib_BINARY_DIR}/libs/${ANDROID_ABI})
else()
	if("${BCV_ENV_EXPORTED}" STREQUAL "")
	#". setup.sh " to export .config to CMAKE build system
	#include(${BCV_SOURCE_DIR}/cmake/CVEnvImport.cmake)
	endif()

	#my mozilla PC for openCV build
	#set(OpenCV_DIR "/home/thomas/build/misc/opencv/build")
	#my acer s3 ubuntu
	#set(OpenCV_DIR "/home/thomas/build/misc/opencv/build")
	#FIND_PACKAGE( OpenCV REQUIRED)

	#openMP to avoid link error : omp_xxx error!
	# undefined reference to `GOMP_loop_dynamic_start
	if(NOT OPENMP_FOUND)
	#if it's not found in parent project, find it again!
		find_package(OpenMP)
		if(OPENMP_FOUND)
			set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
			set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
		endif()
	endif(NOT OPENMP_FOUND)

	if("${TARGET_ARCH}" STREQUAL "")
		set(TARGET_ARCH, "x86_64")
	endif()

	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${v4l2-lib_BINARY_DIR}/bin/${TARGET_ARCH})
	set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${v4l2-lib_BINARY_DIR}/libs/${TARGET_ARCH})
	set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${v4l2-lib_BINARY_DIR}/libs/${TARGET_ARCH})

endif()
#build a static lib
ADD_LIBRARY(v4l2 STATIC
	Webcam.cpp
	CameraFrame.cpp
	capture-v4l2.c
	)

add_executable(v4l2-xu
		v4l2-xu.c
	)
#dynamic or static link to dependent openCV libs
#TARGET_LINK_LIBRARIES( v4l2-lib ${OpenCV_LIBS} )