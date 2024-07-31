#include <DMDESP2.h>
#include <fonts/Mono5x7.h>
#include <fonts/bernardmt30.h>
#include <fonts/Arial_Black_16.h>
#define PANEL_WIDTH 6
#define PANEL_HEIGHT 2

 
DMDESP2 display(PANEL_WIDTH, PANEL_HEIGHT);

void setup()
{
    display.setRefreshInterval(1); // 1 - 5 //jika ini disable maka berhasil compile
    display.start();
    display.setBrightness(1); // 0 - 7
    display.setFont(bernardmt30);
}

void loop()
{
 
   Scroll("Pemrograman Runing Text menggunakan ESP8266 ", 15,1); // 
}



void Scroll(String text ,uint8_t kecepatan ,int y) {
  static uint32_t pM;
  static uint32_t x;
  int width = display.width();
  int fullScroll = display.textWidth(text) + width;
  if((millis() - pM) > kecepatan) { 
    pM = millis();
    if (x < fullScroll) {
      ++x;
    } else {
      x = 0;
      return;
    }        
    display.drawText(width - x, y, text+" ");
  }  
}