#include <DMDESP2.h>
#include <fonts/Mono5x7.h>

#define PANEL_WIDTH 3
#define PANEL_HEIGHT 1
DMDESP2 display(PANEL_WIDTH, PANEL_HEIGHT);

void setup()
{
    display.setRefreshInterval(1);
    display.start();
    display.setBrightness(5); // 0 - 7
    display.setFont(Mono5x7);
    display.drawText(0, 0, "Hello World");
}

void loop()
{
    display.stop(); // untuk menghentikan display sementara 	 
    delay(1000);    // ketika mengeksekusi perintah yang kritis..contoh menulis eeprom
	  display.resume(); // display on kemabli 
    delay(1000);
}