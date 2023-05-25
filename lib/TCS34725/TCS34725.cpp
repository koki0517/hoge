#include "arduino_freertos.h"
#include "avr/pgmspace.h"
#include <Arduino.h>
#include <Wire.h>
#include "TCS34725.h"

const int8_t LED_pin = 0;
const int8_t SDA;
const int8_t SCL;

TCS34725::TCS34725(){
  pinMode(LED_pin,arduino::OUTPUT);
  digitalWrite(LED_pin,arduino::HIGH);
}