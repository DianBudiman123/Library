

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
 * File Name           : bernardmt27.h
 * Date                : 30.12.2022
 * Font size in bytes  : 28533
 * Font width          : 10
 * Font height         : 27
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
#include <avr/pgmspace.h>

#ifndef bernardmt27_H
#define bernardmt27_H

#define bernardmt27_WIDTH 10
#define bernardmt27_HEIGHT 27

static uint8_t bernardmt27[] PROGMEM = {
    0x6F, 0x75, // size
    0x0A, // width
    0x1B, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x05, 0x0A, 0x10, 0x0C, 0x12, 0x0F, 0x04, 0x08, 0x08, 
    0x0B, 0x10, 0x05, 0x08, 0x05, 0x0E, 0x0C, 0x09, 0x0C, 0x0C, 
    0x0D, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x05, 0x05, 0x10, 0x10, 
    0x10, 0x0A, 0x18, 0x0D, 0x0D, 0x09, 0x0D, 0x0B, 0x0A, 0x0D, 
    0x0E, 0x07, 0x07, 0x0F, 0x0A, 0x0F, 0x0C, 0x0C, 0x0D, 0x0C, 
    0x0E, 0x0A, 0x0B, 0x0B, 0x0D, 0x13, 0x0C, 0x0C, 0x0A, 0x05, 
    0x0E, 0x05, 0x0C, 0x0E, 0x06, 0x0B, 0x0C, 0x09, 0x0C, 0x0B, 
    0x06, 0x0B, 0x0C, 0x06, 0x06, 0x0C, 0x06, 0x12, 0x0C, 0x0B, 
    0x0C, 0x0C, 0x09, 0x07, 0x06, 0x0C, 0x0C, 0x10, 0x0A, 0x0A, 
    0x0A, 0x09, 0x03, 0x09, 0x0F, 0x0E, 
    
    // font data
    0x7C, 0xFE, 0xFE, 0xFE, 0x7C, 0x00, 0x3F, 0xFF, 0x3F, 0x00, 0x3C, 0x7E, 0x7E, 0x7E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, // 33
    0x7E, 0xFE, 0xFE, 0x7E, 0x00, 0x00, 0x7E, 0xFE, 0xFE, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 34
    0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF0, 0x30, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF0, 0x30, 0x00, 0x0E, 0x0E, 0x0E, 0xFE, 0xFF, 0xFF, 0x0F, 0x0E, 0x0E, 0x0E, 0xFE, 0xFF, 0xFF, 0x0F, 0x0E, 0x0E, 0x07, 0xC7, 0xFF, 0xFF, 0x3F, 0x07, 0x07, 0x07, 0xC7, 0xFF, 0xFF, 0x3F, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 35
    0xF0, 0xF8, 0xF8, 0xFC, 0x8C, 0xFE, 0xFE, 0xFE, 0x1C, 0x7C, 0xF8, 0x00, 0x03, 0x0F, 0x1F, 0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFC, 0xF8, 0xF0, 0xC0, 0x0E, 0x7E, 0x3C, 0x38, 0x70, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, // 36
    0xF8, 0xFE, 0xFE, 0x03, 0x03, 0x03, 0xFE, 0xFE, 0xF8, 0xC0, 0xF8, 0xFE, 0x3F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x06, 0x06, 0x06, 0xC3, 0xFB, 0xFE, 0xBF, 0xEF, 0xE1, 0x30, 0x30, 0x30, 0xE0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x40, 0x78, 0x7E, 0x3F, 0x0F, 0x01, 0x0F, 0x3F, 0x3F, 0x60, 0x60, 0x60, 0x3F, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 37
    0x00, 0x00, 0x00, 0x00, 0xF8, 0xFE, 0xFE, 0xFF, 0xC3, 0xC3, 0xFF, 0x7E, 0x3C, 0x00, 0x00, 0xE0, 0xF8, 0xFC, 0xFC, 0x86, 0x0F, 0x7F, 0xFF, 0xFF, 0xFC, 0xE0, 0x80, 0xFC, 0x3C, 0x0C, 0x07, 0x1F, 0x3F, 0x7F, 0x7F, 0x7C, 0x78, 0x3B, 0x1F, 0x3F, 0x7F, 0x7F, 0x3C, 0x1C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 38
    0x7E, 0xFE, 0xFE, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 39
    0x00, 0x80, 0xE0, 0xF0, 0xF8, 0xFC, 0x1C, 0x06, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0x0F, 0x3F, 0x7F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x60, // 40
    0x06, 0x1C, 0xFC, 0xF8, 0xF0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0xC0, 0xFF, 0xFF, 0x7F, 0x3F, 0x0F, 0x01, 0x60, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // 41
    0x10, 0x30, 0xF0, 0xE0, 0xF8, 0xFE, 0xF8, 0xE0, 0xF0, 0x70, 0x10, 0x04, 0x06, 0x07, 0x03, 0x0F, 0x3F, 0x0F, 0x03, 0x07, 0x07, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x1E, 0xFE, 0xFE, 0x7C, 0x40, 0x60, 0x20, 0x00, 0x00, // 44
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF8, 0xF8, 0x08, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 45
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x7E, 0x7E, 0x7E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, // 46
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0x3E, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xFC, 0x3F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x40, 0x70, 0x7C, 0x3F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 47
    0x80, 0xF0, 0xF8, 0xFC, 0xFE, 0x06, 0x06, 0xFE, 0xFC, 0xF8, 0xF0, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x0F, 0x1F, 0x3F, 0x7F, 0x60, 0x60, 0x7F, 0x3F, 0x1F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 48
    0x60, 0x60, 0x70, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 49
    0xF0, 0xF8, 0xFC, 0xFE, 0x06, 0x06, 0x0E, 0xFE, 0xFC, 0xFC, 0xF8, 0xE0, 0x00, 0x01, 0x01, 0x80, 0xC0, 0xE0, 0x78, 0x7F, 0x3F, 0x1F, 0x0F, 0x03, 0x78, 0x7C, 0x7E, 0x7B, 0x79, 0x78, 0x78, 0x78, 0x78, 0x78, 0x7E, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 50
    0x70, 0xFC, 0xFC, 0xFE, 0x06, 0x06, 0x0E, 0xFE, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0xFF, 0xF3, 0xF3, 0xE0, 0xC0, 0x0E, 0x3F, 0x3F, 0x7E, 0x60, 0x60, 0x70, 0x7F, 0x3F, 0x3F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 51
    0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xF8, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0xC0, 0xF0, 0xBC, 0x8E, 0x87, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0x01, 0x01, 0x01, 0x01, 0x01, 0x61, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x61, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 52
    0x00, 0xC0, 0xFE, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x06, 0x03, 0x03, 0x07, 0xFF, 0xFE, 0xFE, 0xFC, 0xF0, 0x0E, 0x3F, 0x3F, 0x7E, 0x60, 0x60, 0x70, 0x7F, 0x3F, 0x1F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 53
    0x00, 0xE0, 0xF0, 0xF8, 0xFC, 0x1C, 0x8E, 0x86, 0x86, 0x06, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0x03, 0x0F, 0x3F, 0x3F, 0x7F, 0x60, 0x60, 0x7F, 0x3F, 0x3F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 54
    0x7E, 0x7E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0xDE, 0xFE, 0x3E, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFC, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 55
    0xF0, 0xF8, 0xFC, 0xFE, 0x8E, 0x06, 0x06, 0x06, 0x0E, 0xFC, 0xF8, 0xF0, 0x81, 0xE7, 0xFF, 0x3F, 0x1F, 0x3F, 0x7F, 0xFE, 0xFF, 0xFF, 0xF1, 0xE0, 0x0F, 0x1F, 0x3F, 0x70, 0x60, 0x60, 0x60, 0x70, 0x3F, 0x3F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 56
    0xC0, 0xF0, 0xFC, 0xFC, 0xFE, 0x06, 0x06, 0xFE, 0xFC, 0xFC, 0xF0, 0xC0, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x60, 0x61, 0x61, 0x71, 0x38, 0x3F, 0x1F, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 57
    0x00, 0x80, 0x80, 0x80, 0x00, 0x0F, 0x1F, 0x1F, 0x1F, 0x0F, 0x3C, 0x7E, 0x7E, 0x7E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, // 58
    0x80, 0xC0, 0xC0, 0xC0, 0x80, 0x07, 0x0F, 0x0F, 0x0F, 0x07, 0x1C, 0xFE, 0xFE, 0xFE, 0x7C, 0x60, 0x60, 0x20, 0x00, 0x00, // 59
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0x70, 0x1C, 0x1C, 0x3E, 0x3E, 0x77, 0x77, 0x77, 0xE3, 0xE3, 0xE3, 0xC1, 0xC1, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 60
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x70, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xC1, 0xC1, 0xE3, 0xE3, 0xE3, 0x77, 0x77, 0x77, 0x3E, 0x3E, 0x1C, 0x1C, 0x07, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x7C, 0x7E, 0x7F, 0x03, 0x03, 0xFF, 0xFF, 0xFE, 0xFE, 0x78, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x7F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x3C, 0x7E, 0x7E, 0x7E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 63
    0x00, 0x00, 0xC0, 0x60, 0x10, 0x18, 0x08, 0x04, 0x04, 0x06, 0x82, 0xC2, 0x42, 0xC2, 0x02, 0x82, 0x86, 0x84, 0x0C, 0x08, 0x30, 0x60, 0x80, 0x00, 0xFC, 0x07, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFC, 0xFE, 0x1F, 0x03, 0x00, 0xC0, 0xF8, 0xFF, 0xFF, 0x0F, 0x01, 0x00, 0x00, 0x00, 0xE0, 0x3F, 0x00, 0x03, 0x0C, 0x30, 0x60, 0xC0, 0x83, 0x07, 0x0F, 0x0F, 0x06, 0x02, 0x01, 0x07, 0x0F, 0x0F, 0x0C, 0x08, 0x04, 0x84, 0xC2, 0x41, 0x30, 0x08, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x60, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 64
    0x00, 0x00, 0x00, 0xC6, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0x0F, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x60, 0x7E, 0x7F, 0x63, 0x03, 0x03, 0x63, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 65
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0xFE, 0xFE, 0xFC, 0xFC, 0xF0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x06, 0x06, 0xFF, 0xFB, 0xFB, 0xF1, 0xE0, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x60, 0x7F, 0x7F, 0x3F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 66
    0xC0, 0xF0, 0xFC, 0xFC, 0xFE, 0x06, 0x0C, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x3F, 0x7F, 0x7F, 0x60, 0x60, 0x3C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 67
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0xFE, 0xFC, 0xF8, 0xF0, 0x80, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x60, 0x7F, 0x3F, 0x1F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 68
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x0E, 0x3E, 0x38, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x0C, 0x3F, 0x3F, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x60, 0x70, 0x7C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 69
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0x3E, 0x38, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x3F, 0x3F, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 70
    0x80, 0xE0, 0xF8, 0xFC, 0xFE, 0x0E, 0x06, 0x06, 0x0C, 0x3E, 0xFE, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x0C, 0x01, 0x0F, 0x1F, 0x3F, 0x7F, 0x60, 0x60, 0x3F, 0x1F, 0x3F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 71
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0C, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 72
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 73
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x00, 0x60, 0x60, 0x20, 0x20, 0x00, 0x00, 0x00, // 74
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0xC0, 0xE6, 0x7E, 0x1E, 0x06, 0x06, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3C, 0xFF, 0xFF, 0xFF, 0xFC, 0xE0, 0x00, 0x00, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x01, 0x6F, 0x7F, 0x7F, 0x7F, 0x7F, 0x78, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 75
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x70, 0x7C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 76
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0xC0, 0x00, 0xE0, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x00, 0xFF, 0xFF, 0x07, 0x7F, 0xFF, 0xFF, 0x7E, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x7F, 0x7F, 0x60, 0x00, 0x03, 0x03, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 77
    0x06, 0xFE, 0xFE, 0xFE, 0xFC, 0xF0, 0xC0, 0x00, 0x06, 0xFE, 0xFE, 0x06, 0x00, 0xFF, 0xFF, 0x0F, 0x3F, 0xFF, 0xFF, 0xFE, 0xF8, 0xFF, 0xFF, 0x00, 0x60, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x03, 0x0F, 0x3F, 0x7F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 78
    0x80, 0xF0, 0xF8, 0xFC, 0xFE, 0x06, 0x06, 0xFE, 0xFC, 0xF8, 0xF0, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x0F, 0x1F, 0x3F, 0x7F, 0x60, 0x60, 0x7F, 0x3F, 0x1F, 0x0F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 79
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0xFE, 0xFE, 0xFC, 0xF8, 0xE0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x60, 0x60, 0x7F, 0x7F, 0x3F, 0x1F, 0x07, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 80
    0x80, 0xF0, 0xF8, 0xFC, 0xFE, 0x06, 0x06, 0xFE, 0xFC, 0xF8, 0xF0, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x0F, 0x1F, 0x3F, 0x7F, 0x60, 0x66, 0x7F, 0x7F, 0xFF, 0xF7, 0xE1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0x20, // 81
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x06, 0xFE, 0xFE, 0xFC, 0xF8, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x18, 0x18, 0xFF, 0xEF, 0xEF, 0xE7, 0x83, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x00, 0x00, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 82
    0xF8, 0xFC, 0xFE, 0xFE, 0xC6, 0x86, 0x1C, 0x7E, 0xFE, 0xF0, 0x01, 0x07, 0x1F, 0x7F, 0xFF, 0xFF, 0xFE, 0xF8, 0xF0, 0x80, 0x0F, 0x7F, 0x7C, 0x30, 0x60, 0x63, 0x7F, 0x7F, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 83
    0x3E, 0x3E, 0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x3E, 0x3E, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 84
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0xFE, 0xFE, 0x06, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x70, 0x70, 0x3F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 85
    0x06, 0x7E, 0xFE, 0xFE, 0xFE, 0xFE, 0xC6, 0x00, 0x00, 0xC6, 0xFE, 0x7E, 0x06, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xF8, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x3F, 0x7F, 0x7F, 0x7F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 86
    0x06, 0x7E, 0xFE, 0xFE, 0xFE, 0xFE, 0xC6, 0x06, 0x7E, 0xFE, 0xFE, 0xFE, 0xFE, 0x86, 0x00, 0xC6, 0xFE, 0x7E, 0x06, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x7F, 0x7F, 0x7F, 0x7F, 0x03, 0x00, 0x03, 0x7F, 0x7F, 0x7F, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 87
    0x3E, 0xFE, 0xFE, 0xFE, 0xFE, 0xE6, 0x80, 0xC0, 0xFE, 0x3E, 0x06, 0x00, 0x00, 0x01, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xE0, 0x00, 0x00, 0x00, 0x70, 0x7C, 0x6F, 0x03, 0x01, 0x67, 0x7F, 0x7F, 0x7F, 0x7F, 0x78, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 88
    0x06, 0x3E, 0xFE, 0xFE, 0xFE, 0xFE, 0xE0, 0x00, 0xC0, 0xFE, 0x3E, 0x06, 0x00, 0x00, 0x01, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 89
    0x3C, 0x3E, 0x0E, 0x86, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x0E, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x00, 0x00, 0x70, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x61, 0x70, 0x7C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 90
    0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x60, 0x60, 0x60, 0x60, // 91
    0x02, 0x0E, 0x3E, 0xFC, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3F, 0xFC, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x3F, 0x7C, 0x70, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 92
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x60, 0x60, 0x60, 0x60, 0x60, // 93
    0x00, 0x00, 0xC0, 0xF0, 0x7C, 0x1E, 0x1E, 0x7C, 0xF0, 0xC0, 0x00, 0x00, 0x08, 0x0E, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0F, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, // 95
    0x01, 0x01, 0x03, 0x03, 0x06, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 96
    0xC0, 0xE0, 0xF0, 0xF0, 0x30, 0x30, 0xF0, 0xF0, 0xE0, 0x80, 0x00, 0xC3, 0xF3, 0xF3, 0xF9, 0x18, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x1F, 0x3F, 0x7F, 0x7F, 0x60, 0x20, 0x3F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 97
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0x20, 0x30, 0x30, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x20, 0x60, 0x60, 0x7F, 0x3F, 0x1F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 98
    0x00, 0xC0, 0xE0, 0xF0, 0x30, 0x30, 0xF0, 0xE0, 0xC0, 0xFE, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x07, 0x07, 0x03, 0x03, 0x1F, 0x3F, 0x7F, 0x60, 0x60, 0x70, 0x3E, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 99
    0x00, 0xC0, 0xE0, 0xF0, 0x30, 0x30, 0x26, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x07, 0x3F, 0x7F, 0x7F, 0x60, 0x60, 0x20, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 100
    0x00, 0x80, 0xE0, 0xE0, 0x30, 0x30, 0x30, 0x30, 0xE0, 0xC0, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x1F, 0x1F, 0x1F, 0x03, 0x0F, 0x3F, 0x3F, 0x70, 0x60, 0x60, 0x60, 0x30, 0x3E, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 101
    0x30, 0xFE, 0xFF, 0xF3, 0xF7, 0x37, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 102
    0x00, 0xC0, 0xE0, 0xE0, 0x70, 0x30, 0x30, 0xF6, 0xFE, 0xCE, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x3F, 0xBC, 0xBE, 0x7B, 0x7B, 0x7B, 0x7B, 0x7B, 0x79, 0x79, 0xF0, 0xF0, 0x20, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x20, 0x00, // 103
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0x20, 0x30, 0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 104
    0x32, 0xF3, 0xF3, 0xF3, 0xF1, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 105
    0x00, 0x32, 0xF3, 0xF3, 0xF3, 0xF1, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x7F, 0x60, 0x60, 0x60, 0x20, 0x00, 0x00, // 106
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x30, 0xF0, 0xF0, 0x30, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFC, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x01, 0x3F, 0x7F, 0x7F, 0x7E, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 107
    0x06, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 108
    0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0x20, 0x30, 0xF0, 0xF0, 0xF0, 0xE0, 0x20, 0x30, 0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 109
    0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0x20, 0x30, 0xF0, 0xF0, 0xF0, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 110
    0x00, 0xC0, 0xE0, 0xF0, 0x30, 0x30, 0x30, 0xF0, 0xE0, 0xC0, 0x00, 0xFE, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFE, 0x03, 0x1F, 0x3F, 0x7F, 0x60, 0x60, 0x60, 0x3F, 0x3F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 111
    0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0x20, 0x30, 0x30, 0xF0, 0xE0, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x30, 0x60, 0x60, 0x7F, 0x3F, 0x1F, 0x07, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 112
    0x00, 0xC0, 0xE0, 0xF0, 0x30, 0x30, 0x30, 0xE0, 0xC0, 0xE0, 0xF0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x07, 0x3F, 0x7F, 0x7F, 0x60, 0x60, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, // 113
    0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0xC0, 0xF0, 0xF0, 0xE0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x01, 0x01, 0x60, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 114
    0xC0, 0xF0, 0xF0, 0x30, 0x60, 0xF0, 0xC0, 0x0F, 0x3F, 0xFF, 0xFF, 0xFC, 0xF1, 0x81, 0x3C, 0x7C, 0x30, 0x63, 0x7F, 0x7F, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 115
    0x30, 0xF0, 0xF8, 0xFE, 0xFE, 0x30, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 116
    0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x3F, 0x7F, 0x7F, 0x7F, 0x60, 0x20, 0x7F, 0x7F, 0x7F, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 117
    0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0x30, 0x00, 0x00, 0x30, 0xF0, 0xF0, 0x30, 0x00, 0x01, 0x3F, 0xFF, 0xFF, 0xFE, 0xE0, 0xC0, 0xFE, 0x3F, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0x7F, 0x7F, 0x7F, 0x7F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 118
    0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0x30, 0x30, 0xF0, 0xF0, 0xF0, 0x30, 0x00, 0x30, 0xF0, 0xF0, 0x30, 0x00, 0x03, 0x7F, 0xFF, 0xFF, 0xFE, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFC, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x7F, 0x7F, 0x7F, 0x03, 0x01, 0x7F, 0x7F, 0x7F, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 119
    0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 0x30, 0xF0, 0xF0, 0x30, 0x00, 0x01, 0x0F, 0xFF, 0xFF, 0xFE, 0xFF, 0x83, 0x00, 0x00, 0x60, 0x70, 0x7E, 0x6F, 0x67, 0x7F, 0x7F, 0x7F, 0x78, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 120
    0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0x30, 0x30, 0xF0, 0xF0, 0x30, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0xFC, 0xFF, 0x03, 0x00, 0x80, 0xC0, 0x80, 0x3F, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x20, 0x60, 0x60, 0x60, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // 121
    0xC0, 0xF0, 0x70, 0x30, 0x30, 0xF0, 0xF0, 0xF0, 0xF0, 0x30, 0x01, 0x01, 0x80, 0xF0, 0xFE, 0xFF, 0x7F, 0x0F, 0x01, 0x00, 0x60, 0x7C, 0x7F, 0x7F, 0x7F, 0x63, 0x60, 0x70, 0x7C, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 122
    0x00, 0x00, 0x00, 0xF8, 0xFC, 0xFE, 0xFE, 0x0E, 0x0E, 0xF0, 0xF0, 0xF8, 0xFF, 0xFF, 0x9F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x60, 0xE0, 0xE0, 0xE0, 0xE0, // 123
    0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x60, 0x60, 0x60, // 124
    0x0E, 0x0E, 0xFE, 0xFE, 0xFC, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x9F, 0xFF, 0xFF, 0xF8, 0xF0, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0x00, 0x00, // 125
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x1C, 0x0E, 0x0E, 0x0E, 0x0E, 0x1C, 0x1C, 0x3C, 0x38, 0x38, 0x38, 0x38, 0x1C, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xE0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0xE0, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // 127
    
};

#endif
