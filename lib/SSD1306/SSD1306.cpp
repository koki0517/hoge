#include "arduino_freertos.h"
#include "avr/pgmspace.h"
#include <Arduino.h>
#include <Wire.h>

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "SSD1306.h"

Adafruit_SSD1306 display(128, 64, &Wire, -1);

bool SSD1306::init(){
  return display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void SSD1306::clear(){
  display.clearDisplay();     //表示クリア
}

void SSD1306::home(){
  while (1){
  }
}