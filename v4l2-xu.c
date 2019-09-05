/** @url http://www.jayrambhia.com/blog/capture-v4l2/
 * @url https://gist.github.com/jayrambhia/5866483
 * @file:///home/thomas/aosp/rock-chip/rk3368/6.x/kernel/Documentation/video4linux/uvcvideo.txt
 */

/*

Bus 001 Device 052: ID 1bcf:2cac Sunplus Innovation Technology Inc. 
Device Descriptor:
  bLength                18
  bDescriptorType         1
  bcdUSB               2.10
  bDeviceClass          239 Miscellaneous Device
  bDeviceSubClass         2 ?
  bDeviceProtocol         1 Interface Association
  bMaxPacketSize0        64
  idVendor           0x1bcf Sunplus Innovation Technology Inc.
  idProduct          0x2cac 
  bcdDevice            0.24
  iManufacturer           1 Sunplus IT Co 
  iProduct                2 Web Camera
  iSerial                 0 
  bNumConfigurations      1
  Configuration Descriptor:
    bLength                 9
    bDescriptorType         2
    wTotalLength          697
    bNumInterfaces          2
    bConfigurationValue     1
    iConfiguration          0 
    bmAttributes         0x80
      (Bus Powered)
    MaxPower              500mA
    Interface Association:
      bLength                 8
      bDescriptorType        11
      bFirstInterface         0
      bInterfaceCount         2
      bFunctionClass         14 Video
      bFunctionSubClass       3 Video Interface Collection
      bFunctionProtocol       0 
      iFunction               4 Web Camera
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        0
      bAlternateSetting       0
      bNumEndpoints           1
      bInterfaceClass        14 Video
      bInterfaceSubClass      1 Video Control
      bInterfaceProtocol      0 
      iInterface              4 Web Camera
      VideoControl Interface Descriptor:
        bLength                13
        bDescriptorType        36
        bDescriptorSubtype      1 (HEADER)
        bcdUVC               1.00
        wTotalLength          109
        dwClockFrequency       48.000000MHz
        bInCollection           1
        baInterfaceNr( 0)       1
      VideoControl Interface Descriptor:
        bLength                18
        bDescriptorType        36
        bDescriptorSubtype      2 (INPUT_TERMINAL)
        bTerminalID             1
        wTerminalType      0x0201 Camera Sensor
        bAssocTerminal          0
        iTerminal               0 
        wObjectiveFocalLengthMin      0
        wObjectiveFocalLengthMax      0
        wOcularFocalLength            0
        bControlSize                  3
        bmControls           0x00020020
          Focus (Absolute)
          Focus, Auto
      VideoControl Interface Descriptor:
        bLength                11
        bDescriptorType        36
        bDescriptorSubtype      5 (PROCESSING_UNIT)
      Warning: Descriptor too short
        bUnitID                 2
        bSourceID               1
        wMaxMultiplier      16384
        bControlSize            2
        bmControls     0x0000177f
          Brightness
          Contrast
          Hue
          Saturation
          Sharpness
          Gamma
          White Balance Temperature
          Backlight Compensation
          Gain
          Power Line Frequency
          White Balance Temperature, Auto
        iProcessing             0 
        bmVideoStandards     0x1d
          None
          PAL - 625/50
          SECAM - 625/50
          NTSC - 625/50
      VideoControl Interface Descriptor:
        bLength                29
        bDescriptorType        36
        bDescriptorSubtype      6 (EXTENSION_UNIT)
        bUnitID                 3
        guidExtensionCode         {c385b80f-c268-4745-90f7-8f47579d95fc}
        bNumControl             5
        bNrPins                 1
        baSourceID( 0)          2
        bControlSize            4
        bmControls( 0)       0x7f
        bmControls( 1)       0x00
        bmControls( 2)       0x00
        bmControls( 3)       0x00
        iExtension              0 
      VideoControl Interface Descriptor:
        bLength                29
        bDescriptorType        36
        bDescriptorSubtype      6 (EXTENSION_UNIT)
        bUnitID                 4
        guidExtensionCode         {991d5a7d-325b-8b42-8cad-671b8a65f37a}
        bNumControl            23
        bNrPins                 1
        baSourceID( 0)          3
        bControlSize            4
        bmControls( 0)       0xff
        bmControls( 1)       0xff
        bmControls( 2)       0xfe
        bmControls( 3)       0x00
        iExtension              0 
      VideoControl Interface Descriptor:
        bLength                 9
        bDescriptorType        36
        bDescriptorSubtype      3 (OUTPUT_TERMINAL)
        bTerminalID             5
        wTerminalType      0x0101 USB Streaming
        bAssocTerminal          0
        bSourceID               4
        iTerminal               0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x87  EP 7 IN
        bmAttributes            3
          Transfer Type            Interrupt
          Synch Type               None
          Usage Type               Data
        wMaxPacketSize     0x0010  1x 16 bytes
        bInterval               8
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        1
      bAlternateSetting       0
      bNumEndpoints           0
      bInterfaceClass        14 Video
      bInterfaceSubClass      2 Video Streaming
      bInterfaceProtocol      0 
      iInterface              0 
      VideoStreaming Interface Descriptor:
        bLength                            15
        bDescriptorType                    36
        bDescriptorSubtype                  1 (INPUT_HEADER)
        bNumFormats                         2
        wTotalLength                      389
        bEndPointAddress                  129
        bmInfo                              0
        bTerminalLink                       5
        bStillCaptureMethod                 1
        bTriggerSupport                     0
        bTriggerUsage                       0
        bControlSize                        1
        bmaControls( 0)                    11
        bmaControls( 1)                    11
      VideoStreaming Interface Descriptor:
        bLength                            11
        bDescriptorType                    36
        bDescriptorSubtype                  6 (FORMAT_MJPEG)
        bFormatIndex                        1
        bNumFrameDescriptors                5
        bFlags                              1
          Fixed-size samples: Yes
        bDefaultFrameIndex                  1
        bAspectRatioX                       0
        bAspectRatioY                       0
        bmInterlaceFlags                 0x00
          Interlaced stream or variable: No
          Fields per frame: 1 fields
          Field 1 first: No
          Field pattern: Field 1 only
          bCopyProtect                      0
      VideoStreaming Interface Descriptor:
        bLength                            30
        bDescriptorType                    36
        bDescriptorSubtype                  7 (FRAME_MJPEG)
        bFrameIndex                         1
        bmCapabilities                   0x01
          Still image supported
        wWidth                            640
        wHeight                           480
        dwMinBitRate                147456000
        dwMaxBitRate                147456000
        dwMaxVideoFrameBufferSize      614400
        dwDefaultFrameInterval         333333
        bFrameIntervalType                  1
        dwFrameInterval( 0)            333333
      VideoStreaming Interface Descriptor:
        bLength                            30
        bDescriptorType                    36
        bDescriptorSubtype                  7 (FRAME_MJPEG)
        bFrameIndex                         2
        bmCapabilities                   0x01
          Still image supported
        wWidth                           1280
        wHeight                           720
        dwMinBitRate                442368000
        dwMaxBitRate                442368000
        dwMaxVideoFrameBufferSize     1843200
        dwDefaultFrameInterval         333333
        bFrameIntervalType                  1
        dwFrameInterval( 0)            333333
      VideoStreaming Interface Descriptor:
        bLength                            30
        bDescriptorType                    36
        bDescriptorSubtype                  7 (FRAME_MJPEG)
        bFrameIndex                         3
        bmCapabilities                   0x01
          Still image supported
        wWidth                           1920
        wHeight                          1080
        dwMinBitRate                829440000
        dwMaxBitRate                829440000
        dwMaxVideoFrameBufferSize     4147200
        dwDefaultFrameInterval         333333
        bFrameIntervalType                  1
        dwFrameInterval( 0)            333333
      VideoStreaming Interface Descriptor:
        bLength                            30
        bDescriptorType                    36
        bDescriptorSubtype                  7 (FRAME_MJPEG)
        bFrameIndex                         4
        bmCapabilities                   0x01
          Still image supported
        wWidth                           2048
        wHeight                          1536
        dwMinBitRate                1006632960
        dwMaxBitRate                1006632960
        dwMaxVideoFrameBufferSize     6291456
        dwDefaultFrameInterval         333333
        bFrameIntervalType                  1
        dwFrameInterval( 0)            333333
      VideoStreaming Interface Descriptor:
        bLength                            30
        bDescriptorType                    36
        bDescriptorSubtype                  7 (FRAME_MJPEG)
        bFrameIndex                         5
        bmCapabilities                   0x00
          Still image unsupported
        wWidth                           3264
        wHeight                          2448
        dwMinBitRate                1006632960
        dwMaxBitRate                1006632960
        dwMaxVideoFrameBufferSize     6291456
        dwDefaultFrameInterval         666666
        bFrameIntervalType                  1
        dwFrameInterval( 0)            666666
      VideoStreaming Interface Descriptor:
        bLength                             6
        bDescriptorType                    36
        bDescriptorSubtype                 13 (COLORFORMAT)
        bColorPrimaries                     1 (BT.709,sRGB)
        bTransferCharacteristics            1 (BT.709)
        bMatrixCoefficients                 4 (SMPTE 170M (BT.601))
      VideoStreaming Interface Descriptor:
        bLength                            27
        bDescriptorType                    36
        bDescriptorSubtype                  4 (FORMAT_UNCOMPRESSED)
        bFormatIndex                        2
        bNumFrameDescriptors                5
        guidFormat                            {59555932-0000-1000-8000-00aa00389b71}
        bBitsPerPixel                      16
        bDefaultFrameIndex                  1
        bAspectRatioX                       0
        bAspectRatioY                       0
        bmInterlaceFlags                 0x00
          Interlaced stream or variable: No
          Fields per frame: 2 fields
          Field 1 first: No
          Field pattern: Field 1 only
          bCopyProtect                      0
      VideoStreaming Interface Descriptor:
        bLength                            30
        bDescriptorType                    36
        bDescriptorSubtype                  5 (FRAME_UNCOMPRESSED)
        bFrameIndex                         1
        bmCapabilities                   0x01
          Still image supported
        wWidth                            640
        wHeight                           480
        dwMinBitRate                147456000
        dwMaxBitRate                147456000
        dwMaxVideoFrameBufferSize      614400
        dwDefaultFrameInterval         333333
        bFrameIntervalType                  1
        dwFrameInterval( 0)            333333
      VideoStreaming Interface Descriptor:
        bLength                            30
        bDescriptorType                    36
        bDescriptorSubtype                  5 (FRAME_UNCOMPRESSED)
        bFrameIndex                         2
        bmCapabilities                   0x01
          Still image supported
        wWidth                           1280
        wHeight                           720
        dwMinBitRate                147456000
        dwMaxBitRate                147456000
        dwMaxVideoFrameBufferSize     1843200
        dwDefaultFrameInterval        1000000
        bFrameIntervalType                  1
        dwFrameInterval( 0)           1000000
      VideoStreaming Interface Descriptor:
        bLength                            30
        bDescriptorType                    36
        bDescriptorSubtype                  5 (FRAME_UNCOMPRESSED)
        bFrameIndex                         3
        bmCapabilities                   0x01
          Still image supported
        wWidth                           1920
        wHeight                          1080
        dwMinBitRate                165888000
        dwMaxBitRate                165888000
        dwMaxVideoFrameBufferSize     4147200
        dwDefaultFrameInterval        2000000
        bFrameIntervalType                  1
        dwFrameInterval( 0)           2000000
      VideoStreaming Interface Descriptor:
        bLength                            30
        bDescriptorType                    36
        bDescriptorSubtype                  5 (FRAME_UNCOMPRESSED)
        bFrameIndex                         4
        bmCapabilities                   0x01
          Still image supported
        wWidth                           2048
        wHeight                          1536
        dwMinBitRate                3087007744
        dwMaxBitRate                4244635648
        dwMaxVideoFrameBufferSize     6291456
        dwDefaultFrameInterval        3333333
        bFrameIntervalType                  1
        dwFrameInterval( 0)           3333333
      VideoStreaming Interface Descriptor:
        bLength                            30
        bDescriptorType                    36
        bDescriptorSubtype                  5 (FRAME_UNCOMPRESSED)
        bFrameIndex                         5
        bmCapabilities                   0x01
          Still image supported
        wWidth                           3264
        wHeight                          2448
        dwMinBitRate                3087007744
        dwMaxBitRate                4244635648
        dwMaxVideoFrameBufferSize     6291456
        dwDefaultFrameInterval       10000000
        bFrameIntervalType                  1
        dwFrameInterval( 0)          10000000
      VideoStreaming Interface Descriptor:
        bLength                             6
        bDescriptorType                    36
        bDescriptorSubtype                 13 (COLORFORMAT)
        bColorPrimaries                     1 (BT.709,sRGB)
        bTransferCharacteristics            1 (BT.709)
        bMatrixCoefficients                 4 (SMPTE 170M (BT.601))
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        1
      bAlternateSetting       1
      bNumEndpoints           1
      bInterfaceClass        14 Video
      bInterfaceSubClass      2 Video Streaming
      bInterfaceProtocol      0 
      iInterface              0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x81  EP 1 IN
        bmAttributes            5
          Transfer Type            Isochronous
          Synch Type               Asynchronous
          Usage Type               Data
        wMaxPacketSize     0x00c0  1x 192 bytes
        bInterval               1
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        1
      bAlternateSetting       2
      bNumEndpoints           1
      bInterfaceClass        14 Video
      bInterfaceSubClass      2 Video Streaming
      bInterfaceProtocol      0 
      iInterface              0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x81  EP 1 IN
        bmAttributes            5
          Transfer Type            Isochronous
          Synch Type               Asynchronous
          Usage Type               Data
        wMaxPacketSize     0x0180  1x 384 bytes
        bInterval               1
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        1
      bAlternateSetting       3
      bNumEndpoints           1
      bInterfaceClass        14 Video
      bInterfaceSubClass      2 Video Streaming
      bInterfaceProtocol      0 
      iInterface              0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x81  EP 1 IN
        bmAttributes            5
          Transfer Type            Isochronous
          Synch Type               Asynchronous
          Usage Type               Data
        wMaxPacketSize     0x0200  1x 512 bytes
        bInterval               1
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        1
      bAlternateSetting       4
      bNumEndpoints           1
      bInterfaceClass        14 Video
      bInterfaceSubClass      2 Video Streaming
      bInterfaceProtocol      0 
      iInterface              0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x81  EP 1 IN
        bmAttributes            5
          Transfer Type            Isochronous
          Synch Type               Asynchronous
          Usage Type               Data
        wMaxPacketSize     0x0280  1x 640 bytes
        bInterval               1
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        1
      bAlternateSetting       5
      bNumEndpoints           1
      bInterfaceClass        14 Video
      bInterfaceSubClass      2 Video Streaming
      bInterfaceProtocol      0 
      iInterface              0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x81  EP 1 IN
        bmAttributes            5
          Transfer Type            Isochronous
          Synch Type               Asynchronous
          Usage Type               Data
        wMaxPacketSize     0x0320  1x 800 bytes
        bInterval               1
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        1
      bAlternateSetting       6
      bNumEndpoints           1
      bInterfaceClass        14 Video
      bInterfaceSubClass      2 Video Streaming
      bInterfaceProtocol      0 
      iInterface              0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x81  EP 1 IN
        bmAttributes            5
          Transfer Type            Isochronous
          Synch Type               Asynchronous
          Usage Type               Data
        wMaxPacketSize     0x03b0  1x 944 bytes
        bInterval               1
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        1
      bAlternateSetting       7
      bNumEndpoints           1
      bInterfaceClass        14 Video
      bInterfaceSubClass      2 Video Streaming
      bInterfaceProtocol      0 
      iInterface              0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x81  EP 1 IN
        bmAttributes            5
          Transfer Type            Isochronous
          Synch Type               Asynchronous
          Usage Type               Data
        wMaxPacketSize     0x0a80  2x 640 bytes
        bInterval               1
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        1
      bAlternateSetting       8
      bNumEndpoints           1
      bInterfaceClass        14 Video
      bInterfaceSubClass      2 Video Streaming
      bInterfaceProtocol      0 
      iInterface              0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x81  EP 1 IN
        bmAttributes            5
          Transfer Type            Isochronous
          Synch Type               Asynchronous
          Usage Type               Data
        wMaxPacketSize     0x0b20  2x 800 bytes
        bInterval               1
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        1
      bAlternateSetting       9
      bNumEndpoints           1
      bInterfaceClass        14 Video
      bInterfaceSubClass      2 Video Streaming
      bInterfaceProtocol      0 
      iInterface              0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x81  EP 1 IN
        bmAttributes            5
          Transfer Type            Isochronous
          Synch Type               Asynchronous
          Usage Type               Data
        wMaxPacketSize     0x0be0  2x 992 bytes
        bInterval               1
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        1
      bAlternateSetting      10
      bNumEndpoints           1
      bInterfaceClass        14 Video
      bInterfaceSubClass      2 Video Streaming
      bInterfaceProtocol      0 
      iInterface              0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x81  EP 1 IN
        bmAttributes            5
          Transfer Type            Isochronous
          Synch Type               Asynchronous
          Usage Type               Data
        wMaxPacketSize     0x13c0  3x 960 bytes
        bInterval               1
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        1
      bAlternateSetting      11
      bNumEndpoints           1
      bInterfaceClass        14 Video
      bInterfaceSubClass      2 Video Streaming
      bInterfaceProtocol      0 
      iInterface              0 
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x81  EP 1 IN
        bmAttributes            5
          Transfer Type            Isochronous
          Synch Type               Asynchronous
          Usage Type               Data
        wMaxPacketSize     0x1400  3x 1024 bytes
        bInterval               1
Binary Object Store Descriptor:
  bLength                 5
  bDescriptorType        15
  wTotalLength           12
  bNumDeviceCaps          1
  USB 2.0 Extension Device Capability:
    bLength                 7
    bDescriptorType        16
    bDevCapabilityType      2
    bmAttributes   0x00000006
      Link Power Management (LPM) Supported
Device Status:     0x0000
  (Bus Powered)

 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <getopt.h>             /* getopt_long() */
#include <fcntl.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <linux/videodev2.h>	//V4L2 definitions, /include/uapi/linux/videodev2.h
#include <linux/uvcvideo.h>
#include <linux/usb/video.h>

#define	VIDEO_DEVICE	"/dev/video0"

char device_name[1024];
uint32_t g_led=0;
uint32_t g_pwm=0;
int g_verbose=0;

static void usage(FILE *fp, int argc, char **argv)
{
	fprintf(fp,
		 "Usage: %s [options]\n\n"
		 "Options:\n"
		 "-d | --device        Video device name /dev/video0\n"
		 "-h | --help          Print this message\n"
		 "-l | --led           0x01 850nm on or 0x02:940nm on\n"
		 "-p | --pwm           pwm 0-255\n"
		 "-v | --verbose       Verbose output\n"
		 "",
		 argv[0]);
}

static const char short_options[] = "d:hl:p:v";

static const struct option
long_options[] = {
	{ "device", required_argument, NULL, 'd' },
	{ "help",   no_argument,       NULL, 'h' },
	{ "led",   required_argument,  NULL, 'l' },
	{ "pwm",   required_argument,       NULL, 'p' },
	{ "verbose", no_argument,      NULL, 'v' },
	{ 0, 0, 0, 0 }
};


static int xioctl(int fd, int request, void *arg)
{
	int r;

	do r = ioctl (fd, request, arg);
	while (-1 == r && EINTR == errno);

	return r;
}

int print_caps(int fd)
{
	struct v4l2_capability caps = {};
	if (-1 == xioctl(fd, VIDIOC_QUERYCAP, &caps))
	{
			perror("Querying Capabilities");
			return 1;
	}

	printf( "Driver Caps:\n"
			"  Driver: \"%s\"\n"
			"  Card: \"%s\"\n"
			"  Bus: \"%s\"\n"
			"  Version: %d.%d\n"
			"  Capabilities: %08x\n",
			caps.driver,
			caps.card,
			caps.bus_info,
			(caps.version>>16)&&0xff,
			(caps.version>>24)&&0xff,
			caps.capabilities);


	struct v4l2_cropcap cropcap = {0};
	cropcap.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
	if (-1 == xioctl (fd, VIDIOC_CROPCAP, &cropcap))
	{
			perror("Querying Cropping Capabilities");
			return 1;
	}

	printf( "Camera Cropping:\n"
			"  Bounds: %dx%d+%d+%d\n"
			"  Default: %dx%d+%d+%d\n"
			"  Aspect: %d/%d\n",
			cropcap.bounds.width, cropcap.bounds.height, cropcap.bounds.left, cropcap.bounds.top,
			cropcap.defrect.width, cropcap.defrect.height, cropcap.defrect.left, cropcap.defrect.top,
			cropcap.pixelaspect.numerator, cropcap.pixelaspect.denominator);

	int support_grbg10 = 0;

	struct v4l2_fmtdesc fmtdesc = {0};
	fmtdesc.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
	char fourcc[5] = {0};
	char c, e;
	printf("\n  FMT : CE Desc\n--------------------\n");
	while (0 == xioctl(fd, VIDIOC_ENUM_FMT, &fmtdesc))
	{
			strncpy(fourcc, (char *)&fmtdesc.pixelformat, 4);
			if (fmtdesc.pixelformat == V4L2_PIX_FMT_SGRBG10)
				support_grbg10 = 1;
			c = fmtdesc.flags & 1? 'C' : ' ';
			e = fmtdesc.flags & 2? 'E' : ' ';
			printf("  %s: %c%c, %s\n", fourcc, c, e, fmtdesc.description);
			fmtdesc.index++;
	}
	/*
	if (!support_grbg10)
	{
		printf("Doesn't support GRBG10.\n");
		return 1;
	}*/
	struct v4l2_format fmt = {0};
	fmt.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
	fmt.fmt.pix.width = 640;
	fmt.fmt.pix.height = 480;
	//fmt.fmt.pix.pixelformat = V4L2_PIX_FMT_BGR24;
	//fmt.fmt.pix.pixelformat = V4L2_PIX_FMT_GREY;
	fmt.fmt.pix.pixelformat = V4L2_PIX_FMT_MJPEG;
	fmt.fmt.pix.field = V4L2_FIELD_NONE;

	if (-1 == xioctl(fd, VIDIOC_S_FMT, &fmt))
	{
		perror("Setting Pixel Format");
		//return 1;
	}else{
	strncpy(fourcc, (char *)&fmt.fmt.pix.pixelformat, 4);
	printf( "Selected Camera Mode:\n"
			"  Width: %d\n"
			"  Height: %d\n"
			"  PixFmt: %s\n"
			"  Field: %d\n",
			fmt.fmt.pix.width,
			fmt.fmt.pix.height,
			fourcc,
			fmt.fmt.pix.field);
	}

	return 0;
}

void xuc_err(void)
{
	printf("%s:errno=%d\n",__func__, errno);
	switch(errno){
	case ENOENT:
		printf("The device does not support the given control or the specified"
			"extension unit could not be found.\n");
		break;
	case ENOBUFS:
		printf("The specified buffer size is incorrect (too big or too small).\n");
		break;
	case EINVAL:
		printf("An invalid request code was passed.\n");
		break;
	case EBADRQC:
		printf("The given request is not supported by the given control.\n");
		break;
	case EFAULT:
		printf("The data pointer references an inaccessible memory area.\n");
		break;
	default:
		break;
	}
}

/*
      VideoControl Interface Descriptor:
        bLength                29
        bDescriptorType        36
        bDescriptorSubtype      6 (EXTENSION_UNIT)
        bUnitID                 3
        guidExtensionCode         {c385b80f-c268-4745-90f7-8f47579d95fc}
        bNumControl             5
        bNrPins                 1
        baSourceID( 0)          2
        bControlSize            4
        bmControls( 0)       0x7f
        bmControls( 1)       0x00
        bmControls( 2)       0x00
        bmControls( 3)       0x00
        iExtension              0 
      VideoControl Interface Descriptor:
        bLength                29
        bDescriptorType        36
        bDescriptorSubtype      6 (EXTENSION_UNIT)
        bUnitID                 4
        guidExtensionCode         {991d5a7d-325b-8b42-8cad-671b8a65f37a}
        bNumControl            23
        bNrPins                 1
        baSourceID( 0)          3
        bControlSize            4
        bmControls( 0)       0xff
        bmControls( 1)       0xff
        bmControls( 2)       0xfe
        bmControls( 3)       0x00
        iExtension              0 
*/

/**@brief Query the size of the control in bytes.
 * @return : <0 error, >0 the size of the control
 */
int xuc_UVC_GET_LEN(int fd, int unit_id)
{
	int size = -1;
	struct uvc_xu_control_query xuc;
	uint8_t data[16];
	memset(data, 0, sizeof(data));
	//UVC_GET_LEN : Query the size of the control in bytes.
	xuc.query=UVC_GET_LEN;	//0x85;
	xuc.selector=0x05;		//cs,	Control selector
	xuc.unit=unit_id;			//xuid,	Extension unit ID
	xuc.size=02;			//Control data size (in bytes)
	xuc.data=data;			//Control value
	if (-1 == xioctl(fd, UVCIOC_CTRL_QUERY, &xuc)){
		perror("UVCIOC_CTRL_QUERY :UVC_GET_LEN");
		printf("%s:errno=%d\n",__func__, errno);
		xuc_err();
		goto exit;
	}
	size= data[0] | data[1] << 8;
exit:
	printf("%s: UVC_GET_LEN(0x%x): size=%d\n",__func__, UVC_GET_LEN, size);
	return size;
}

/** @brief UVC_GET_INFO : Query the control information bitmap, 
 * which indicates whether get/set requests are supported.
 * to find out whether UVC_GET_CUR or UVC_SET_CUR are valid requests for a given control, 
 * a UVC_GET_INFO request should be made. 
 * The bits 0 (GET supported) and 1 (SET supported) of the resulting byte indicate which requests are valid.
 *
 * @param[IN] size : return from UVC_GET_LEN
 * @return : -1 failed,
 * 	The bits 0 (GET supported) and 1 (SET supported) of the resulting byte indicate which requests are valid.
 */
uint32_t xuc_UVC_GET_INFO(int fd, int unit_id, int size)
{
	uint32_t u32=-1;
	struct uvc_xu_control_query xuc;
	uint8_t data[size];

	//UVC_GET_INFO : Query the control information bitmap, which indicates whether get/set requests are supported.
	memset(data, 0, sizeof(data));
	xuc.query=UVC_GET_INFO;	//0x86;
	xuc.selector=0x05;		//cs,	Control selector
	xuc.unit=unit_id;			//xuid,	Extension unit ID
	xuc.size=size;			//Control data size (in bytes)
	xuc.data=data;			//Control value
	if (-1 == xioctl(fd, UVCIOC_CTRL_QUERY, &xuc)){
		perror("UVCIOC_CTRL_QUERY :UVC_GET_INFO");
		printf("%s:errno=%d\n",__func__, errno);
		xuc_err();
		goto exit;
	}
	u32 = data[0];
exit:
	printf("%s: UVC_GET_INFO(0x%x): u32=0x%x\n",__func__, UVC_GET_INFO, u32);	
	return u32;
}

/** @brief UVC_GET_MIN : Obtain the minimum value of the control.
 * @param[IN] size : return from UVC_GET_LEN
 * @return : -1 fail, else successful
 */
int xuc_UVC_GET_MIN(int fd, int unit_id, int size)
{
	int min=-1;
	struct uvc_xu_control_query xuc;
	uint8_t data[size];
	//UVC_GET_MIN : Obtain the minimum value of the control.
	memset(data, 0, sizeof(data));
	xuc.query=UVC_GET_MIN;	//0x82;
	xuc.selector=0x05;		//cs,	Control selector
	xuc.unit=unit_id;			//xuid,	Extension unit ID
	xuc.size=size;			//Control data size (in bytes)
	xuc.data=data;			//Control value
	if (-1 == xioctl(fd, UVCIOC_CTRL_QUERY, &xuc)){
		perror("UVCIOC_CTRL_QUERY :UVC_GET_MIN");
		printf("%s:errno=%d\n",__func__, errno);
		xuc_err();
		goto exit;
	}
	min = data[0];	//only first byte is supported.
exit:
	printf("%s: UVC_GET_MIN(0x%x): %d\n",__func__, UVC_GET_MIN, min);
	return min;
}

/** @brief UVC_GET_MAX : Obtain the maximum value of the control.
 * @param[IN] size : return from UVC_GET_LEN
 * @return : -1 fail, else successful
 */
int xuc_UVC_GET_MAX(int fd, int unit_id, int size)
{
	int max=-1;
	struct uvc_xu_control_query xuc;
	uint8_t data[size];
	//UVC_GET_MAX : Obtain the minimum value of the control.
	memset(data, 0, sizeof(data));
	xuc.query=UVC_GET_MAX;	//0x83;
	xuc.selector=0x05;		//cs,	Control selector
	xuc.unit=unit_id;			//xuid,	Extension unit ID
	xuc.size=size;			//Control data size (in bytes)
	xuc.data=data;			//Control value
	if (-1 == xioctl(fd, UVCIOC_CTRL_QUERY, &xuc)){
		perror("UVCIOC_CTRL_QUERY :UVC_GET_MAX");
		printf("%s:errno=%d\n",__func__, errno);
		xuc_err();
		goto exit;
	}
	max = data[0];	//only first byte is supported.
exit:
	printf("%s: UVC_GET_MAX(0x%x): %d\n",__func__, UVC_GET_MAX, max);
	return max;
}

/** @brief UVC_GET_DEF : Obtain the default value of the control.
 * @param[IN] size : return from UVC_GET_LEN
 * @return : -1 fail, else successful
 */
int xuc_UVC_GET_DEF(int fd, int unit_id, int size)
{
	int def=-1;
	struct uvc_xu_control_query xuc;
	uint8_t data[size];
	//UVC_GET_DEF : Obtain the default value of the control.
	memset(data, 0, sizeof(data));
	xuc.query=UVC_GET_DEF;	//0x87;
	xuc.selector=0x05;		//cs,	Control selector
	xuc.unit=unit_id;			//xuid,	Extension unit ID
	xuc.size=size;			//Control data size (in bytes)
	xuc.data=data;			//Control value
	if (-1 == xioctl(fd, UVCIOC_CTRL_QUERY, &xuc)){
		perror("UVCIOC_CTRL_QUERY :UVC_GET_DEF");
		printf("%s:errno=%d\n",__func__, errno);
		xuc_err();
		goto exit;
	}
	def = data[0];	//only first byte is supported.
exit:
	printf("%s: UVC_GET_DEF(0x%x): %d\n",__func__, UVC_GET_DEF, def);
	return def;
}

/** @brief UVC_GET_CUR : Obtain the current value of the control.
 * @param[IN] size : return from UVC_GET_LEN
 * @return : -1 error, else current value
 */
int xuc_UVC_GET_CUR(int fd, int unit_id, int size)
{
	int cur=-1;
	struct uvc_xu_control_query xuc;
	uint8_t data[size];

	//UVC_GET_CUR is supported.
	//UVC_GET_CUR : Obtain the current value of the control.
	memset(data, 0, sizeof(data));
	xuc.query=UVC_GET_CUR;	//0x81;Obtain the current value of the control
	xuc.selector=0x05;	//cs,	Control selector
	xuc.unit=unit_id;		//xuid,	Extension unit ID
	xuc.size=size;		//Control data size (in bytes)
	xuc.data=data;			//Control value
	if (-1 == xioctl(fd, UVCIOC_CTRL_QUERY, &xuc)){
		perror("UVCIOC_CTRL_QUERY :UVC_GET_CUR");
		printf("%s:errno=%d\n",__func__, errno);
		xuc_err();
		goto exit;
	}
	cur = data[0];
exit:
	printf("%s UVC_GET_CUR(0x%x) : %d\n",__func__, UVC_GET_CUR, cur);
	return cur;
}

/** @brief UVC_SET_CUR
 * return : -1 failed,
 */
int xuc_UVC_SET_CUR(int fd, int unit_id, int size, uint8_t data[])
{
	int cur = -1;
	struct uvc_xu_control_query xuc;

	//UVC_SET_CUR	Update the value of the control.
	xuc.query=UVC_SET_CUR;		//0x01;
	xuc.selector=0x05;	//cs,	Control selector
	xuc.unit=unit_id;		//xuid,	Extension unit ID
	xuc.size=size;		//	Control data size (in bytes)
	xuc.data=data;			//Control value
	if (-1 == xioctl(fd, UVCIOC_CTRL_QUERY, &xuc)){
		perror("UVCIOC_CTRL_QUERY :UVC_SET_CUR");
		printf("%s:errno=%d\n",__func__, errno);
		xuc_err();
		goto exit;
	}
	printf("%s: UVC_SET_CUR(0x%x): 0x%x 0x%x\n",__func__, UVC_SET_CUR, data[0], data[1]);
	cur = xuc_UVC_GET_CUR(fd, unit_id, size);
exit:
	printf("%s: UVC_SET_CUR(0x%x): %d\n",__func__, UVC_SET_CUR, cur);
	return cur;
}

/** @brief extension unit control : Extension unit ID is 0x03 or 0x04
 * @param[IN] int fd : v4l2 device handle
 * @param[IN] led : 0 all off, 1: turn on 850nm, 2 : 940nm LED
 * @param[IN] pwm : 0 - 255, not used yet
 * @return : < 0 error, 0 successful
 */
int set_led_pwm(int fd, uint8_t led, uint8_t pwm)
{
	int ret=-1;
	struct uvc_xu_control_query xuc;

	int unit_id=3;	//LED on, off
	printf("%s:unit_id = %d\n",__func__, unit_id);
	
	//UVC_GET_LEN : Query the size of the control in bytes.
	int size = xuc_UVC_GET_LEN(fd, unit_id);
	if(size < 0 ) goto exit;
	printf(">%s: UVC_GET_LEN(0x%x): %d\n",__func__, UVC_GET_LEN, size);

	uint32_t u32 = xuc_UVC_GET_INFO(fd, unit_id, size);
	if(u32 == -1) goto exit;
	printf(">%s: UVC_GET_INFO(0x%x): 0x%x\n",__func__, UVC_GET_INFO, u32);

	int min = xuc_UVC_GET_MIN(fd, unit_id, size);
	if(min == -1 ) goto exit;
	printf(">%s: UVC_GET_MIN(0x%x): 0x%x\n",__func__, UVC_GET_MIN, min);
	
	int max = xuc_UVC_GET_MAX(fd, unit_id, size);
	if(max == -1 ) goto exit;
	printf(">%s: UVC_GET_MAX(0x%x): 0x%x\n",__func__, UVC_GET_MAX, max);

	int def = xuc_UVC_GET_DEF(fd, unit_id, size);
	if(def == -1 ) goto exit;
	printf(">%s: UVC_GET_DEF(0x%x): 0x%x\n",__func__, UVC_GET_DEF, def);

	if(u32 & 0x01){	//UVC_GET_CUR is supported.
		int cur = xuc_UVC_GET_CUR(fd, unit_id, size);
		printf(">%s: UVC_GET_CUR(0x%x) : %d\n",__func__, UVC_GET_CUR, cur);
	}

	if(u32 & (0x01u<<1) ){//UVC_SET_CUR is supported.
		int cur = xuc_UVC_SET_CUR(fd, unit_id, size, &led);
		printf(">%s: UVC_SET_CUR(0x%x) : %d\n",__func__, UVC_SET_CUR, cur);
	}
	ret = 0;
#if 0
	//PWM?
	unit_id= 4;
	//UVC_GET_LEN : Query the size of the control in bytes.
	printf("\n\n%s:unit_id=%d\n", __func__, unit_id);
	size = xuc_UVC_GET_LEN(fd, unit_id);
	if(size < 0 ) goto exit;
	printf(">%s: UVC_GET_LEN(0x%x): %d\n",__func__, UVC_GET_LEN, size);
size=1;//???
	u32 = xuc_UVC_GET_INFO(fd, unit_id, size);
	if(u32 == -1) goto exit;
	printf(">%s: UVC_GET_INFO(0x%x): 0x%x\n",__func__, UVC_GET_INFO, u32);

	size=2;
	min = xuc_UVC_GET_MIN(fd, unit_id, size);
	if(min == -1 ) goto exit;
	printf(">%s: UVC_GET_MIN(0x%x): 0x%x\n",__func__, UVC_GET_MIN, min);
	
	max = xuc_UVC_GET_MAX(fd, unit_id, size);
	if(max == -1 ) goto exit;
	printf(">%s: UVC_GET_MAX(0x%x): 0x%x\n",__func__, UVC_GET_MAX, max);

	def = xuc_UVC_GET_DEF(fd, unit_id, size);
	if(def == -1 ) goto exit;
	printf(">%s: UVC_GET_DEF(0x%x): 0x%x\n",__func__, UVC_GET_DEF, def);

	if(u32 & 0x01){	//UVC_GET_CUR is supported.
		int cur = xuc_UVC_GET_CUR(fd, unit_id, size);
		printf(">%s: UVC_GET_CUR(0x%x) : %d\n",__func__, UVC_GET_CUR, cur);
	}

	if(u32 & (0x01u<<1) ){//UVC_SET_CUR is supported.
		int cur = xuc_UVC_SET_CUR(fd, unit_id, size, &pwm);
		printf(">%s: UVC_SET_CUR(0x%x) : %d\n",__func__, UVC_SET_CUR, cur);
	}
#endif
exit:;
	return ret;
}

int main(int argc, char **argv)
{
	int fd = -1;
	memset(device_name, 0, sizeof(device_name));
	strncpy(device_name, VIDEO_DEVICE, strlen(VIDEO_DEVICE));
	for (;;) {
		int idx;
		int c;

		c = getopt_long(argc, argv,
				short_options, long_options, &idx);

		if (-1 == c)
			break;

		switch (c) {
		case 0: /* getopt_long() flag */
			break;

		case 'd':
			memset(device_name, 0, sizeof(device_name));
			strncpy(device_name, optarg, strlen(optarg));
			printf("device_name=[%s]\n", device_name);
			break;

		case 'h':
			usage(stdout, argc, argv);
			exit(EXIT_SUCCESS);
		case 'l':
			g_led = strtol(optarg, NULL, 0);
			printf("g_led=%d\n", g_led);
			break;
		case 'p':
			g_pwm = strtol(optarg, NULL, 0);
			printf("g_pwm=%d\n", g_pwm);
			break;
		case 'v':
			g_verbose = 1;
			break;
		default:
			usage(stderr, argc, argv);
			exit(EXIT_FAILURE);
		}
	}
	printf("Opening device_name=[%s]\n", device_name);
	fd = open(device_name, O_RDWR);
	if (fd == -1)
	{
		perror("Opening video device");
		return 1;
	}
	if(print_caps(fd))
		return 1;

	set_led_pwm(fd, g_led, g_pwm);
	close(fd);

	return 0;
}

