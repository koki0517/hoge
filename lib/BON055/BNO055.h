#pragma once

extern int16_t bno_x;
extern int16_t bno_y;
extern int16_t bno_z;

class BNO055 {
public:
  BNO055();
  bool init();
  void get_xyz(int16_t* bno_x,int16_t* bno_y,int16_t* bno_z);
}