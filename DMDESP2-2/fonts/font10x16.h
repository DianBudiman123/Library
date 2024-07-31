

/*
 * Fareed Read
 * http://www.facebook.com/fareedreads
 *
 * font10x16
 *
 * created with FontCreator
 * written by F. Maximilian Thiele
 *
 * http://www.apetech.de/fontCreator
 * me@apetech.de
 *
 * File Name           : font10x16.h
 * Date                : 19.01.2022
 * Font size in bytes  : 12822
 * Font width          : 10
 * Font height         : 16
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

#ifndef FONT10X16_H
#define FONT10X16_H

#define FONT10X16_WIDTH 10
#define FONT10X16_HEIGHT 16

const static uint8_t font10x16[] PROGMEM = {
    0x32, 0x16, // size
    0x0A, // width
    0x10, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x03, 0x07, 0x0B, 0x09, 0x0E, 0x0B, 0x03, 0x05, 0x05, 
    0x06, 0x09, 0x03, 0x06, 0x04, 0x04, 0x0A, 0x0A, 0x0A, 0x0A, 
    0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x05, 0x03, 0x09, 0x08, 
    0x09, 0x08, 0x0C, 0x0C, 0x09, 0x09, 0x09, 0x09, 0x08, 0x0A, 
    0x0A, 0x03, 0x09, 0x0C, 0x08, 0x0C, 0x0A, 0x0A, 0x09, 0x0A, 
    0x0A, 0x09, 0x0B, 0x0A, 0x0C, 0x10, 0x0C, 0x0B, 0x09, 0x05, 
    0x04, 0x05, 0x08, 0x08, 0x03, 0x09, 0x09, 0x09, 0x09, 0x09, 
    0x06, 0x09, 0x09, 0x03, 0x04, 0x0A, 0x03, 0x0D, 0x09, 0x09, 
    0x09, 0x09, 0x06, 0x08, 0x06, 0x09, 0x09, 0x0F, 0x0B, 0x09, 
    0x07, 0x06, 0x02, 0x06, 0x09, 0x08, 
    
    // font data
    0xFE, 0xFE, 0xFE, 0x1D, 0x1D, 0x1D, // 33
    0x1E, 0x1E, 0x1E, 0x00, 0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x30, 0x30, 0xF0, 0xFE, 0x3E, 0x30, 0x30, 0xF0, 0xFE, 0x3E, 0x30, 0x06, 0x1E, 0x1F, 0x07, 0x06, 0x06, 0x1E, 0x1F, 0x07, 0x06, 0x06, // 35
    0x38, 0x7C, 0xFE, 0xE6, 0xFF, 0xC6, 0xCE, 0x8C, 0x0C, 0x04, 0x0C, 0x1C, 0x18, 0x3F, 0x19, 0x1F, 0x0F, 0x07, // 36
    0x3C, 0x7E, 0x42, 0x42, 0x7E, 0x3C, 0x80, 0x60, 0x10, 0x8C, 0x82, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x10, 0x0C, 0x02, 0x01, 0x00, 0x0F, 0x1F, 0x10, 0x10, 0x1F, 0x0F, // 37
    0x00, 0x80, 0x9C, 0xFE, 0xFE, 0xE6, 0xBE, 0x3E, 0x9C, 0x80, 0x80, 0x07, 0x0F, 0x1F, 0x19, 0x18, 0x19, 0x1F, 0x0F, 0x0F, 0x1F, 0x1D, // 38
    0x1E, 0x1E, 0x1E, 0x00, 0x00, 0x00, // 39
    0xE0, 0xF8, 0xFC, 0x1E, 0x02, 0x0F, 0x3F, 0x7F, 0xF0, 0x80, // 40
    0x02, 0x1E, 0xFC, 0xF8, 0xE0, 0x80, 0xF0, 0x7F, 0x3F, 0x0F, // 41
    0x08, 0x68, 0x3E, 0x3E, 0x68, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0xC0, 0xC0, 0xC0, 0xF8, 0xF8, 0xF8, 0xC0, 0xC0, 0xC0, 0x01, 0x01, 0x01, 0x0F, 0x0F, 0x0F, 0x01, 0x01, 0x01, // 43
    0x00, 0x00, 0x00, 0xDC, 0x7C, 0x3C, // 44
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, // 45
    0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x00, // 46
    0x00, 0x80, 0x78, 0x06, 0x18, 0x07, 0x00, 0x00, // 47
    0xFE, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0x7F, // 48
    0x00, 0x04, 0x06, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, 0x00, // 49
    0x04, 0x06, 0x07, 0x83, 0xC3, 0xE3, 0xFF, 0xFF, 0x7E, 0x3C, 0xFC, 0xFE, 0xFF, 0xFF, 0xE7, 0xE3, 0xE1, 0xE0, 0xF0, 0xF0, // 50
    0x0E, 0x0F, 0x07, 0x87, 0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0x70, 0xF0, 0xE0, 0xE1, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, // 51
    0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0xFE, 0xFF, 0xFF, 0x00, 0x0F, 0x0F, 0x0E, 0x0E, 0x0E, 0x0E, 0xFF, 0xFF, 0xFF, 0x0E, // 52
    0x3F, 0x7F, 0x7F, 0x67, 0x67, 0x67, 0xE7, 0xE7, 0xE7, 0xC7, 0x70, 0xF0, 0xE0, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0x7F, // 53
    0xFE, 0xFF, 0xFF, 0xFF, 0x87, 0x87, 0x87, 0x9F, 0x9F, 0x9E, 0x7F, 0xFF, 0xFF, 0xFF, 0xF1, 0xF1, 0xF1, 0xF1, 0xFF, 0x7F, // 54
    0x03, 0x03, 0x03, 0x03, 0x83, 0xC3, 0xE3, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x03, 0x01, 0x00, 0x00, // 55
    0xFE, 0xFF, 0xFF, 0x83, 0x83, 0x83, 0x83, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xC1, 0xC1, 0xC1, 0xC1, 0xFF, 0xFF, 0x7F, // 56
    0x7E, 0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 0xFF, 0xFF, 0xFF, 0xFE, 0x60, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, 0x7F, // 57
    0x00, 0x70, 0x70, 0x70, 0x00, 0x00, 0x0E, 0x0E, 0x0E, 0x00, // 58
    0x70, 0x70, 0x70, 0xDC, 0x7C, 0x3C, // 59
    0xE0, 0xE0, 0xE0, 0xF0, 0x70, 0x70, 0x70, 0x38, 0x38, 0x03, 0x03, 0x03, 0x07, 0x07, 0x07, 0x07, 0x0E, 0x0E, // 60
    0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, // 61
    0x38, 0x38, 0x70, 0x70, 0x70, 0xF0, 0xE0, 0xE0, 0xE0, 0x0E, 0x0E, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03, 0x03, // 62
    0x18, 0x1C, 0x9E, 0xC6, 0xE6, 0xFE, 0x7C, 0x38, 0x00, 0x00, 0x1D, 0x1D, 0x1D, 0x00, 0x00, 0x00, // 63
    0xE0, 0x18, 0xC4, 0xF4, 0x3A, 0x0A, 0x0A, 0xF2, 0xFA, 0x7C, 0x08, 0xF0, 0x07, 0x18, 0x27, 0x2F, 0x48, 0x48, 0x4C, 0x4F, 0x4F, 0x28, 0x36, 0x11, // 64
    0x00, 0x80, 0xE0, 0xF8, 0xFE, 0x1E, 0xFE, 0xF8, 0xE0, 0x80, 0x00, 0x00, 0x1C, 0x1F, 0x0F, 0x07, 0x06, 0x06, 0x06, 0x07, 0x0F, 0x1F, 0x1C, 0x10, // 65
    0xFE, 0xFE, 0xFE, 0xC6, 0xC6, 0xFE, 0xBC, 0x98, 0x00, 0x1F, 0x1F, 0x1F, 0x18, 0x18, 0x18, 0x1F, 0x1F, 0x07, // 66
    0xF0, 0xFC, 0xFE, 0x0E, 0x06, 0x0E, 0x1E, 0x1C, 0x08, 0x03, 0x0F, 0x1F, 0x1C, 0x18, 0x1C, 0x1F, 0x0E, 0x06, // 67
    0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x0E, 0xFE, 0xFC, 0xF0, 0x1F, 0x1F, 0x1F, 0x18, 0x18, 0x1C, 0x1F, 0x0F, 0x03, // 68
    0xFE, 0xFE, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0xC6, 0x06, 0x1F, 0x1F, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, // 69
    0xFE, 0xFE, 0xFE, 0xC6, 0xC6, 0xC6, 0xC6, 0x06, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0xF0, 0xFC, 0xFC, 0x0E, 0x06, 0xC6, 0xCE, 0xDE, 0xDC, 0xC8, 0x03, 0x0F, 0x0F, 0x1C, 0x18, 0x18, 0x1C, 0x1F, 0x0F, 0x0F, // 71
    0xFE, 0xFE, 0xFE, 0xC0, 0xC0, 0xC0, 0xC0, 0xFE, 0xFE, 0xFE, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, // 72
    0xFE, 0xFE, 0xFE, 0x1F, 0x1F, 0x1F, // 73
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0x06, 0x0F, 0x1F, 0x1C, 0x18, 0x18, 0x1F, 0x0F, 0x07, // 74
    0xFE, 0xFE, 0xFE, 0xC0, 0xE0, 0xF0, 0xF8, 0xDC, 0x0E, 0x06, 0x02, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x1E, 0x18, 0x10, // 75
    0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x18, 0x18, 0x18, 0x18, 0x18, // 76
    0xFE, 0xFE, 0xFE, 0x3E, 0xF8, 0x80, 0x80, 0xF8, 0x3E, 0xFE, 0xFE, 0xFE, 0x1F, 0x1F, 0x1F, 0x00, 0x03, 0x1F, 0x1F, 0x03, 0x00, 0x1F, 0x1F, 0x1F, // 77
    0xFE, 0xFE, 0xFE, 0x7C, 0xF0, 0xE0, 0x80, 0xFE, 0xFE, 0xFE, 0x1F, 0x1F, 0x1F, 0x00, 0x01, 0x03, 0x0F, 0x1F, 0x1F, 0x1F, // 78
    0xF0, 0xFC, 0xFC, 0x0E, 0x06, 0x06, 0x0E, 0xFC, 0xFC, 0xF0, 0x03, 0x0F, 0x0F, 0x1C, 0x18, 0x18, 0x1C, 0x0F, 0x0F, 0x03, // 79
    0xFE, 0xFE, 0xFE, 0xC6, 0xC6, 0xC6, 0xFE, 0x7E, 0x3C, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0xF0, 0xFC, 0xFC, 0x0E, 0x06, 0x06, 0x0E, 0xFC, 0xFC, 0xF0, 0x03, 0x0F, 0x0F, 0x1C, 0x18, 0x1E, 0x1C, 0x1F, 0x1F, 0x33, // 81
    0xFE, 0xFE, 0xFE, 0xC6, 0xC6, 0xC6, 0xFE, 0x7E, 0x3C, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x03, 0x0F, 0x1F, 0x1C, 0x10, // 82
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 83
    0x06, 0x06, 0x06, 0x06, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, // 84
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 85
    0x1E, 0xFE, 0xFC, 0xF0, 0x80, 0x00, 0x80, 0xF0, 0xFC, 0xFE, 0x1E, 0x02, 0x00, 0x00, 0x03, 0x1F, 0x1F, 0x1C, 0x1F, 0x1F, 0x03, 0x00, 0x00, 0x00, // 86
    0xFE, 0xFE, 0xF8, 0x00, 0x80, 0xF8, 0xFE, 0x3E, 0xFE, 0xF8, 0x80, 0x00, 0xF8, 0xFE, 0xFE, 0x06, 0x00, 0x0F, 0x1F, 0x1F, 0x1F, 0x07, 0x01, 0x00, 0x01, 0x07, 0x1F, 0x1F, 0x1F, 0x0F, 0x00, 0x00, // 87
    0x06, 0x1E, 0x3C, 0xF8, 0xF0, 0xE0, 0xF0, 0xF8, 0x3C, 0x1E, 0x06, 0x02, 0x18, 0x1E, 0x0F, 0x07, 0x03, 0x01, 0x03, 0x07, 0x0F, 0x1E, 0x18, 0x10, // 88
    0x02, 0x0E, 0x1E, 0x7E, 0xF8, 0xE0, 0xF8, 0x7E, 0x1E, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x00, // 89
    0x00, 0x06, 0x06, 0xC6, 0xE6, 0xF6, 0x3E, 0x1E, 0x0E, 0x1C, 0x1E, 0x1F, 0x1B, 0x19, 0x18, 0x18, 0x18, 0x18, // 90
    0xFE, 0xFE, 0xFE, 0x06, 0x06, 0xFF, 0xFF, 0xFF, 0xC0, 0xC0, // 91
    0x06, 0x78, 0x80, 0x00, 0x00, 0x00, 0x07, 0x18, // 92
    0x06, 0x06, 0xFE, 0xFE, 0xFE, 0xC0, 0xC0, 0xFF, 0xFF, 0xFF, // 93
    0x40, 0x70, 0x7C, 0x1E, 0x1E, 0x7C, 0x70, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, // 95
    0x02, 0x06, 0x04, 0x00, 0x00, 0x00, // 96
    0x40, 0x60, 0x70, 0x30, 0xB0, 0xB0, 0xF0, 0xF0, 0xE0, 0x0E, 0x1F, 0x1F, 0x1B, 0x19, 0x09, 0x1F, 0x1F, 0x1F, // 97
    0xFE, 0xFE, 0xFE, 0x60, 0x30, 0x30, 0xF0, 0xE0, 0xC0, 0x1F, 0x1F, 0x1F, 0x0C, 0x18, 0x18, 0x1F, 0x0F, 0x07, // 98
    0xC0, 0xE0, 0xF0, 0x70, 0x30, 0x30, 0x70, 0x60, 0x40, 0x07, 0x0F, 0x1F, 0x1C, 0x18, 0x18, 0x1C, 0x0C, 0x04, // 99
    0xC0, 0xE0, 0xF0, 0x30, 0x30, 0x60, 0xFE, 0xFE, 0xFE, 0x07, 0x0F, 0x1F, 0x18, 0x18, 0x0C, 0x1F, 0x1F, 0x1F, // 100
    0xC0, 0xE0, 0xF0, 0xB0, 0xB0, 0xB0, 0xF0, 0xE0, 0xC0, 0x07, 0x0F, 0x1F, 0x1D, 0x19, 0x19, 0x1D, 0x0D, 0x05, // 101
    0x30, 0xFC, 0xFE, 0xFE, 0x36, 0x36, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x00, // 102
    0xC0, 0xE0, 0xF0, 0x30, 0x30, 0x60, 0xF0, 0xF0, 0xF0, 0x47, 0xCF, 0xDF, 0xD8, 0xD8, 0xCC, 0xFF, 0x7F, 0x3F, // 103
    0xFE, 0xFE, 0xFE, 0x20, 0x30, 0x30, 0xF0, 0xF0, 0xE0, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, // 104
    0xF6, 0xF6, 0xF6, 0x1F, 0x1F, 0x1F, // 105
    0x00, 0xF6, 0xF6, 0xF6, 0xC0, 0xFF, 0xFF, 0x7F, // 106
    0xFE, 0xFE, 0xFE, 0xC0, 0xE0, 0xF0, 0xF0, 0x30, 0x10, 0x00, 0x1F, 0x1F, 0x1F, 0x03, 0x01, 0x07, 0x1F, 0x1E, 0x1C, 0x10, // 107
    0xFE, 0xFE, 0xFE, 0x1F, 0x1F, 0x1F, // 108
    0xF0, 0xF0, 0xF0, 0x20, 0x30, 0xF0, 0xF0, 0xE0, 0x20, 0x30, 0xF0, 0xF0, 0xE0, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x1F, 0x1F, 0x1F, // 109
    0xF0, 0xF0, 0xF0, 0x20, 0x30, 0x30, 0xF0, 0xF0, 0xE0, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, // 110
    0xC0, 0xE0, 0xF0, 0x70, 0x30, 0x70, 0xF0, 0xE0, 0xC0, 0x07, 0x0F, 0x1F, 0x1C, 0x18, 0x18, 0x1F, 0x0F, 0x07, // 111
    0xF0, 0xF0, 0xF0, 0x60, 0x30, 0x70, 0xF0, 0xE0, 0xC0, 0xFF, 0xFF, 0xFF, 0x0C, 0x18, 0x18, 0x1F, 0x0F, 0x07, // 112
    0xC0, 0xE0, 0xF0, 0x30, 0x30, 0x60, 0xF0, 0xF0, 0xF0, 0x07, 0x0F, 0x1F, 0x18, 0x18, 0x0C, 0xFF, 0xFF, 0xFF, // 113
    0xF0, 0xF0, 0xF0, 0x20, 0x30, 0x10, 0x1F, 0x1F, 0x1F, 0x00, 0x00, 0x00, // 114
    0xE0, 0xF0, 0xF0, 0x90, 0x90, 0xB0, 0x30, 0x20, 0x08, 0x19, 0x1B, 0x13, 0x13, 0x1F, 0x1F, 0x0E, // 115
    0x30, 0xFC, 0xFC, 0xFE, 0x30, 0x30, 0x00, 0x0F, 0x1F, 0x1F, 0x18, 0x18, // 116
    0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0x0F, 0x1F, 0x1F, 0x18, 0x18, 0x08, 0x1F, 0x1F, 0x1F, // 117
    0x10, 0xF0, 0xF0, 0xC0, 0x00, 0xE0, 0xF0, 0xF0, 0x10, 0x00, 0x00, 0x07, 0x1F, 0x1C, 0x1F, 0x07, 0x00, 0x00, // 118
    0x10, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0xE0, 0xF0, 0xF0, 0x10, 0x00, 0x00, 0x07, 0x1F, 0x1E, 0x0F, 0x03, 0x00, 0x03, 0x0F, 0x1E, 0x1F, 0x07, 0x00, 0x00, // 119
    0x10, 0x30, 0x70, 0xE0, 0xC0, 0x80, 0xC0, 0xE0, 0x70, 0x30, 0x10, 0x10, 0x18, 0x1E, 0x0F, 0x07, 0x03, 0x07, 0x0F, 0x1E, 0x18, 0x10, // 120
    0x10, 0xF0, 0xF0, 0xC0, 0x00, 0xC0, 0xF0, 0xF0, 0x30, 0xC0, 0xC0, 0xC7, 0xFF, 0xFC, 0x3F, 0x0F, 0x01, 0x00, // 121
    0x30, 0x30, 0x30, 0xF0, 0xF0, 0xF0, 0x30, 0x1C, 0x1E, 0x1F, 0x1B, 0x19, 0x18, 0x18, // 122
    0x00, 0x00, 0xFC, 0xFE, 0xFE, 0x06, 0x03, 0x03, 0x7F, 0xFF, 0xFC, 0xC0, // 123
    0xFE, 0xFE, 0xFF, 0xFF, // 124
    0x06, 0xFE, 0xFE, 0xFC, 0x00, 0x00, 0xC0, 0xFC, 0xFF, 0x7F, 0x03, 0x03, // 125
    0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xE0, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, // 126
    0xF8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF8, 0x1F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1F // 127
    
};

#endif
