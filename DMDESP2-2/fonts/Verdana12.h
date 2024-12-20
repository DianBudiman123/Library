

/*
 * Fareed Read
 * http://www.facebook.com/fareed.reads
 *
 * Verdana12
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : Verdana12.h
 * Date                : 27.06.2018
 * Font size in bytes  : 6546
 * Font width          : 10
 * Font height         : 12
 * Font first char     : 32
 * Font last char      : 128
 * Font used chars     : 96
 *
 * The font data are defined as
 *
 * struct _FONT_ {
 *     uint16_t   font_Size_in_Bytes_over_all_included_Size_it_self;
 *     uint8_t    font_Width_in_Pixel_for_fixed_drawing;
 *     uint8_t    font_Height_in_Pixel_for_all_characters;
 *     unit8_t    font_First_Char;
 *     uint8_t    font_Char_Count;
 *
 *     uint8_t    font_Char_Widths[font_Last_Char - font_First_Char +1];
 *                  // for each character the separate width in pixels,
 *                  // characters < 128 have an implicit virtual right empty row
 *
 *     uint8_t    font_data[];
 *                  // bit field of all characters
 */

#include <inttypes.h>
//#include <avr/pgmspace.h>

#ifndef VERDANA12_H
#define VERDANA12_H

#define VERDANA12_WIDTH 10
#define VERDANA12_HEIGHT 12

const static uint8_t Verdana12[] PROGMEM = {
    0x19, 0x92, // size
    0x0A, // width
    0x0C, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x01, 0x04, 0x08, 0x06, 0x0B, 0x08, 0x01, 0x03, 0x03, 
    0x05, 0x07, 0x02, 0x04, 0x01, 0x05, 0x06, 0x05, 0x06, 0x06, 
    0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 0x01, 0x02, 0x07, 0x07, 
    0x07, 0x05, 0x0A, 0x08, 0x06, 0x07, 0x07, 0x06, 0x06, 0x07, 
    0x07, 0x03, 0x04, 0x06, 0x06, 0x08, 0x07, 0x08, 0x06, 0x08, 
    0x07, 0x06, 0x07, 0x07, 0x08, 0x0B, 0x06, 0x07, 0x06, 0x03, 
    0x05, 0x03, 0x08, 0x08, 0x02, 0x06, 0x06, 0x05, 0x06, 0x06, 
    0x04, 0x06, 0x06, 0x01, 0x03, 0x05, 0x01, 0x09, 0x06, 0x06, 
    0x06, 0x06, 0x04, 0x05, 0x05, 0x06, 0x05, 0x09, 0x05, 0x05, 
    0x05, 0x05, 0x01, 0x05, 0x08, 0x09, 
    
    // font data
    0xFE, 0x20, // 33
    0x07, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, // 34
    0x80, 0x90, 0xF8, 0x96, 0x90, 0xF8, 0x96, 0x10, 0x00, 0x30, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, // 35
    0x18, 0x24, 0xFF, 0x44, 0x44, 0x84, 0x20, 0x20, 0xF0, 0x20, 0x20, 0x10, // 36
    0x1C, 0x22, 0x22, 0x1C, 0x80, 0x70, 0x0C, 0xC2, 0x20, 0x20, 0xC0, 0x00, 0x00, 0x00, 0x20, 0x10, 0x00, 0x00, 0x10, 0x20, 0x20, 0x10, // 37
    0xDC, 0x22, 0x22, 0x22, 0x5C, 0x80, 0x60, 0x00, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, 0x10, 0x20, // 38
    0x07, 0x00, // 39
    0xF8, 0x06, 0x01, 0x10, 0x60, 0x80, // 40
    0x01, 0x06, 0xF8, 0x80, 0x60, 0x10, // 41
    0x0A, 0x04, 0x1F, 0x04, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x40, 0x40, 0x40, 0xF8, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x80, 0x70, // 44
    0x40, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x30, // 46
    0x00, 0x00, 0xE0, 0x1C, 0x03, 0x80, 0x70, 0x00, 0x00, 0x00, // 47
    0xFC, 0x02, 0x02, 0x02, 0x02, 0xFC, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, // 48
    0x04, 0x04, 0xFE, 0x00, 0x00, 0x20, 0x20, 0x30, 0x20, 0x20, // 49
    0x0C, 0x82, 0x42, 0x42, 0x22, 0x1C, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, // 50
    0x04, 0x02, 0x22, 0x22, 0x22, 0xDC, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, // 51
    0x60, 0x50, 0x48, 0x44, 0xFE, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, // 52
    0x1E, 0x12, 0x12, 0x12, 0x12, 0xE2, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, // 53
    0xF8, 0x14, 0x12, 0x12, 0x12, 0xE0, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, // 54
    0x02, 0x02, 0x82, 0x62, 0x1A, 0x06, 0x00, 0x20, 0x10, 0x00, 0x00, 0x00, // 55
    0xDC, 0x22, 0x22, 0x22, 0x22, 0xDC, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, // 56
    0x3C, 0x42, 0x42, 0x42, 0x42, 0xFC, 0x00, 0x20, 0x20, 0x20, 0x10, 0x00, // 57
    0x18, 0x30, // 58
    0x00, 0x18, 0x80, 0x70, // 59
    0x40, 0xA0, 0xA0, 0x10, 0x10, 0x08, 0x08, 0x00, 0x00, 0x00, 0x10, 0x10, 0x20, 0x20, // 60
    0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x08, 0x08, 0x10, 0x10, 0xA0, 0xA0, 0x40, 0x20, 0x20, 0x10, 0x10, 0x00, 0x00, 0x00, // 62
    0x04, 0x02, 0xE2, 0x22, 0x1C, 0x00, 0x00, 0x20, 0x00, 0x00, // 63
    0xF0, 0x0C, 0x04, 0xF2, 0x0A, 0x0A, 0xFA, 0x04, 0x0C, 0xF0, 0x00, 0x30, 0x20, 0x40, 0x50, 0x50, 0x50, 0x10, 0x10, 0x00, // 64
    0x00, 0xE0, 0x98, 0x86, 0x86, 0x98, 0xE0, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, // 65
    0xFE, 0x22, 0x22, 0x22, 0x3C, 0xC0, 0x30, 0x20, 0x20, 0x20, 0x20, 0x10, // 66
    0xF8, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x00, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, // 67
    0xFE, 0x02, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x30, 0x20, 0x20, 0x20, 0x20, 0x10, 0x00, // 68
    0xFE, 0x22, 0x22, 0x22, 0x22, 0x22, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, // 69
    0xFE, 0x22, 0x22, 0x22, 0x22, 0x02, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0xF8, 0x04, 0x02, 0x02, 0x22, 0x22, 0xE4, 0x00, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, // 71
    0xFE, 0x20, 0x20, 0x20, 0x20, 0x20, 0xFE, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, // 72
    0x02, 0xFE, 0x02, 0x20, 0x30, 0x20, // 73
    0x00, 0x02, 0x02, 0xFE, 0x20, 0x20, 0x20, 0x10, // 74
    0xFE, 0x20, 0x50, 0x88, 0x04, 0x02, 0x30, 0x00, 0x00, 0x00, 0x10, 0x20, // 75
    0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, // 76
    0xFE, 0x06, 0x38, 0xC0, 0xC0, 0x38, 0x06, 0xFE, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, // 77
    0xFE, 0x06, 0x18, 0x20, 0xC0, 0x00, 0xFE, 0x30, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, // 78
    0xF8, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x00, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, 0x00, // 79
    0xFE, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xF8, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x00, 0x10, 0x20, 0x20, 0x20, 0x60, 0x90, 0x80, // 81
    0xFE, 0x22, 0x22, 0x62, 0xA2, 0x1C, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x10, 0x20, // 82
    0x1C, 0x22, 0x22, 0x22, 0x22, 0xC4, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, // 83
    0x02, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, // 84
    0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x10, 0x20, 0x20, 0x20, 0x10, 0x00, // 85
    0x06, 0x38, 0xC0, 0x00, 0x00, 0xC0, 0x38, 0x06, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, // 86
    0x1E, 0xE0, 0x00, 0xC0, 0x38, 0x06, 0x38, 0xC0, 0x00, 0xE0, 0x1E, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, // 87
    0x06, 0x88, 0x70, 0x70, 0x88, 0x06, 0x30, 0x00, 0x00, 0x00, 0x00, 0x30, // 88
    0x02, 0x0C, 0x10, 0xE0, 0x10, 0x0C, 0x02, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, // 89
    0x02, 0x82, 0x62, 0x12, 0x0A, 0x06, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, // 90
    0xFF, 0x01, 0x01, 0xF0, 0x80, 0x80, // 91
    0x03, 0x1C, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 0x30, 0xC0, // 92
    0x01, 0x01, 0xFF, 0x80, 0x80, 0xF0, // 93
    0x10, 0x08, 0x04, 0x02, 0x02, 0x04, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, // 95
    0x01, 0x02, 0x00, 0x00, // 96
    0x80, 0x48, 0x48, 0x48, 0x48, 0xF0, 0x10, 0x20, 0x20, 0x20, 0x20, 0x30, // 97
    0xFF, 0x10, 0x08, 0x08, 0x08, 0xF0, 0x30, 0x20, 0x20, 0x20, 0x20, 0x10, // 98
    0xF0, 0x08, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x20, 0x10, // 99
    0xF0, 0x08, 0x08, 0x08, 0x08, 0xFF, 0x10, 0x20, 0x20, 0x20, 0x10, 0x30, // 100
    0xF0, 0x48, 0x48, 0x48, 0x48, 0x70, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, // 101
    0x08, 0xFE, 0x09, 0x09, 0x00, 0x30, 0x00, 0x00, // 102
    0xF0, 0x08, 0x08, 0x08, 0x08, 0xF8, 0x10, 0xA0, 0xA0, 0xA0, 0x90, 0x70, // 103
    0xFF, 0x10, 0x08, 0x08, 0x08, 0xF0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x30, // 104
    0xF9, 0x30, // 105
    0x00, 0x08, 0xF9, 0x80, 0x80, 0x70, // 106
    0xFF, 0x40, 0xA0, 0x10, 0x08, 0x30, 0x00, 0x00, 0x10, 0x20, // 107
    0xFF, 0x30, // 108
    0xF8, 0x08, 0x08, 0x08, 0xF0, 0x08, 0x08, 0x08, 0xF0, 0x30, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30, // 109
    0xF8, 0x10, 0x08, 0x08, 0x08, 0xF0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x30, // 110
    0xF0, 0x08, 0x08, 0x08, 0x08, 0xF0, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, // 111
    0xF8, 0x10, 0x08, 0x08, 0x08, 0xF0, 0xF0, 0x20, 0x20, 0x20, 0x20, 0x10, // 112
    0xF0, 0x08, 0x08, 0x08, 0x08, 0xF8, 0x10, 0x20, 0x20, 0x20, 0x10, 0xF0, // 113
    0xF8, 0x10, 0x08, 0x08, 0x30, 0x00, 0x00, 0x00, // 114
    0x30, 0x48, 0x48, 0x48, 0x88, 0x20, 0x20, 0x20, 0x20, 0x10, // 115
    0x08, 0xFE, 0x08, 0x08, 0x08, 0x00, 0x10, 0x20, 0x20, 0x20, // 116
    0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x10, 0x20, 0x20, 0x20, 0x10, 0x30, // 117
    0x18, 0xE0, 0x00, 0xE0, 0x18, 0x00, 0x00, 0x30, 0x00, 0x00, // 118
    0x18, 0xE0, 0x00, 0xE0, 0x18, 0xE0, 0x00, 0xE0, 0x18, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, // 119
    0x18, 0xA0, 0x40, 0xA0, 0x18, 0x30, 0x00, 0x00, 0x00, 0x30, // 120
    0x18, 0xE0, 0x00, 0xE0, 0x18, 0x00, 0x80, 0x70, 0x00, 0x00, // 121
    0x08, 0x88, 0x48, 0x28, 0x18, 0x30, 0x20, 0x20, 0x20, 0x20, // 122
    0x20, 0x20, 0xDE, 0x01, 0x01, 0x00, 0x00, 0x70, 0x80, 0x80, // 123
    0xFF, 0xF0, // 124
    0x01, 0x01, 0xDE, 0x20, 0x20, 0x80, 0x80, 0x70, 0x00, 0x00, // 125
    0xC0, 0x20, 0x20, 0x40, 0x40, 0x80, 0x80, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFE, 0x30, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x30 // 127
    
};

#endif
