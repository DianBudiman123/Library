

/*
 * Fareed Read
 * http://www.facebook.com/fareedreads
 *
 * font5x5el2
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : font5x5new.h
 * Date                : 19.07.2022
 * Font size in bytes  : 3406
 * Font width          : 5
 * Font height         : -7
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

#ifndef FONT5X5NEW_H
#define FONT5X5NEW_H

#define FONT5X5NEW_WIDTH 5
#define FONT5X5NEW_HEIGHT 5

const static uint8_t font5x5new[] PROGMEM = {
    0x0D, 0x4E, // size
    0x05, // width
    0x05, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x04, 0x05, 0x05, 0x05, 0x04, 
    0x05, 0x04, 0x05, 0x03, 0x05, 0x05, 0x03, 0x05, 0x04, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    
    // font data
    0x00, 0x00, 0x00, 0x00, 0x00, // 32
    0x00, 0x00, 0x00, 0x00, 0x00, // 33
    0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x00, 0x00, 0x00, 0x00, 0x00, // 35
    0x00, 0x00, 0x00, 0x00, 0x00, // 36
    0x00, 0x00, 0x00, 0x00, 0x00, // 37
    0x00, 0x00, 0x00, 0x00, 0x00, // 38
    0x00, 0x00, 0x00, 0x00, 0x00, // 39
    0x00, 0x00, 0x00, 0x00, 0x00, // 40
    0x00, 0x00, 0x00, 0x00, 0x00, // 41
    0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0x00, 0x00, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0x00, 0x00, // 46
    0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0x1C, 0x22, 0x22, 0x22, 0x1C, // 48
    0x00, 0x24, 0x3E, 0x20, 0x00, // 49
    0x24, 0x32, 0x2A, 0x2A, 0x24, // 50
    0x22, 0x2A, 0x2A, 0x2A, 0x14, // 51
    0x10, 0x18, 0x14, 0x3E, 0x10, // 52
    0x2E, 0x2A, 0x2A, 0x2A, 0x12, // 53
    0x1C, 0x2A, 0x2A, 0x2A, 0x10, // 54
    0x02, 0x02, 0x32, 0x0A, 0x06, // 55
    0x14, 0x2A, 0x2A, 0x2A, 0x14, // 56
    0x04, 0x2A, 0x2A, 0x2A, 0x1C, // 57
    0x00, 0x00, 0x00, 0x00, 0x00, // 58
    0x00, 0x00, 0x00, 0x00, 0x00, // 59
    0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0x00, 0x00, 0x00, 0x00, 0x00, // 64
    0x3C, 0x0A, 0x0A, 0x0A, 0x3C, // 65
    0x3E, 0x2A, 0x2A, 0x2A, 0x14, // 66
    0x1C, 0x22, 0x22, 0x22, 0x14, // 67
    0x3E, 0x22, 0x22, 0x22, 0x1C, // 68
    0x3E, 0x2A, 0x2A, 0x2A, 0x22, // 69
    0x3E, 0x0A, 0x0A, 0x0A, 0x02, // 70
    0x1C, 0x22, 0x2A, 0x2A, 0x1A, // 71
    0x3E, 0x08, 0x08, 0x08, 0x3E, // 72
    0x00, 0x22, 0x3E, 0x22, 0x00, // 73
    0x10, 0x22, 0x22, 0x22, 0x1E, // 74
    0x3E, 0x08, 0x08, 0x14, 0x22, // 75
    0x3E, 0x20, 0x20, 0x20, 0x20, // 76
    0x3E, 0x04, 0x08, 0x04, 0x3E, // 77
    0x3E, 0x04, 0x08, 0x10, 0x3E, // 78
    0x1C, 0x22, 0x22, 0x22, 0x1C, // 79
    0x3E, 0x0A, 0x0A, 0x0A, 0x04, // 80
    0x1C, 0x22, 0x22, 0x12, 0x2C, // 81
    0x3E, 0x0A, 0x0A, 0x1A, 0x24, // 82
    0x24, 0x2A, 0x2A, 0x2A, 0x12, // 83
    0x02, 0x02, 0x3E, 0x02, 0x02, // 84
    0x1E, 0x20, 0x20, 0x20, 0x1E, // 85
    0x0E, 0x10, 0x20, 0x10, 0x0E, // 86
    0x1E, 0x20, 0x18, 0x20, 0x1E, // 87
    0x22, 0x14, 0x08, 0x14, 0x22, // 88
    0x06, 0x08, 0x38, 0x08, 0x06, // 89
    0x22, 0x32, 0x2A, 0x26, 0x22, // 90
    0x00, 0x00, 0x00, 0x00, 0x00, // 91
    0x00, 0x00, 0x00, 0x00, 0x00, // 92
    0x00, 0x00, 0x00, 0x00, 0x00, // 93
    0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, // 95
    0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0x3C, 0x0A, 0x0A, 0x3C, // 97
    0x00, 0x00, 0x00, 0x00, 0x00, // 98
    0x00, 0x00, 0x00, 0x00, 0x00, // 99
    0x00, 0x00, 0x00, 0x00, 0x00, // 100
    0x3E, 0x2A, 0x2A, 0x22, // 101
    0x00, 0x00, 0x00, 0x00, 0x00, // 102
    0x1C, 0x22, 0x2A, 0x1A, // 103
    0x00, 0x00, 0x00, 0x00, 0x00, // 104
    0x22, 0x3E, 0x22, // 105
    0x00, 0x00, 0x00, 0x00, 0x00, // 106
    0x00, 0x00, 0x00, 0x00, 0x00, // 107
    0x3E, 0x20, 0x20, // 108
    0x00, 0x00, 0x00, 0x00, 0x00, // 109
    0x3E, 0x04, 0x08, 0x3E, // 110
    0x00, 0x00, 0x00, 0x00, 0x00, // 111
    0x00, 0x00, 0x00, 0x00, 0x00, // 112
    0x00, 0x00, 0x00, 0x00, 0x00, // 113
    0x00, 0x00, 0x00, 0x00, 0x00, // 114
    0x00, 0x00, 0x00, 0x00, 0x00, // 115
    0x00, 0x00, 0x00, 0x00, 0x00, // 116
    0x1E, 0x20, 0x20, 0x20, 0x1E, // 117
    0x00, 0x00, 0x00, 0x00, 0x00, // 118
    0x00, 0x00, 0x00, 0x00, 0x00, // 119
    0x00, 0x00, 0x00, 0x00, 0x00, // 120
    0x00, 0x00, 0x00, 0x00, 0x00, // 121
    0x00, 0x00, 0x00, 0x00, 0x00, // 122
    0x00, 0x00, 0x00, 0x00, 0x00, // 123
    0x00, 0x00, 0x00, 0x00, 0x00, // 124
    0x00, 0x00, 0x00, 0x00, 0x00, // 125
    0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0x00, 0x00, 0x00, 0x00, 0x00 // 127
    
};

#endif
