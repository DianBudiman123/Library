

/*
 * Budiman
 * http://www.facebook.com/Budiman
 *
 * IMPACT_26X10
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : IMPACT_26X10.h
 * Date                : 03.11.2021
 * Font size in bytes  : 6533
 * Font width          : 10
 * Font height         : -26
 * Font first char     : 32
 * Font last char      : 59
 * Font used chars     : 27
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

//#include <inttypes.h>
//#include <avr/pgmspace.h>

#include <inttypes.h>
#ifdef __AVR__
#include <avr/pgmspace.h>
#elif defined (ESP8266)
#include <pgmspace.h>
#else
#define PROGMEM
#endif



#ifndef IMPACT_26X10_H
#define IMPACT_26X10_H

#define IMPACT_26X10_WIDTH 10
#define IMPACT_26X10_HEIGHT 26 //-26

const static uint8_t IMPACT_26X10[] PROGMEM = {
    0x19, 0x85, // size
    0x0A, // width
    0x1A,	//0xE6, // height
    0x20, // first char
    0x1B, // char count
    
    // char widths
    0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 
    0x0A, 0x0A, 0x04, 0x06, 0x04, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 
    0x0C, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x04, 
    
    // font data
    0xFC, 0xFE, 0xFF, 0xFF, 0x03, 0x03, 0xFF, 0xFF, 0xFE, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x00, // 32
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 33
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 35
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 36
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 37
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 38
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 39
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 40
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 41
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xE0, 0xE0, 0xE0, 0x00, 0x80, 0xC0, 0x40, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x78, 0x78, 0x78, 0x78, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, // 46
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF0, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0xE0, 0xFC, 0xFF, 0xFF, 0x1F, 0x03, 0x00, 0xC0, 0xF8, 0xFF, 0xFF, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0xFC, 0xFE, 0xFF, 0xFF, 0x0F, 0x0F, 0xFF, 0xFF, 0xFE, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x00, // 48
    0x00, 0x38, 0x3C, 0x3E, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, // 49
    0x7C, 0x7E, 0x7F, 0x7F, 0x0F, 0x0F, 0xFF, 0xFF, 0xFE, 0xFC, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0xFE, 0xFF, 0x3F, 0x0F, 0x03, 0xF8, 0xFE, 0xFF, 0xFF, 0xCF, 0xC3, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, // 50
    0x7C, 0x7E, 0x7F, 0x7F, 0x0F, 0x0F, 0xFF, 0xFF, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x70, 0xF8, 0xFF, 0xFF, 0xFF, 0x8F, 0xF8, 0xF8, 0xF8, 0xF8, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x00, // 51
    0x00, 0x00, 0x80, 0xE0, 0xF8, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xF8, 0xFE, 0xFF, 0xFF, 0x87, 0x81, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, // 52
    0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3C, 0x3C, 0xFC, 0xFC, 0xF8, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x00, // 53
    0xFC, 0xFE, 0xFF, 0xFF, 0x0F, 0x0F, 0x7F, 0x7F, 0x7E, 0x7C, 0xFF, 0xFF, 0xFF, 0xFF, 0x78, 0x78, 0xF8, 0xF8, 0xF0, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x00, // 54
    0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0xFF, 0xFF, 0x3F, 0x0F, 0x03, 0xFC, 0xFF, 0xFF, 0xFF, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0xFC, 0xFE, 0xFF, 0xFF, 0x0F, 0x0F, 0xFF, 0xFF, 0xFE, 0xFC, 0xCF, 0xFF, 0xFF, 0xFF, 0x78, 0x78, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x00, // 56
    0xFC, 0xFE, 0xFF, 0xFF, 0x0F, 0x0F, 0xFF, 0xFF, 0xFE, 0xFC, 0x1F, 0x3F, 0x7F, 0x7F, 0x78, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xF8, 0xF8, 0xF8, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x00, // 57
    0x80, 0x80, 0x80, 0x80, 0x87, 0x87, 0x87, 0x87, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00 // 58
    
};

#endif
