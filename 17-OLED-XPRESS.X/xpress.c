/*
 *  OLED display image 
 *  96 x 40 
 */ 
#include "mcc_generated_files/mcc.h"

const uint8_t xpress[]={ 
0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0xc0, 0xc0, 0x60, 0x60, 0xf0, 0xb0, 0xb0, 0xb0, 0xd8, 
0xd8, 0xc8, 0xec, 0xec, 0xfc, 0xf6, 0xf6, 0xfe, 0xcb, 0xfe, 0xf6, 0xf6, 0xfc, 0xec, 0xec, 0xc8, 
0xd8, 0xd8, 0xb0, 0xb0, 0xb0, 0xf0, 0x60, 0x60, 0xc0, 0xc0, 0xc0, 0x80, 0x80, 0x80, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x3f, 0xf3, 0x03, 0xfd, 0xfd, 0xff, 0x0e, 0x0e, 0x1f, 0xff, 0xff, 0x1f, 0x0f, 0x0f, 0x0f, 0xff, 
0x0f, 0x0f, 0xef, 0xef, 0x0f, 0x0f, 0xff, 0x0f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x0f, 
0x0f, 0x1f, 0xff, 0xff, 0x0f, 0x0f, 0xef, 0xef, 0x0f, 0x0e, 0xfe, 0xff, 0xfd, 0xfd, 0x3d, 0xf3, 
0x1e, 0x46, 0xc0, 0xc0, 0x80, 0x00, 0x80, 0xc0, 0x40, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 
0xc0, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0xc0, 0xc0, 0x40, 0x40, 0x40, 0x40, 0x00, 
0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 
0x40, 0x7f, 0x7c, 0x0f, 0x7f, 0x7f, 0x60, 0x60, 0x78, 0x61, 0x63, 0x70, 0x7f, 0x60, 0x60, 0x7f, 
0x60, 0x60, 0x7c, 0x7c, 0x7c, 0x7e, 0x7f, 0x60, 0x60, 0x67, 0x67, 0x67, 0x7f, 0x63, 0x60, 0x78, 
0x78, 0x60, 0x63, 0x7f, 0x60, 0x60, 0x66, 0x66, 0x60, 0x71, 0x7f, 0x7f, 0x7f, 0x0f, 0x60, 0x7f, 
0x40, 0x10, 0x18, 0x1c, 0x0f, 0x07, 0x07, 0x09, 0x10, 0x00, 0x1f, 0x02, 0x02, 0x02, 0x02, 0x02, 
0x03, 0x00, 0x1f, 0x02, 0x06, 0x0e, 0x1a, 0x13, 0x00, 0x1f, 0x1f, 0x12, 0x12, 0x12, 0x10, 0x00, 
0x13, 0x13, 0x12, 0x12, 0x12, 0x12, 0x1e, 0x00, 0x13, 0x13, 0x12, 0x12, 0x12, 0x12, 0x1e, 0x00, 
0x00, 0x08, 0x38, 0x78, 0xc0, 0xd8, 0xa8, 0xb8, 0xb8, 0x78, 0x78, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 
0xf8, 0xf8, 0xf8, 0xf8, 0x78, 0x78, 0x78, 0xb8, 0xa8, 0xe8, 0xd8, 0xf0, 0x78, 0x08, 0x08, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x03, 0x06, 0x06, 0x0f, 0x0d, 
0x0d, 0x1b, 0x1b, 0x37, 0x37, 0x3f, 0x6f, 0x69, 0x69, 0x6f, 0x37, 0x37, 0x33, 0x1b, 0x1f, 0x0d, 
0x0d, 0x0e, 0x06, 0x06, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
