/*
 * Copyright (C) 2012 Southern Storm Software, Pty Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
--------------------------------------------------------------------------------------
CATATAN :
 * > Library DMDESP2 Updated 26 April 2020 - bonny@elektronmart.com
 * > HJS589(DMD porting for ESP8266 by dmk007) 
 * > DMD (https://github.com/rweather/arduino-projects/tree/master/libraries/DMD)
 * Penggunaan : Copy Folder DMDESP2 ke Arduino Library
  
 * JANGAN LUPA PESAN HEADER DI ATAS.
 * Silahkan untuk dipergunakan untuk kepentingan Ibadah, Edukasi dan Komersil. Jangan lupa
   jika menggunakan library ini jangan dihapus headernya dan jika ada perbaikan atau
   pengembangan lanjutan ANDA WAJIB untuk MEMBAGIKAN KEMBALI hasilnya ke PUBLIK (GNU 
   General Public License).
 * JANGAN PELIT ILMU.....!!!
 
 
 > catatan editan by mikodemos
   > 1.scaning display menggunakan timer1 pake library ESP8266TimerInterrupt.h
       menghindari penggunaan timer0 dimana timer0 digunakan oleh wifi
	 2.perubahan system configurasi kabel hub12 untuk panel baris ke 2 
	   dari model S menjadi Z, dimana model S panel baris kedua terpasang terbalik
	 3.penambahan fitur hub12_2 lebih mudah perakitannya dari model S maupun Z 
     4.reolusi brightness dari 0 -255 menjadi 0 - 15
	 
--------------------------------------------------------------------------------------*/


#ifndef DMDESP2_H
#define DMDESP2_H

#include "Bitmap.h"
#include <SPI.h>

class DMDESP2 : public Bitmap
{
public:
    explicit DMDESP2(int widthPanels = 1, int heightPanels = 1);
    ~DMDESP2();

    bool doubleBuffer() const { return _doubleBuffer; }
    void setDoubleBuffer(bool doubleBuffer);
	void setRefreshInterval(uint8_t interval=9000);
    void swapBuffers();
    void swapBuffersAndCopy();
    void start();
	void stop();
	void resume();
    void setBrightness(uint8_t crh);
    static Color fromRGB(uint8_t r, uint8_t g, uint8_t b);

private:
    // Disable copy constructor and operator=().
    DMDESP2(const DMDESP2 &other) : Bitmap(other) {}
    DMDESP2 &operator=(const DMDESP2 &) { return *this; }
    bool _doubleBuffer;
	bool _fullSpeed;
    uint8_t *fb0;
    uint8_t *fb1;
    unsigned long lastRefresh;
};

#endif