#include <Arduino.h>
#include "SSD1306.h"

SSD1306::SSD1306(Adafruit_SSD1306 *p){
  displayPtr = p;
  if (!displayPtr->begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    //Serial.println("SSD1306:0 allocation failed");
    for (;;); //エラーなら無限ループ
  }
}

SSD1306::clear(){
  displayPtr->clearDisplay();     //表示クリア
}