#include "picopad.h"

// format: 4-bit paletted pixel graphics
// image width: 92 pixels
// image height: 4 lines
// image pitch: 46 bytes
const u16 Tiles4Img_Pal[15] __attribute__ ((aligned(4))) = {
	0x500A, 0x001F, 0x000A, 0x03A0, 0x53AA, 0xFFE0, 0xFBA0, 0xF800, 0xA000, 0x7000, 0x5000, 0xFFFF, 0xC618, 0x52AA, 0x0000, 
};

const u8 Tiles4Img[184] __attribute__ ((aligned(4))) = {
	0xEE, 0xEE, 0x99, 0x99, 0xDD, 0xDD, 0xDA, 0xDD, 0x53, 0x35, 0x67, 0x76, 0x0B, 0x00, 0x0B, 0x00, 
	0x0B, 0x00, 0x0B, 0x00, 0xBB, 0x00, 0xBB, 0x00, 0xBB, 0x00, 0xBB, 0x00, 0x0B, 0xC0, 0x0B, 0xC0, 
	0x0B, 0xC0, 0x0B, 0xC0, 0x0B, 0xB0, 0x0B, 0xB0, 0x0B, 0xB0, 0x0B, 0xB0, 0x0B, 0xB0, 0xEE, 0xEE, 
	0x99, 0x99, 0xDD, 0xDD, 0xA8, 0x7D, 0x35, 0x35, 0x76, 0x76, 0xBB, 0xB0, 0xBB, 0xB0, 0xBB, 0xB0, 
	0xBB, 0xB0, 0xBB, 0xC0, 0xBB, 0xC0, 0xBB, 0xC0, 0xBB, 0xC0, 0xCB, 0xB0, 0xCB, 0xB0, 0xCB, 0xB0, 
	0xCB, 0xB0, 0xBB, 0xB0, 0xBB, 0xB0, 0xBB, 0xB0, 0xBB, 0xB0, 0xBB, 0xB0, 0xEE, 0xEE, 0x99, 0x99, 
	0xDD, 0xDD, 0xD7, 0xDD, 0x33, 0x55, 0x77, 0x66, 0x0B, 0x10, 0x0C, 0x10, 0x0B, 0x10, 0x0B, 0x10, 
	0xB1, 0x10, 0xC1, 0x10, 0xB1, 0x10, 0xB1, 0x10, 0x01, 0x10, 0x0C, 0x10, 0x01, 0x10, 0x01, 0x10, 
	0xB1, 0xC0, 0xC1, 0xB0, 0xB1, 0xC0, 0xB1, 0xC0, 0xC1, 0xC0, 0xEE, 0xEE, 0x99, 0x99, 0xDD, 0xDD, 
	0xDD, 0xDD, 0x55, 0x55, 0x66, 0x66, 0x0C, 0xC0, 0x0C, 0x00, 0x0C, 0xC0, 0x0C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x0B, 0x00, 0x0C, 0x00, 0x0C, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};