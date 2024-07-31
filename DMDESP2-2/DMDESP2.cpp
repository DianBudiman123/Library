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

#include "DMDESP2.h"
#include "Arduino.h"
#include <string.h>
#include <stdlib.h>
#include "Bitmap.h"

#define USING_TIM_DIV1                true           // for shortest and most accurate timer
#define USING_TIM_DIV16               false           // for medium time and medium accurate timer
#define USING_TIM_DIV256              false            // for longest timer but least accurate. Default


// Pins on the DMDESP2 connector board.
#define DMD_PIN_PHASE_LSB       16    //D0 // A 
#define DMD_PIN_PHASE_MSB       12    //D6 // B 
#define DMD_PIN_LATCH            0     //D3 // SCLK 
//#define DMD_PIN_LATCH2         4     //D2 //  SCLK HUB2 
#define DMD_PIN_LATCH2           3     //RX //  SCLK HUB2 
#define DMD_PIN_OUTPUT_ENABLE   15    //D8 // nOE
#define DMD_PIN_SPI_MOSI        13    //D7 // R SPI Master Out, Slave In 
#define DMD_PIN_SPI_SCK         14    //D5 // CLK SPI Serial Clock 

// Dimension information for the display.
#define DMDESP2_NUM_COLUMNS      32    // Number of columns in a panel.
#define DMDESP2_NUM_ROWS         16    // Number of rows in a panel.

// Refresh times.
//#define DMDESP2_REFRESH_MS       100
#define DMDESP2_REFRESH_US       100
volatile uint8_t phase;
uint8_t  *displayfb;
volatile uint8_t __stride;
volatile uint8_t __height;
volatile uint8_t cr;
volatile bool stopRefresh;


/**
 * \brief Constructs a new dot matrix display handler for a display that
 * is \a widthPanels x \a heightPanels in size.
 *
 * Note: the parameters to this constructor are specified in panels,
 * whereas width() and height() are specified in pixels.
 *
 * \sa width(), height()
 */
DMDESP2::DMDESP2(int widthPanels, int heightPanels)
  : Bitmap(widthPanels * DMDESP2_NUM_COLUMNS, heightPanels * DMDESP2_NUM_ROWS )
  , _doubleBuffer(false)
  , fb0(0)
  , fb1(0)
  , lastRefresh(millis()) 
{ 
  // Both rendering and display are to fb0 initially.
    //displayfb(0)
	__stride=(((widthPanels * DMDESP2_NUM_COLUMNS) + 7) / 8);
	__height=heightPanels * DMDESP2_NUM_ROWS;
    fb0 = displayfb = fb; 

  // Initialize SPI to MSB-first, mode 0, clock divider = 2.
}

/**
 * \brief Destroys this dot matrix display handler.
 */
DMDESP2::~DMDESP2()
{
  if (fb0)
    free(fb0);
  if (fb1)
    free(fb1);
  fb = 0; // Don't free the buffer again in the base class.
}

/**
 * \fn bool DMD::doubleBuffer() const
 * \brief Returns true if the display is double-buffered; false if
 * single-buffered.  The default is false.
 *
 * \sa setDoubleBuffer(), swapBuffers(), refresh()
 */

/**
 * \brief Enables or disables double-buffering according to \a doubleBuffer.
 *
 * When double-buffering is enabled, rendering operations are sent to a
 * memory buffer that isn't currently displayed on-screen.  Once the
 * application has completed the screen update, it calls swapBuffers()
 * to display the current buffer and switch rendering to the other
 * now invisible buffer.
 *
 * Double-buffering is recommended if refresh() is being called from an
 * interrupt service routine, to prevent "tearing" artifacts that result
 * from simultaneous update of a single shared buffer.
 *
 * This function will allocate memory for the extra buffer when
 * \a doubleBuffer is true.  If there is insufficient memory for the
 * second screen buffer, then this class will revert to single-buffered mode.
 *
 * \sa doubleBuffer(), swapBuffers(), refresh()
 */
void DMDESP2::setDoubleBuffer(bool doubleBuffer)
{
    if (doubleBuffer != _doubleBuffer) {
        _doubleBuffer = doubleBuffer;
        if (doubleBuffer) {
            // Allocate a new back buffer.
            unsigned int size = _stride * _height;
            fb1 = (uint8_t *)malloc(size);

            // Clear the new back buffer and then switch to it, leaving
            // the current contents of fb0 on the screen.
            if (fb1) {
                memset(fb1, 0xFF, size);
                cli();
                fb = fb1;
                displayfb = fb0;
                sei();
            } else {
                // Failed to allocate the memory, so revert to single-buffered.
                _doubleBuffer = false;
            }
        } else if (fb1) {
            // Disabling double-buffering, so forcibly switch to fb0.
            cli();
            fb = fb0;
            displayfb = fb0;
            sei();

            // Free the unnecessary buffer.
            free(fb1);
            fb1 = 0;
        }
    }
}

/**
 * \brief Swaps the buffers that are used for rendering to the display.
 *
 * When doubleBuffer() is false, this function does nothing.
 * Otherwise the front and back rendering buffers are swapped.
 * See the description of setDoubleBuffer() for more information.
 *
 * The new rendering back buffer will have undefined contents and will
 * probably need to be re-inialized with clear() or fill() before
 * drawing to it.  The swapBuffersAndCopy() function can be used instead
 * to preserve the screen contents from one frame to the next.
 *
 * \sa swapBuffersAndCopy(), setDoubleBuffer()
 */
void DMDESP2::swapBuffers()
{
    if (_doubleBuffer) {
        // Turn off interrupts while swapping buffers so that we don't
        // accidentally try to refresh() in the middle of this code.
        cli();
        if (fb == fb0) {
            fb = fb1;
            displayfb = fb0;
        } else {
            fb = fb0;
            displayfb = fb1;
        }
        sei();
    }
}

/**
 * \brief Swaps the buffers that are used for rendering to the display
 * and copies the former back buffer contents to the new back buffer.
 *
 * Normally when swapBuffers() is called, the new rendering back buffer
 * will have undefined contents from two frames prior and must be cleared
 * with clear() or fill() before writing new contents to it.
 * This function instead copies the previous frame into the new
 * rendering buffer so that it can be updated in-place.
 *
 * This function is useful if the screen does not change much from one
 * frame to the next.  If the screen changes a lot between frames, then it
 * is usually better to explicitly clear() or fill() the new back buffer.
 *
 * \sa swapBuffers(), setDoubleBuffer()
 */
void DMDESP2::swapBuffersAndCopy()
{
    swapBuffers();
    if (_doubleBuffer)
        memcpy((void *)fb, (void *)displayfb, _stride * _height);
}

volatile uint8_t _cnt;

void refresh(){

  // Transfer the data for the next group of interleaved rows.
  int stride4 = __stride * 4;
  uint8_t *data0;
  uint8_t *data1;
  uint8_t *data2;
  uint8_t *data3;
  bool flipRow = ((__height & 0x10) == 0);
  for (byte y = 0; y < __height; y += 16) {
       // The panels in this row are the right way up.
    data0 = displayfb + __stride * (y + phase);
    data1 = data0 + stride4;
    data2 = data1 + stride4;
    data3 = data2 + stride4;
    for (int x = __stride ; x > 0; --x) {
      SPI.write(*data3++);
      SPI.write(*data2++);
      SPI.write(*data1++);
      SPI.write(*data0++);
    }  
   if (!flipRow) {	  
      flipRow = true;
      GPOC = (1 << DMD_PIN_OUTPUT_ENABLE); // Set to LOW
      GPOS = (1 << DMD_PIN_LATCH); // Set to HIGH
      GPOC = (1 << DMD_PIN_LATCH); // Set to LOW
   }else {     
      flipRow = false;
	  if(DMD_PIN_LATCH2 != 255){
      GPOC = (1 << DMD_PIN_OUTPUT_ENABLE); // Set to LOW
      GPOS = (1 << DMD_PIN_LATCH2); // Set to HIGH
      GPOC = (1 << DMD_PIN_LATCH2); // Set to LOW	  
	  }
    }
  }
  digitalWrite(DMD_PIN_PHASE_LSB,bitRead(phase, LOW));
  digitalWrite(DMD_PIN_PHASE_MSB,bitRead(phase, HIGH));
  phase = (phase + 1) & 0x03;
  _cnt=0;
   if(cr>0) {
	 GPOS = (1 << DMD_PIN_OUTPUT_ENABLE); // Set to High
 }


}



void IRAM_ATTR ledScan()
{
 if(!stopRefresh){
   _cnt++;
   if(_cnt==cr) 
       GPOC = (1 << DMD_PIN_OUTPUT_ENABLE);
   if(_cnt>=7)
       refresh();		
 }
}
uint8_t _interval;
void timerInit(){
   timer1_attachInterrupt(ledScan);
   timer1_enable(TIM_DIV16, TIM_EDGE, TIM_LOOP);
   switch(_interval){
	  case 5:
	     timer1_write(1500);        
      break;
	  case 4:
	     timer1_write(1300);        
      break;
	  case 3:
	     timer1_write(1100);        
      break;
	  case 2:
	     timer1_write(900);        
      break;
	  case 1:
	     timer1_write(750);        
      break;	  
   }

}
void DMDESP2::start(){
  
    pinMode(DMD_PIN_SPI_SCK, OUTPUT);
    pinMode(DMD_PIN_SPI_MOSI, OUTPUT);
    digitalWrite(DMD_PIN_SPI_SCK, LOW);
    digitalWrite(DMD_PIN_SPI_MOSI, LOW);
    // Initialize the DMD-specific pins.
    pinMode(DMD_PIN_PHASE_LSB, OUTPUT);
    pinMode(DMD_PIN_PHASE_MSB, OUTPUT);
    pinMode(DMD_PIN_LATCH, OUTPUT);
	pinMode(DMD_PIN_LATCH, OUTPUT);
    pinMode(DMD_PIN_OUTPUT_ENABLE, OUTPUT);
    digitalWrite(DMD_PIN_PHASE_LSB, LOW);
    digitalWrite(DMD_PIN_PHASE_MSB, LOW);
    digitalWrite(DMD_PIN_LATCH, LOW);
    digitalWrite(DMD_PIN_OUTPUT_ENABLE, LOW);
    digitalWrite(DMD_PIN_SPI_MOSI, HIGH);
	if(DMD_PIN_LATCH2 != 255){
  	    pinMode(DMD_PIN_LATCH2, OUTPUT);
        digitalWrite(DMD_PIN_LATCH2, LOW);		
	}	
  pinMode(SCK, SPECIAL);  
  pinMode(MOSI, SPECIAL);
  SPI1C = 0;
  SPI1U = SPIUMOSI | SPIUDUPLEX | SPIUSSE;
  SPI1U1 = (7 << SPILMOSI) | (7 << SPILMISO);
  SPI1C1 = 0;
  SPI1C &= ~(SPICWBO | SPICRBO);
  SPI1U &= ~(SPIUSME);SPI1P &= ~(1<<29);
  SPI.setFrequency(25000000); 
  byte jsh=0x11; 
  while(jsh--){if(jsh==DMD_PIN_PHASE_LSB||jsh==DMD_PIN_OUTPUT_ENABLE||jsh==DMD_PIN_PHASE_MSB||jsh==DMD_PIN_LATCH){
  digitalWrite(jsh, 0);pinMode(jsh,OUTPUT);}else{continue;}}
  timerInit();
  _cnt=0;
  _interval=5;
}

void DMDESP2::setBrightness(uint8_t b){
  
  if(b>7){b=7;} 
  cr=b;
  
}
void DMDESP2::setRefreshInterval(uint8_t interval) { 
  _interval=interval;
}
void DMDESP2::stop() { 
   stopRefresh=true;
   digitalWrite(DMD_PIN_OUTPUT_ENABLE, LOW);
}
void DMDESP2::resume() { 
   stopRefresh=false;
}

/**
 * \brief Converts an RGB value into a pixel color value.
 *
 * Returns \ref White if any of \a r, \a g, or \a b are non-zero;
 * otherwise returns \ref Black.
 *
 * This function is provided for upwards compatibility with future
 * displays that support full color.  Monochrome applications should
 * use the \ref Black and \ref White constants directly.
 */
DMDESP2::Color DMDESP2::fromRGB(uint8_t r, uint8_t g, uint8_t b) 
{  
  if (r || g || b)
    return White;
  else
    return Black;    
}