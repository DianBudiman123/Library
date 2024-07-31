# DMDESP Dot Matrix Display P10 library for ESP8266.

## Library for controlling LED P10 Single Color with ESP8266

### <b> Supported Hardware
- ESP8266 based Microcontroller
- NodeMCU
- Wemos D1 Mini
- etc


### <b> Pin configuration
| <b> DMD P10 | <b> NODEMCU | <b> ESP8266
| ----------- | ----------- | -------
| A           | D0          | GPIO16
| B           | D6          | GPIO12
| CLK         | D5          | GPIO14
| SCK         | D3          | GPIO0
| R           | D7          | GPIO13
| NOE         | D8          | GPIO15
| GND         | GND         | GND

configurasi pin diatas adalah configurasi default
selain pin CLK dan R Pin bisa ditukar tukar..lihat file example2hub.ino

### <b> Notes : 
- Required external power supplies 5V to powering Dot Matrix Display P10

 > catatan editan by mikodemos
   > 1.scaning display menggunakan timer1 pake library ESP8266TimerInterrupt.h
       menghindari penggunaan timer0 dimana timer0 digunakan oleh wifi
	 2.perubahan system configurasi kabel hub12 untuk panel baris ke 2 
	   dari model S menjadi Z, dimana model S panel baris kedua terpasang terbalik
	 3.penambahan fitur hub12_2 agar lebih mudah perakitannya dari model S maupun Z 
     4.reolusi brightness dari 0 -255 menjadi 0 - 15