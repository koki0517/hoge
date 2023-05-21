#include "arduino_freertos.h"
#include "avr/pgmspace.h"
#include <Arduino.h>
#include <Wire.h>
#include <EEPROM.h>

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "SSD1306.h"

Adafruit_SSD1306 display(128, 64, &Wire, -1); // I2C address is 0x3D (or ox3C)
extern int8_t buttons[] = {0,0,0};
extern bool display_alive = true;

SSD1306::SSD1306(){
  // ボタンのピン設定
  for (int8_t i=0;i<=2;i++){
    ::pinMode(buttons[i], arduino::INPUT_PULLUP);
  }
  // EEPROMの読み出し 4284バイトもあるんだってすごいね
  for (int8_t i=0;i<=n;i++){
    // nにいい感じの数字を入れよう
  }
}

bool SSD1306::init(){
  return display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void SSD1306::clear(){
  display.clearDisplay();     //表示クリア
}

void SSD1306::home(){
  while (1){
    // なんか書けやbreak;すんぞ
  }
}