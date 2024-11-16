

/*
 * Fareed Read
 * http://www.facebook.com/fareedreads
 *
 * new Font
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : font_iqomah_big.h
 * Date                : 10.08.2021
 * Font size in bytes  : 6318
 * Font width          : 9
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

#ifndef NEW_FONT_H
#define NEW_FONT_H

#define NEW_FONT_WIDTH 9
#define NEW_FONT_HEIGHT 12

const static uint8_t new_Font[] PROGMEM = {
    0x18, 0xAE, // size
    0x09, // width
    0x0C, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x01, 0x03, 0x07, 0x05, 0x09, 0x07, 0x03, 0x03, 0x03, 
    0x05, 0x05, 0x01, 0x03, 0x01, 0x03, 0x05, 0x03, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x01, 0x01, 0x05, 0x06, 
    0x05, 0x05, 0x0B, 0x0C, 0x09, 0x07, 0x09, 0x06, 0x05, 0x0A, 
    0x0A, 0x03, 0x05, 0x07, 0x06, 0x0C, 0x0A, 0x07, 0x06, 0x07, 
    0x0A, 0x09, 0x07, 0x0A, 0x07, 0x0B, 0x07, 0x0B, 0x0A, 0x02, 
    0x03, 0x02, 0x05, 0x07, 0x02, 0x05, 0x05, 0x04, 0x05, 0x05, 
    0x03, 0x05, 0x05, 0x01, 0x02, 0x05, 0x01, 0x09, 0x05, 0x05, 
    0x05, 0x05, 0x03, 0x05, 0x03, 0x05, 0x05, 0x09, 0x05, 0x05, 
    0x09, 0x03, 0x01, 0x03, 0x06, 0x06, 
    
    // font data
    0x7F, 0x10, // 33
    0x07, 0x00, 0x07, 0x00, 0x00, 0x00, // 34
    0x24, 0xA4, 0x7C, 0xA7, 0x7C, 0x27, 0x24, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, // 35
    0xCE, 0x11, 0xFF, 0x11, 0xE2, 0x00, 0x10, 0x30, 0x10, 0x00, // 36
    0x0E, 0x11, 0x11, 0xCE, 0x38, 0xE6, 0x11, 0x10, 0xE0, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, // 37
    0xE0, 0x1E, 0x11, 0x29, 0xC6, 0xA0, 0x00, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, 0x10, // 38
    0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, // 39
    0xF8, 0x06, 0x01, 0x00, 0x30, 0x40, // 40
    0x01, 0x06, 0xF8, 0x40, 0x30, 0x00, // 41
    0x02, 0x0A, 0x07, 0x0A, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x10, 0x10, 0x7C, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x70, // 44
    0x20, 0x20, 0x20, 0x00, 0x00, 0x00, // 45
    0x00, 0x10, // 46
    0x80, 0x7C, 0x03, 0x10, 0x00, 0x00, // 47
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 48
    0x04, 0x02, 0xFF, 0x00, 0x00, 0x10, // 49
    0x02, 0x81, 0x41, 0x31, 0x0E, 0x10, 0x10, 0x10, 0x10, 0x10, // 50
    0x82, 0x01, 0x11, 0x11, 0xEE, 0x00, 0x10, 0x10, 0x10, 0x00, // 51
    0x60, 0x58, 0x46, 0xFF, 0x40, 0x00, 0x00, 0x00, 0x10, 0x00, // 52
    0x9C, 0x0B, 0x09, 0x09, 0xF1, 0x00, 0x10, 0x10, 0x10, 0x00, // 53
    0xFE, 0x11, 0x09, 0x09, 0xF2, 0x00, 0x10, 0x10, 0x10, 0x00, // 54
    0x01, 0xC1, 0x39, 0x07, 0x01, 0x00, 0x10, 0x00, 0x00, 0x00, // 55
    0xEE, 0x11, 0x11, 0x11, 0xEE, 0x00, 0x10, 0x10, 0x10, 0x00, // 56
    0x9E, 0x21, 0x21, 0x11, 0xFE, 0x00, 0x10, 0x10, 0x10, 0x00, // 57
    0x04, 0x10, // 58
    0x04, 0x70, // 59
    0x10, 0x28, 0x28, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x48, 0x48, 0x48, 0x48, 0x48, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x44, 0x28, 0x28, 0x28, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x06, 0x01, 0x61, 0x11, 0x0E, 0x00, 0x00, 0x10, 0x00, 0x00, // 63
    0xF0, 0x0C, 0xE2, 0x12, 0x09, 0x09, 0xF1, 0x19, 0x02, 0x86, 0x78, 0x10, 0x20, 0x40, 0x90, 0x90, 0x90, 0x90, 0x90, 0x50, 0x40, 0x20, // 64
    0x00, 0xC0, 0xF0, 0xFC, 0x7F, 0x0F, 0x7F, 0xFC, 0xF0, 0xC0, 0x00, 0x00, 0xE0, 0xF0, 0x70, 0x30, 0x30, 0x30, 0x30, 0x30, 0x70, 0xF0, 0xE0, 0x80, // 65
    0xFF, 0xFF, 0xFF, 0x63, 0x63, 0x7F, 0xDE, 0xCC, 0x80, 0xF0, 0xF0, 0xF0, 0xC0, 0xC0, 0xC0, 0xF0, 0x70, 0x30, // 66
    0x7C, 0x82, 0x01, 0x01, 0x01, 0x82, 0x44, 0x00, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, // 67
    0xFF, 0xFF, 0xFF, 0x03, 0x03, 0x07, 0xFF, 0xFE, 0xF8, 0xF0, 0xF0, 0xF0, 0xC0, 0xC0, 0xE0, 0xF0, 0x70, 0x10, // 68
    0xFF, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 69
    0xFF, 0x11, 0x11, 0x11, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, // 70
    0xF8, 0xFE, 0xFE, 0x07, 0x03, 0x63, 0x67, 0xEF, 0xEE, 0xE4, 0x10, 0x70, 0x70, 0xE0, 0xC0, 0xC0, 0xE0, 0xF0, 0x70, 0x70, // 71
    0xFF, 0xFF, 0xFF, 0x60, 0x60, 0x60, 0x60, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, // 72
    0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xF0, // 73
    0xC0, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x10, 0x10, 0x10, 0x00, // 74
    0xFF, 0x20, 0x10, 0x28, 0x44, 0x82, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, // 75
    0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, // 76
    0xFF, 0xFF, 0xFF, 0x1F, 0xFC, 0xC0, 0xC0, 0xFC, 0x1F, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0x00, 0x10, 0xF0, 0xF0, 0x10, 0x00, 0xF0, 0xF0, 0xF0, // 77
    0xFF, 0xFF, 0xFF, 0x3E, 0xF8, 0xF0, 0xC0, 0xFF, 0xFF, 0xFF, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x10, 0x70, 0xF0, 0xF0, 0xF0, // 78
    0x7C, 0x82, 0x01, 0x01, 0x01, 0x82, 0x7C, 0x00, 0x00, 0x10, 0x10, 0x10, 0x00, 0x00, // 79
    0xFF, 0x11, 0x11, 0x11, 0x11, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0x7C, 0x82, 0x01, 0x41, 0x41, 0x82, 0x7C, 0x00, 0x00, 0x10, 0x10, 0x10, 0x00, 0x10, // 81
    0xFF, 0xFF, 0xFF, 0x63, 0x63, 0xE3, 0xFF, 0xBF, 0x1E, 0x00, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x10, 0x70, 0xF0, 0xE0, 0x80, // 82
    0x1C, 0x3E, 0x7F, 0x73, 0x73, 0xF7, 0xEF, 0xEE, 0xCC, 0x30, 0x70, 0xF0, 0xE0, 0xC0, 0xC0, 0xF0, 0x70, 0x30, // 83
    0x01, 0x01, 0x01, 0xFF, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // 84
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x30, 0x70, 0xF0, 0xE0, 0xC0, 0xC0, 0xE0, 0xF0, 0x70, 0x30, // 85
    0x03, 0x1C, 0x60, 0x80, 0x60, 0x1C, 0x03, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, // 86
    0x07, 0x78, 0x80, 0x70, 0x0E, 0x01, 0x0E, 0x70, 0x80, 0x7C, 0x03, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // 87
    0x01, 0xC6, 0x28, 0x10, 0x28, 0xC6, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, // 88
    0x01, 0x07, 0x0F, 0x3F, 0xFC, 0xF0, 0xFC, 0x3F, 0x0F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, // 89
    0x00, 0x03, 0x83, 0xE3, 0xF3, 0x7B, 0x1F, 0x0F, 0x07, 0x00, 0xE0, 0xF0, 0xF0, 0xD0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, // 90
    0xFF, 0x01, 0x70, 0x40, // 91
    0x03, 0x7C, 0x80, 0x00, 0x00, 0x10, // 92
    0x01, 0xFF, 0x40, 0x70, // 93
    0x10, 0x0E, 0x01, 0x0E, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, // 95
    0x01, 0x02, 0x00, 0x00, // 96
    0xC8, 0x24, 0x24, 0xA4, 0xF8, 0x00, 0x10, 0x10, 0x00, 0x10, // 97
    0xFF, 0x88, 0x04, 0x04, 0xF8, 0x10, 0x00, 0x10, 0x10, 0x00, // 98
    0xF8, 0x04, 0x04, 0x88, 0x00, 0x10, 0x10, 0x00, // 99
    0xF8, 0x04, 0x04, 0x88, 0xFF, 0x00, 0x10, 0x10, 0x00, 0x10, // 100
    0xF8, 0x24, 0x24, 0x24, 0xB8, 0x00, 0x10, 0x10, 0x10, 0x00, // 101
    0x04, 0xFE, 0x05, 0x00, 0x10, 0x00, // 102
    0xF8, 0x04, 0x04, 0x88, 0xFC, 0x40, 0x50, 0x50, 0x40, 0x30, // 103
    0xFF, 0x08, 0x04, 0x04, 0xF8, 0x10, 0x00, 0x00, 0x00, 0x10, // 104
    0xFD, 0x10, // 105
    0x00, 0xFD, 0x40, 0x30, // 106
    0xFF, 0x20, 0x30, 0xC8, 0x04, 0x10, 0x00, 0x00, 0x00, 0x10, // 107
    0xFF, 0x10, // 108
    0xFC, 0x08, 0x04, 0x04, 0xF8, 0x08, 0x04, 0x04, 0xF8, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, // 109
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 110
    0xF8, 0x04, 0x04, 0x04, 0xF8, 0x00, 0x10, 0x10, 0x10, 0x00, // 111
    0xFC, 0x88, 0x04, 0x04, 0xF8, 0x70, 0x00, 0x10, 0x10, 0x00, // 112
    0xF8, 0x04, 0x04, 0x88, 0xFC, 0x00, 0x10, 0x10, 0x00, 0x70, // 113
    0xFC, 0x08, 0x04, 0x10, 0x00, 0x00, // 114
    0x98, 0x24, 0x24, 0x24, 0xC8, 0x00, 0x10, 0x10, 0x10, 0x00, // 115
    0x04, 0xFF, 0x04, 0x00, 0x10, 0x10, // 116
    0xFC, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x10, 0x10, 0x10, 0x10, // 117
    0x0C, 0x70, 0x80, 0x70, 0x0C, 0x00, 0x00, 0x10, 0x00, 0x00, // 118
    0x0C, 0x70, 0x80, 0x70, 0x0C, 0x70, 0x80, 0x70, 0x0C, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // 119
    0x04, 0xD8, 0x20, 0xD8, 0x04, 0x10, 0x00, 0x00, 0x00, 0x10, // 120
    0x0C, 0x70, 0x80, 0x70, 0x0C, 0x00, 0x40, 0x30, 0x00, 0x00, // 121
    0x00, 0x03, 0x83, 0xE3, 0xF3, 0x7B, 0x1F, 0x0F, 0x07, 0xE0, 0xF0, 0xF0, 0xD0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, // 122
    0x20, 0xDE, 0x01, 0x00, 0x30, 0x40, // 123
    0xFF, 0x70, // 124
    0x01, 0xDE, 0x20, 0x40, 0x30, 0x00, // 125
    0x20, 0x10, 0x10, 0x20, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xFE, 0x02, 0x02, 0x02, 0x02, 0xFE, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10 // 127
    
};

#endif
