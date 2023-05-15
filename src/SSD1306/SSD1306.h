#ifndef SSD1306_h
#define SSD1306_h

#include <Arduino.h>

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>


class SSD1306 {
  public:
    SSD1306(Adafruit_SSD1306 *p);
    Adafruit_SSD1306 *displayPtr;
    void clear();

  private:
};

#endif