/* header image file format (GREY): checkdata.h  */

static unsigned int width = 24;
static unsigned int height = 24;

/*  Call this macro repeatedly.  After each use, the pixel data can be extracted  */

#define HEADER_PIXEL(data,pixel) {\
pixel[0] = pixel[1] = pixel[2] = (unsigned char)*data; \
++data; \
}

static const char header_data[] = { 
	255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,248,233,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,192,30,107,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,255,255,255,255,190,6,0,35,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,255,255,255,232,22,0,83,252,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,255,255,255,90,0,54,252,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,255,255,201,1,2,223,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,249,176,255,255,255,255,74,0,117,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,114,0,138,255,255,206,0,11,236,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,134,0,1,180,255,103,0,106,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,131,0,28,238,14,0,212,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,254,41,0,63,0,52,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,175,0,0,0,141,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,253,10,0,0,226,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,51,0,0,255,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,189,0,121,255,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,253,26,191,255,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,125,248,255,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,245,255,255,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
	,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255
 };
