#include "arduino_freertos.h"
#include "avr/pgmspace.h"
#include <Arduino.h>
#include <Wire.h>

#include "BNO055.h"
#include "SSD1306.h"
#include "VL53L5CX.h"

BNO055 bno;
SSD1306 display;
VL53L5CX lidar;

static void task1(void*) {
  while (1) {
  }
}

static void task2(void*) {
  while (1) {
  }
}

FLASHMEM __attribute__((noinline)) void setup() {
  Serial.begin(115200);
  Wire.begin();

  if (!bno.init()){
    // BNO055が見つかんなかったYO 
  }

  if (!display.init()){
    // SSD1306が見つかんなかったYO
  }

  if (!lidar.init()){
    // xiaoが見つかんなかったYO
  }

  ::xTaskCreate(task1, "task1", 128, nullptr, 2, nullptr);
  ::xTaskCreate(task2, "task2", 128, nullptr, 2, nullptr);

  ::vTaskStartScheduler();
}

void loop(){} // いっとしゅっどびぃえんぷてぃ