

/*
 *
 * new Font
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : number_6x16.h
 * Date                : 27.09.2017
 * Font size in bytes  : 976
 * Font width          : 6
 * Font height         : -16
 * Font first char     : 48
 * Font last char      : 58
 * Font used chars     : 10
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
#include <pgmspace.h>

#ifndef NUMBER_6_16_H
#define NUMBER_6_16_H

#define NUMBER_6_16_WIDTH 6
#define NUMBER_6_16_HEIGHT 16

static const uint8_t number_6_16[] PROGMEM = {
    0x03, 0xD0, // size
    0x06, // width
    0x10, // height
    0x30, // first char
    0x0A, // char count
    
    // char widths
    0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
    
    
    // font data
    0xFE, 0xFF, 0x03, 0x03, 0xFF, 0xFE, 0x7F, 0xFF, 0xC0, 0xC0, 0xFF, 0x7F, // 48
    0x00, 0x04, 0x06, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0xFF, 0xC0, // 49
    0x0E, 0x0F, 0x03, 0x03, 0xFF, 0xFE, 0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC1, // 50
    0x0E, 0x0F, 0x83, 0x83, 0xFF, 0xFE, 0x70, 0xF0, 0xC1, 0xC1, 0xFF, 0x7F, // 51
    0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x07, 0x07, 0x06, 0x06, 0xFF, 0xFF, // 52
    0xFE, 0xFF, 0x83, 0x83, 0x83, 0x03, 0xC1, 0xC1, 0xC1, 0xC1, 0xFF, 0x7F, // 53
    0xFE, 0xFF, 0x83, 0x83, 0x87, 0x06, 0x7F, 0xFF, 0xC1, 0xC1, 0xFF, 0x7F, // 54
    0x07, 0x07, 0x03, 0x03, 0xFF, 0xFF, 0x00, 0xFE, 0xFF, 0x03, 0x03, 0x01, // 55
    0xFE, 0xFF, 0x83, 0x83, 0xFF, 0xFE, 0x7E, 0xFF, 0xC1, 0xC1, 0xFF, 0x7E, // 56
    0xFE, 0xFF, 0x83, 0x83, 0xFF, 0xFE, 0x60, 0xE1, 0xC1, 0xC1, 0xFF, 0x7F // 57
    
};

#endif
