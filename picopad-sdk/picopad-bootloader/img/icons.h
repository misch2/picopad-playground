#ifndef PICOPAD_LOADER_ICONS_H
#define PICOPAD_LOADER_ICONS_H

#include "picopad.h"

// format: compressed 8-bit paletted pixel graphics
// image width: 30 pixels
// image height: 30 lines
// image pitch: 30 bytes
const u16 BatteryIconImg_Pal[256] __attribute__ ((aligned(4))) = {
        0x0000, 0x8000, 0x0400, 0x8400, 0x0010, 0x8010, 0x0410, 0xC618, 0xC6F8, 0xA65E, 0x4100, 0x6100, 0x8100, 0xA100,
        0xC100, 0xE100,
        0x0200, 0x2200, 0x4200, 0x6200, 0x8200, 0xA200, 0xC200, 0xE200, 0x0300, 0x2300, 0x4300, 0x6300, 0x8300, 0xA300,
        0xC300, 0xE300,
        0x0400, 0x2400, 0x4400, 0x6400, 0x8400, 0xA400, 0xC400, 0xE400, 0x0500, 0x2500, 0x4500, 0x6500, 0x8500, 0xA500,
        0xC500, 0xE500,
        0x0600, 0x2600, 0x4600, 0x6600, 0x8600, 0xA600, 0xC600, 0xE600, 0x0700, 0x2700, 0x4700, 0x6700, 0x8700, 0xA700,
        0xC700, 0xE700,
        0x0008, 0x2008, 0x4008, 0x6008, 0x8008, 0xA008, 0xC008, 0xE008, 0x0108, 0x2108, 0x4108, 0x6108, 0x8108, 0xA108,
        0xC108, 0xE108,
        0x0208, 0x2208, 0x4208, 0x6208, 0x8208, 0xA208, 0xC208, 0xE208, 0x0308, 0x2308, 0x4308, 0x6308, 0x8308, 0xA308,
        0xC308, 0xE308,
        0x0408, 0x2408, 0x4408, 0x6408, 0x8408, 0xA408, 0xC408, 0xE408, 0x0508, 0x2508, 0x4508, 0x6508, 0x8508, 0xA508,
        0xC508, 0xE508,
        0x0608, 0x2608, 0x4608, 0x6608, 0x8608, 0xA608, 0xC608, 0xE608, 0x0708, 0x2708, 0x4708, 0x6708, 0x8708, 0xA708,
        0xC708, 0xE708,
        0x0010, 0x2010, 0x4010, 0x6010, 0x8010, 0xA010, 0xC010, 0xE010, 0x0110, 0x2110, 0x4110, 0x6110, 0x8110, 0xA110,
        0xC110, 0xE110,
        0x0210, 0x2210, 0x4210, 0x6210, 0x8210, 0xA210, 0xC210, 0xE210, 0x0310, 0x2310, 0x4310, 0x6310, 0x8310, 0xA310,
        0xC310, 0xE310,
        0x0410, 0x2410, 0x4410, 0x6410, 0x8410, 0xA410, 0xC410, 0xE410, 0x0510, 0x2510, 0x4510, 0x6510, 0x8510, 0xA510,
        0xC510, 0xE510,
        0x0610, 0x2610, 0x4610, 0x6610, 0x8610, 0xA610, 0xC610, 0xE610, 0x0710, 0x2710, 0x4710, 0x6710, 0x8710, 0xA710,
        0xC710, 0xE710,
        0x0018, 0x2018, 0x4018, 0x6018, 0x8018, 0xA018, 0xC018, 0xE018, 0x0118, 0x2118, 0x4118, 0x6118, 0x8118, 0xA118,
        0xC118, 0xE118,
        0x0218, 0x2218, 0x4218, 0x6218, 0x8218, 0xA218, 0xC218, 0xE218, 0x0318, 0x2318, 0x4318, 0x6318, 0x8318, 0xA318,
        0xC318, 0xE318,
        0x0418, 0x2418, 0x4418, 0x6418, 0x8418, 0xA418, 0xC418, 0xE418, 0x0518, 0x2518, 0x4518, 0x6518, 0x8518, 0xA518,
        0xC518, 0xE518,
        0x0618, 0x2618, 0x4618, 0x6618, 0x8618, 0xA618, 0xFFDE, 0xA514, 0x8410, 0xF800, 0x07E0, 0xFFE0, 0x001F, 0xF81F,
        0x07FF, 0xFFFF,
};

const u8 BatteryIconImg[232] __attribute__ ((aligned(4))) = {
        0x9B, 0x00, 0x9B, 0x00, 0x9B, 0x00, 0x9B, 0x00, 0x9B, 0x00, 0x9B, 0x00, 0x9B, 0x00, 0x9B, 0x00,
        0x9B, 0x00, 0x81, 0x00, 0x03, 0x5B, 0x07, 0xF6, 0xF6, 0x88, 0xFF, 0x03, 0xF6, 0xF6, 0xA4, 0x48,
        0x84, 0x00, 0x80, 0x00, 0x00, 0xA4, 0x8F, 0xFF, 0x00, 0x07, 0x84, 0x00, 0x80, 0x00, 0x04, 0xF6,
        0xFF, 0xA4, 0x49, 0x48, 0x87, 0x00, 0x05, 0x48, 0x48, 0x9A, 0xF6, 0xFF, 0x51, 0x83, 0x00, 0x04,
        0x00, 0x00, 0x51, 0xFF, 0xF6, 0x8D, 0x00, 0x05, 0xF7, 0xFF, 0xA3, 0x00, 0x48, 0x49, 0x80, 0x00,
        0x04, 0x00, 0x00, 0x52, 0xFF, 0xF6, 0x8D, 0x00, 0x08, 0xF7, 0xFF, 0xA4, 0x00, 0xF7, 0xFF, 0x49,
        0x00, 0x00, 0x04, 0x00, 0x00, 0x52, 0xFF, 0x07, 0x8D, 0x00, 0x08, 0xA4, 0xFF, 0xA4, 0x00, 0x07,
        0xFF, 0x52, 0x00, 0x00, 0x04, 0x00, 0x00, 0x52, 0xFF, 0x07, 0x8D, 0x00, 0x08, 0xA4, 0xFF, 0xA4,
        0x00, 0x07, 0xFF, 0x52, 0x00, 0x00, 0x04, 0x00, 0x00, 0x52, 0xFF, 0xF6, 0x8D, 0x00, 0x08, 0xF7,
        0xFF, 0xA4, 0x00, 0xF7, 0xFF, 0x49, 0x00, 0x00, 0x04, 0x00, 0x00, 0x51, 0xFF, 0xF6, 0x8D, 0x00,
        0x05, 0xF7, 0xFF, 0xA3, 0x00, 0x48, 0x49, 0x80, 0x00, 0x80, 0x00, 0x04, 0xF6, 0xFF, 0xA4, 0x49,
        0x48, 0x87, 0x00, 0x05, 0x48, 0x49, 0x9A, 0xF6, 0xFF, 0x51, 0x83, 0x00, 0x80, 0x00, 0x00, 0xA4,
        0x8F, 0xFF, 0x00, 0x07, 0x84, 0x00, 0x81, 0x00, 0x03, 0x5B, 0x07, 0xF6, 0xF6, 0x87, 0xFF, 0x80,
        0xF6, 0x01, 0xA4, 0x48, 0x84, 0x00, 0x9B, 0x00, 0x9B, 0x00, 0x9B, 0x00, 0x9B, 0x00, 0x9B, 0x00,
        0x9B, 0x00, 0x9B, 0x00, 0x9B, 0x00, 0x9B, 0x00,
};

// format: compressed 8-bit paletted pixel graphics
// image width: 20 pixels
// image height: 20 lines
// image pitch: 20 bytes
const u16 SpeakerImg_Pal[256] __attribute__ ((aligned(4))) = {
        0x0000, 0x8000, 0x0400, 0x8400, 0x0010, 0x8010, 0x0410, 0xC618, 0xC6F8, 0xA65E, 0x4100, 0x6100, 0x8100, 0xA100,
        0xC100, 0xE100,
        0x0200, 0x2200, 0x4200, 0x6200, 0x8200, 0xA200, 0xC200, 0xE200, 0x0300, 0x2300, 0x4300, 0x6300, 0x8300, 0xA300,
        0xC300, 0xE300,
        0x0400, 0x2400, 0x4400, 0x6400, 0x8400, 0xA400, 0xC400, 0xE400, 0x0500, 0x2500, 0x4500, 0x6500, 0x8500, 0xA500,
        0xC500, 0xE500,
        0x0600, 0x2600, 0x4600, 0x6600, 0x8600, 0xA600, 0xC600, 0xE600, 0x0700, 0x2700, 0x4700, 0x6700, 0x8700, 0xA700,
        0xC700, 0xE700,
        0x0008, 0x2008, 0x4008, 0x6008, 0x8008, 0xA008, 0xC008, 0xE008, 0x0108, 0x2108, 0x4108, 0x6108, 0x8108, 0xA108,
        0xC108, 0xE108,
        0x0208, 0x2208, 0x4208, 0x6208, 0x8208, 0xA208, 0xC208, 0xE208, 0x0308, 0x2308, 0x4308, 0x6308, 0x8308, 0xA308,
        0xC308, 0xE308,
        0x0408, 0x2408, 0x4408, 0x6408, 0x8408, 0xA408, 0xC408, 0xE408, 0x0508, 0x2508, 0x4508, 0x6508, 0x8508, 0xA508,
        0xC508, 0xE508,
        0x0608, 0x2608, 0x4608, 0x6608, 0x8608, 0xA608, 0xC608, 0xE608, 0x0708, 0x2708, 0x4708, 0x6708, 0x8708, 0xA708,
        0xC708, 0xE708,
        0x0010, 0x2010, 0x4010, 0x6010, 0x8010, 0xA010, 0xC010, 0xE010, 0x0110, 0x2110, 0x4110, 0x6110, 0x8110, 0xA110,
        0xC110, 0xE110,
        0x0210, 0x2210, 0x4210, 0x6210, 0x8210, 0xA210, 0xC210, 0xE210, 0x0310, 0x2310, 0x4310, 0x6310, 0x8310, 0xA310,
        0xC310, 0xE310,
        0x0410, 0x2410, 0x4410, 0x6410, 0x8410, 0xA410, 0xC410, 0xE410, 0x0510, 0x2510, 0x4510, 0x6510, 0x8510, 0xA510,
        0xC510, 0xE510,
        0x0610, 0x2610, 0x4610, 0x6610, 0x8610, 0xA610, 0xC610, 0xE610, 0x0710, 0x2710, 0x4710, 0x6710, 0x8710, 0xA710,
        0xC710, 0xE710,
        0x0018, 0x2018, 0x4018, 0x6018, 0x8018, 0xA018, 0xC018, 0xE018, 0x0118, 0x2118, 0x4118, 0x6118, 0x8118, 0xA118,
        0xC118, 0xE118,
        0x0218, 0x2218, 0x4218, 0x6218, 0x8218, 0xA218, 0xC218, 0xE218, 0x0318, 0x2318, 0x4318, 0x6318, 0x8318, 0xA318,
        0xC318, 0xE318,
        0x0418, 0x2418, 0x4418, 0x6418, 0x8418, 0xA418, 0xC418, 0xE418, 0x0518, 0x2518, 0x4518, 0x6518, 0x8518, 0xA518,
        0xC518, 0xE518,
        0x0618, 0x2618, 0x4618, 0x6618, 0x8618, 0xA618, 0xFFDE, 0xA514, 0x8410, 0xF800, 0x07E0, 0xFFE0, 0x001F, 0xF81F,
        0x07FF, 0xFFFF,
};

const u8 SpeakerImg[291] __attribute__ ((aligned(4))) = {
        0x91, 0x00, 0x86, 0x00, 0x01, 0x52, 0x48, 0x86, 0x00, 0x84, 0x00, 0x03, 0x49, 0x07, 0xFF, 0xF5,
        0x86, 0x00, 0x83, 0x00, 0x08, 0x49, 0xF6, 0xFF, 0xFF, 0xF6, 0x00, 0x00, 0x10, 0x11, 0x82, 0x00,
        0x82, 0x00, 0x0B, 0x49, 0xF6, 0xFF, 0xA4, 0xF6, 0xF6, 0x00, 0x00, 0x11, 0x2A, 0x2A, 0x11, 0x80,
        0x00, 0x81, 0x00, 0x06, 0x52, 0xF6, 0xFF, 0x9B, 0x00, 0xF6, 0xF6, 0x80, 0x00, 0x05, 0x10, 0x21,
        0x2A, 0x11, 0x00, 0x00, 0x02, 0x00, 0x5A, 0x07, 0x80, 0xF6, 0x0D, 0x9A, 0x00, 0x00, 0xF6, 0xF6,
        0x00, 0x00, 0x10, 0x00, 0x00, 0x21, 0x2A, 0x10, 0x00, 0x00, 0x48, 0x81, 0xF6, 0x00, 0x52, 0x80,
        0x00, 0x0A, 0xF6, 0xF6, 0x00, 0x10, 0x2A, 0x19, 0x00, 0x10, 0x2A, 0x19, 0x00, 0x02, 0x51, 0xFF,
        0xA4, 0x83, 0x00, 0x0A, 0xF6, 0xF6, 0x00, 0x00, 0x19, 0x2A, 0x11, 0x00, 0x21, 0x2A, 0x00, 0x02,
        0x51, 0xFF, 0xA4, 0x83, 0x00, 0x01, 0xF6, 0xF6, 0x80, 0x00, 0x05, 0x2A, 0x19, 0x00, 0x19, 0x2A,
        0x00, 0x02, 0x51, 0xFF, 0xA4, 0x83, 0x00, 0x01, 0xF6, 0xF6, 0x80, 0x00, 0x05, 0x2A, 0x19, 0x00,
        0x19, 0x2A, 0x00, 0x02, 0x51, 0xFF, 0xA4, 0x83, 0x00, 0x0A, 0xF6, 0xF6, 0x00, 0x00, 0x19, 0x2A,
        0x11, 0x00, 0x21, 0x2A, 0x00, 0x00, 0x49, 0x80, 0xF6, 0x01, 0x07, 0x52, 0x80, 0x00, 0x0A, 0xF6,
        0xF6, 0x00, 0x10, 0x2A, 0x19, 0x00, 0x10, 0x2A, 0x19, 0x00, 0x13, 0x00, 0x5B, 0xF6, 0xF6, 0xFF,
        0xF6, 0x52, 0x00, 0x00, 0xF6, 0xF6, 0x00, 0x00, 0x10, 0x00, 0x00, 0x21, 0x2A, 0x10, 0x00, 0x81,
        0x00, 0x06, 0x52, 0xF6, 0xFF, 0x5B, 0x00, 0xF6, 0xF6, 0x80, 0x00, 0x05, 0x10, 0x21, 0x2A, 0x11,
        0x00, 0x00, 0x82, 0x00, 0x0B, 0x49, 0xF6, 0xFF, 0xA4, 0xF6, 0xF6, 0x00, 0x00, 0x11, 0x2A, 0x2A,
        0x11, 0x80, 0x00, 0x83, 0x00, 0x08, 0x49, 0xF6, 0xFF, 0xFF, 0xF6, 0x00, 0x00, 0x10, 0x11, 0x82,
        0x00, 0x84, 0x00, 0x03, 0x48, 0x07, 0xFF, 0xF5, 0x86, 0x00, 0x86, 0x00, 0x01, 0x52, 0x48, 0x86,
        0x00, 0x91, 0x00,
};

// format: compressed 8-bit paletted pixel graphics
// image width: 20 pixels
// image height: 20 lines
// image pitch: 20 bytes
const u16 SpeakerOffImg_Pal[256] __attribute__ ((aligned(4))) = {
        0x0000, 0x8000, 0x0400, 0x8400, 0x0010, 0x8010, 0x0410, 0xC618, 0xC6F8, 0xA65E, 0x4100, 0x6100, 0x8100, 0xA100,
        0xC100, 0xE100,
        0x0200, 0x2200, 0x4200, 0x6200, 0x8200, 0xA200, 0xC200, 0xE200, 0x0300, 0x2300, 0x4300, 0x6300, 0x8300, 0xA300,
        0xC300, 0xE300,
        0x0400, 0x2400, 0x4400, 0x6400, 0x8400, 0xA400, 0xC400, 0xE400, 0x0500, 0x2500, 0x4500, 0x6500, 0x8500, 0xA500,
        0xC500, 0xE500,
        0x0600, 0x2600, 0x4600, 0x6600, 0x8600, 0xA600, 0xC600, 0xE600, 0x0700, 0x2700, 0x4700, 0x6700, 0x8700, 0xA700,
        0xC700, 0xE700,
        0x0008, 0x2008, 0x4008, 0x6008, 0x8008, 0xA008, 0xC008, 0xE008, 0x0108, 0x2108, 0x4108, 0x6108, 0x8108, 0xA108,
        0xC108, 0xE108,
        0x0208, 0x2208, 0x4208, 0x6208, 0x8208, 0xA208, 0xC208, 0xE208, 0x0308, 0x2308, 0x4308, 0x6308, 0x8308, 0xA308,
        0xC308, 0xE308,
        0x0408, 0x2408, 0x4408, 0x6408, 0x8408, 0xA408, 0xC408, 0xE408, 0x0508, 0x2508, 0x4508, 0x6508, 0x8508, 0xA508,
        0xC508, 0xE508,
        0x0608, 0x2608, 0x4608, 0x6608, 0x8608, 0xA608, 0xC608, 0xE608, 0x0708, 0x2708, 0x4708, 0x6708, 0x8708, 0xA708,
        0xC708, 0xE708,
        0x0010, 0x2010, 0x4010, 0x6010, 0x8010, 0xA010, 0xC010, 0xE010, 0x0110, 0x2110, 0x4110, 0x6110, 0x8110, 0xA110,
        0xC110, 0xE110,
        0x0210, 0x2210, 0x4210, 0x6210, 0x8210, 0xA210, 0xC210, 0xE210, 0x0310, 0x2310, 0x4310, 0x6310, 0x8310, 0xA310,
        0xC310, 0xE310,
        0x0410, 0x2410, 0x4410, 0x6410, 0x8410, 0xA410, 0xC410, 0xE410, 0x0510, 0x2510, 0x4510, 0x6510, 0x8510, 0xA510,
        0xC510, 0xE510,
        0x0610, 0x2610, 0x4610, 0x6610, 0x8610, 0xA610, 0xC610, 0xE610, 0x0710, 0x2710, 0x4710, 0x6710, 0x8710, 0xA710,
        0xC710, 0xE710,
        0x0018, 0x2018, 0x4018, 0x6018, 0x8018, 0xA018, 0xC018, 0xE018, 0x0118, 0x2118, 0x4118, 0x6118, 0x8118, 0xA118,
        0xC118, 0xE118,
        0x0218, 0x2218, 0x4218, 0x6218, 0x8218, 0xA218, 0xC218, 0xE218, 0x0318, 0x2318, 0x4318, 0x6318, 0x8318, 0xA318,
        0xC318, 0xE318,
        0x0418, 0x2418, 0x4418, 0x6418, 0x8418, 0xA418, 0xC418, 0xE418, 0x0518, 0x2518, 0x4518, 0x6518, 0x8518, 0xA518,
        0xC518, 0xE518,
        0x0618, 0x2618, 0x4618, 0x6618, 0x8618, 0xA618, 0xFFDE, 0xA514, 0x8410, 0xF800, 0x07E0, 0xFFE0, 0x001F, 0xF81F,
        0x07FF, 0xFFFF,
};

const u8 SpeakerOffImg[242] __attribute__ ((aligned(4))) = {
        0x91, 0x00, 0x86, 0x00, 0x01, 0x52, 0x48, 0x86, 0x00, 0x84, 0x00, 0x03, 0x48, 0x07, 0xFF, 0xF5,
        0x86, 0x00, 0x83, 0x00, 0x04, 0x49, 0xF6, 0xFF, 0xFF, 0xF6, 0x86, 0x00, 0x82, 0x00, 0x05, 0x49,
        0xF6, 0xFF, 0xA4, 0xF6, 0xF6, 0x86, 0x00, 0x81, 0x00, 0x06, 0x52, 0xF6, 0xFF, 0x9B, 0x00, 0xF6,
        0xF6, 0x86, 0x00, 0x02, 0x00, 0x5A, 0x07, 0x80, 0xF6, 0x04, 0x9A, 0x00, 0x00, 0xF6, 0xF6, 0x86,
        0x00, 0x00, 0x48, 0x81, 0xF6, 0x00, 0x52, 0x80, 0x00, 0x0A, 0xF6, 0xF6, 0x00, 0x4A, 0x5F, 0x0C,
        0x00, 0x00, 0x56, 0x17, 0x00, 0x02, 0x51, 0xFF, 0xA4, 0x83, 0x00, 0x0A, 0xF6, 0xF6, 0x00, 0x00,
        0x56, 0x5F, 0x0C, 0x56, 0x5F, 0x0C, 0x00, 0x02, 0x51, 0xFF, 0xA4, 0x83, 0x00, 0x01, 0xF6, 0xF6,
        0x80, 0x00, 0x05, 0x56, 0x5F, 0x5F, 0x0C, 0x00, 0x00, 0x02, 0x51, 0xFF, 0xA4, 0x83, 0x00, 0x01,
        0xF6, 0xF6, 0x80, 0x00, 0x05, 0x56, 0x17, 0x5F, 0x0C, 0x00, 0x00, 0x02, 0x51, 0xFF, 0xA4, 0x83,
        0x00, 0x0A, 0xF6, 0xF6, 0x00, 0x00, 0x56, 0x5F, 0x0C, 0x56, 0x5F, 0x0C, 0x00, 0x00, 0x48, 0x80,
        0xF6, 0x01, 0x07, 0x52, 0x80, 0x00, 0x0A, 0xF6, 0xF6, 0x00, 0x4A, 0x5F, 0x0C, 0x00, 0x00, 0x56,
        0x17, 0x00, 0x01, 0x00, 0x5B, 0x81, 0xF6, 0x04, 0x52, 0x00, 0x00, 0xF6, 0xF6, 0x86, 0x00, 0x81,
        0x00, 0x06, 0x52, 0xF6, 0xFF, 0x5B, 0x00, 0xF6, 0xF6, 0x86, 0x00, 0x82, 0x00, 0x05, 0x51, 0xF6,
        0xFF, 0xA4, 0xF6, 0xF6, 0x86, 0x00, 0x83, 0x00, 0x04, 0x49, 0xF6, 0xFF, 0xFF, 0xF6, 0x86, 0x00,
        0x84, 0x00, 0x03, 0x48, 0x07, 0xFF, 0xF5, 0x86, 0x00, 0x86, 0x00, 0x01, 0x52, 0x48, 0x86, 0x00,
        0x91, 0x00,
};

// format: compressed 8-bit paletted pixel graphics
// image width: 18 pixels
// image height: 18 lines
// image pitch: 18 bytes
const u16 BrightnessImg_Pal[256] __attribute__ ((aligned(4))) = {
        0x0000, 0x8000, 0x0400, 0x8400, 0x0010, 0x8010, 0x0410, 0xC618, 0xC6F8, 0xA65E, 0x4100, 0x6100, 0x8100, 0xA100,
        0xC100, 0xE100,
        0x0200, 0x2200, 0x4200, 0x6200, 0x8200, 0xA200, 0xC200, 0xE200, 0x0300, 0x2300, 0x4300, 0x6300, 0x8300, 0xA300,
        0xC300, 0xE300,
        0x0400, 0x2400, 0x4400, 0x6400, 0x8400, 0xA400, 0xC400, 0xE400, 0x0500, 0x2500, 0x4500, 0x6500, 0x8500, 0xA500,
        0xC500, 0xE500,
        0x0600, 0x2600, 0x4600, 0x6600, 0x8600, 0xA600, 0xC600, 0xE600, 0x0700, 0x2700, 0x4700, 0x6700, 0x8700, 0xA700,
        0xC700, 0xE700,
        0x0008, 0x2008, 0x4008, 0x6008, 0x8008, 0xA008, 0xC008, 0xE008, 0x0108, 0x2108, 0x4108, 0x6108, 0x8108, 0xA108,
        0xC108, 0xE108,
        0x0208, 0x2208, 0x4208, 0x6208, 0x8208, 0xA208, 0xC208, 0xE208, 0x0308, 0x2308, 0x4308, 0x6308, 0x8308, 0xA308,
        0xC308, 0xE308,
        0x0408, 0x2408, 0x4408, 0x6408, 0x8408, 0xA408, 0xC408, 0xE408, 0x0508, 0x2508, 0x4508, 0x6508, 0x8508, 0xA508,
        0xC508, 0xE508,
        0x0608, 0x2608, 0x4608, 0x6608, 0x8608, 0xA608, 0xC608, 0xE608, 0x0708, 0x2708, 0x4708, 0x6708, 0x8708, 0xA708,
        0xC708, 0xE708,
        0x0010, 0x2010, 0x4010, 0x6010, 0x8010, 0xA010, 0xC010, 0xE010, 0x0110, 0x2110, 0x4110, 0x6110, 0x8110, 0xA110,
        0xC110, 0xE110,
        0x0210, 0x2210, 0x4210, 0x6210, 0x8210, 0xA210, 0xC210, 0xE210, 0x0310, 0x2310, 0x4310, 0x6310, 0x8310, 0xA310,
        0xC310, 0xE310,
        0x0410, 0x2410, 0x4410, 0x6410, 0x8410, 0xA410, 0xC410, 0xE410, 0x0510, 0x2510, 0x4510, 0x6510, 0x8510, 0xA510,
        0xC510, 0xE510,
        0x0610, 0x2610, 0x4610, 0x6610, 0x8610, 0xA610, 0xC610, 0xE610, 0x0710, 0x2710, 0x4710, 0x6710, 0x8710, 0xA710,
        0xC710, 0xE710,
        0x0018, 0x2018, 0x4018, 0x6018, 0x8018, 0xA018, 0xC018, 0xE018, 0x0118, 0x2118, 0x4118, 0x6118, 0x8118, 0xA118,
        0xC118, 0xE118,
        0x0218, 0x2218, 0x4218, 0x6218, 0x8218, 0xA218, 0xC218, 0xE218, 0x0318, 0x2318, 0x4318, 0x6318, 0x8318, 0xA318,
        0xC318, 0xE318,
        0x0418, 0x2418, 0x4418, 0x6418, 0x8418, 0xA418, 0xC418, 0xE418, 0x0518, 0x2518, 0x4518, 0x6518, 0x8518, 0xA518,
        0xC518, 0xE518,
        0x0618, 0x2618, 0x4618, 0x6618, 0x8618, 0xA618, 0xFFDE, 0xA514, 0x8410, 0xF800, 0x07E0, 0xFFE0, 0x001F, 0xF81F,
        0x07FF, 0xFFFF,
};

const u8 BrightnessImg[220] __attribute__ ((aligned(4))) = {
        0x85, 0x00, 0x01, 0x48, 0x48, 0x85, 0x00, 0x85, 0x00, 0x01, 0xF7, 0xF7, 0x85, 0x00, 0x85, 0x00,
        0x01, 0x07, 0x07, 0x85, 0x00, 0x80, 0x00, 0x01, 0x07, 0xF7, 0x80, 0x00, 0x01, 0x9A, 0x9A, 0x80,
        0x00, 0x01, 0xF7, 0x07, 0x80, 0x00, 0x80, 0x00, 0x02, 0xF7, 0xFF, 0x5B, 0x83, 0x00, 0x02, 0x5A,
        0xFF, 0xF7, 0x80, 0x00, 0x81, 0x00, 0x09, 0x5B, 0x48, 0x00, 0x5B, 0xF7, 0xF7, 0x5B, 0x00, 0x48,
        0x5A, 0x81, 0x00, 0x83, 0x00, 0x05, 0x07, 0xFF, 0xF6, 0xF6, 0xFF, 0xF5, 0x83, 0x00, 0x82, 0x00,
        0x07, 0x5B, 0xFF, 0xA4, 0x48, 0x48, 0xA4, 0xFF, 0x5B, 0x82, 0x00, 0x11, 0x48, 0xF7, 0x07, 0x9A,
        0x00, 0xF7, 0xF6, 0x48, 0x00, 0x00, 0x48, 0xF6, 0xF7, 0x00, 0x9A, 0x07, 0xF7, 0x48, 0x11, 0x48,
        0xF7, 0x07, 0x9A, 0x00, 0xF7, 0xF6, 0x48, 0x00, 0x00, 0x48, 0xF6, 0xF7, 0x00, 0x9A, 0x07, 0xF7,
        0x48, 0x82, 0x00, 0x07, 0x5B, 0xFF, 0xA4, 0x48, 0x48, 0xA4, 0xFF, 0x5B, 0x82, 0x00, 0x83, 0x00,
        0x05, 0xF5, 0xFF, 0xF6, 0xF6, 0xFF, 0xF5, 0x83, 0x00, 0x81, 0x00, 0x09, 0x5A, 0x48, 0x00, 0x5B,
        0xF7, 0xF7, 0x5B, 0x00, 0x48, 0x5A, 0x81, 0x00, 0x80, 0x00, 0x02, 0xF7, 0xFF, 0x5A, 0x83, 0x00,
        0x02, 0x5A, 0xFF, 0xF7, 0x80, 0x00, 0x80, 0x00, 0x01, 0x07, 0xF7, 0x80, 0x00, 0x01, 0x9A, 0x9A,
        0x80, 0x00, 0x01, 0xF7, 0x07, 0x80, 0x00, 0x85, 0x00, 0x01, 0x07, 0x07, 0x85, 0x00, 0x85, 0x00,
        0x01, 0xF7, 0xF7, 0x85, 0x00, 0x85, 0x00, 0x01, 0x48, 0x48, 0x85, 0x00,
};

// format: compressed 8-bit paletted pixel graphics
// image width: 18 pixels
// image height: 18 lines
// image pitch: 18 bytes
const u16 SpeakerBarImg_Pal[256] __attribute__ ((aligned(4))) = {
        0x0000, 0x8000, 0x0400, 0x8400, 0x0010, 0x8010, 0x0410, 0xC618, 0xC6F8, 0xA65E, 0x4100, 0x6100, 0x8100, 0xA100,
        0xC100, 0xE100,
        0x0200, 0x2200, 0x4200, 0x6200, 0x8200, 0xA200, 0xC200, 0xE200, 0x0300, 0x2300, 0x4300, 0x6300, 0x8300, 0xA300,
        0xC300, 0xE300,
        0x0400, 0x2400, 0x4400, 0x6400, 0x8400, 0xA400, 0xC400, 0xE400, 0x0500, 0x2500, 0x4500, 0x6500, 0x8500, 0xA500,
        0xC500, 0xE500,
        0x0600, 0x2600, 0x4600, 0x6600, 0x8600, 0xA600, 0xC600, 0xE600, 0x0700, 0x2700, 0x4700, 0x6700, 0x8700, 0xA700,
        0xC700, 0xE700,
        0x0008, 0x2008, 0x4008, 0x6008, 0x8008, 0xA008, 0xC008, 0xE008, 0x0108, 0x2108, 0x4108, 0x6108, 0x8108, 0xA108,
        0xC108, 0xE108,
        0x0208, 0x2208, 0x4208, 0x6208, 0x8208, 0xA208, 0xC208, 0xE208, 0x0308, 0x2308, 0x4308, 0x6308, 0x8308, 0xA308,
        0xC308, 0xE308,
        0x0408, 0x2408, 0x4408, 0x6408, 0x8408, 0xA408, 0xC408, 0xE408, 0x0508, 0x2508, 0x4508, 0x6508, 0x8508, 0xA508,
        0xC508, 0xE508,
        0x0608, 0x2608, 0x4608, 0x6608, 0x8608, 0xA608, 0xC608, 0xE608, 0x0708, 0x2708, 0x4708, 0x6708, 0x8708, 0xA708,
        0xC708, 0xE708,
        0x0010, 0x2010, 0x4010, 0x6010, 0x8010, 0xA010, 0xC010, 0xE010, 0x0110, 0x2110, 0x4110, 0x6110, 0x8110, 0xA110,
        0xC110, 0xE110,
        0x0210, 0x2210, 0x4210, 0x6210, 0x8210, 0xA210, 0xC210, 0xE210, 0x0310, 0x2310, 0x4310, 0x6310, 0x8310, 0xA310,
        0xC310, 0xE310,
        0x0410, 0x2410, 0x4410, 0x6410, 0x8410, 0xA410, 0xC410, 0xE410, 0x0510, 0x2510, 0x4510, 0x6510, 0x8510, 0xA510,
        0xC510, 0xE510,
        0x0610, 0x2610, 0x4610, 0x6610, 0x8610, 0xA610, 0xC610, 0xE610, 0x0710, 0x2710, 0x4710, 0x6710, 0x8710, 0xA710,
        0xC710, 0xE710,
        0x0018, 0x2018, 0x4018, 0x6018, 0x8018, 0xA018, 0xC018, 0xE018, 0x0118, 0x2118, 0x4118, 0x6118, 0x8118, 0xA118,
        0xC118, 0xE118,
        0x0218, 0x2218, 0x4218, 0x6218, 0x8218, 0xA218, 0xC218, 0xE218, 0x0318, 0x2318, 0x4318, 0x6318, 0x8318, 0xA318,
        0xC318, 0xE318,
        0x0418, 0x2418, 0x4418, 0x6418, 0x8418, 0xA418, 0xC418, 0xE418, 0x0518, 0x2518, 0x4518, 0x6518, 0x8518, 0xA518,
        0xC518, 0xE518,
        0x0618, 0x2618, 0x4618, 0x6618, 0x8618, 0xA618, 0xFFDE, 0xA514, 0x8410, 0xF800, 0x07E0, 0xFFE0, 0x001F, 0xF81F,
        0x07FF, 0xFFFF,
};

const u8 SpeakerBarImg[248] __attribute__ ((aligned(4))) = {
        0x8F, 0x00, 0x84, 0x00, 0x02, 0x48, 0x9B, 0x49, 0x85, 0x00, 0x83, 0x00, 0x03, 0x49, 0xF6, 0xFF,
        0xF5, 0x85, 0x00, 0x82, 0x00, 0x00, 0x49, 0x80, 0xF6, 0x05, 0x07, 0x00, 0x00, 0xF7, 0x07, 0x52,
        0x80, 0x00, 0x81, 0x00, 0x0D, 0x52, 0xF6, 0xF6, 0x52, 0x07, 0x07, 0x00, 0x00, 0x5B, 0xFF, 0xFF,
        0x5A, 0x00, 0x00, 0x09, 0x00, 0x49, 0xA3, 0xA4, 0xF6, 0xF6, 0x49, 0x00, 0x07, 0x07, 0x80, 0x00,
        0x04, 0x51, 0xF6, 0xFF, 0x52, 0x00, 0x11, 0x48, 0xF6, 0xFF, 0xFF, 0xF6, 0x49, 0x00, 0x00, 0x07,
        0x07, 0x00, 0xA3, 0x07, 0x49, 0x48, 0xF6, 0xF5, 0x00, 0x03, 0x52, 0xFF, 0x9A, 0x49, 0x81, 0x00,
        0x09, 0x07, 0x07, 0x00, 0x51, 0xF6, 0xF6, 0x00, 0xA4, 0xFF, 0x00, 0x02, 0x52, 0xFF, 0x52, 0x82,
        0x00, 0x09, 0x07, 0x07, 0x00, 0x00, 0x9B, 0xFF, 0x49, 0x5A, 0xFF, 0x51, 0x02, 0x52, 0xFF, 0x52,
        0x82, 0x00, 0x09, 0x07, 0x07, 0x00, 0x00, 0x9B, 0xFF, 0x49, 0x5A, 0xFF, 0x51, 0x03, 0x52, 0xFF,
        0x52, 0x48, 0x81, 0x00, 0x09, 0x07, 0x07, 0x00, 0x51, 0xF6, 0x07, 0x00, 0xA4, 0xFF, 0x00, 0x11,
        0x48, 0xF6, 0xFF, 0xFF, 0x07, 0x49, 0x00, 0x00, 0x07, 0x07, 0x00, 0xA3, 0x07, 0x49, 0x48, 0xF6,
        0xF5, 0x00, 0x09, 0x00, 0x51, 0xA4, 0xA4, 0xF6, 0xF6, 0x49, 0x00, 0x07, 0x07, 0x80, 0x00, 0x04,
        0x51, 0xF6, 0xFF, 0x51, 0x00, 0x81, 0x00, 0x0D, 0x52, 0xF6, 0xF6, 0x52, 0x07, 0x07, 0x00, 0x00,
        0x5B, 0xF6, 0xFF, 0x5A, 0x00, 0x00, 0x82, 0x00, 0x00, 0x49, 0x80, 0xF6, 0x05, 0x07, 0x00, 0x00,
        0xF7, 0x07, 0x52, 0x80, 0x00, 0x83, 0x00, 0x03, 0x49, 0xF6, 0xFF, 0xF5, 0x85, 0x00, 0x84, 0x00,
        0x02, 0x48, 0x9B, 0x49, 0x85, 0x00, 0x8F, 0x00,
};

#endif //PICOPAD_LOADER_ICONS_H
