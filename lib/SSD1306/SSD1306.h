#pragma once

extern bool display_alive = true;
extern int8_t buttons[] = {0,0,0};

class SSD1306 {
public:
  SSD1306();
  bool init();
  void clear();
  void home();

private:
};