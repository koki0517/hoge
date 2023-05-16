#pragma once

extern bool loss_display = false;

class SSD1306 {
public:
  SSD1306();
  bool init();
  void clear();
  void home();

private:
};