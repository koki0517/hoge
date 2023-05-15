#include "arduino_freertos.h"
#include "avr/pgmspace.h"

#include <Arduino.h>
#include <Wire.h>

// BNO055
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>

#include "./SSD1306.h"
Adafruit_SSD1306 Adafruit_SSD1306(128, 64, &Wire, -1);

SSD1306 display(&Adafruit_SSD1306);

Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28);
#define BNO055_SAMPLERATE_DELAY_MS (100)

static void task1(void*) {
  while (true) {
  }
}

static void task2(void*) {
  while (true) {
  }
}

FLASHMEM __attribute__((noinline)) void setup() {
  Serial.begin(115200);
  Wire.begin();
  /* Initialise the sensor */
  if(!bno.begin())
  {
    /* There was a problem detecting the BNO055 ... check your connections */
    Serial.print("Ooops, no BNO055 detected ... Check your wiring or I2C ADDR!");
    while(1);
  }

  delay(1000);

  /* Use external crystal for better accuracy */
  bno.setExtCrystalUse(true);

  ::xTaskCreate(task1, "task1", 128, nullptr, 2, nullptr);
  ::xTaskCreate(task2, "task2", 128, nullptr, 2, nullptr);

  ::vTaskStartScheduler();


}

void loop() {
    // 
}
