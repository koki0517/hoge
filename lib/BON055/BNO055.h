#pragma once

extern int bno_x;
extern int bno_y;
extern int bno_z;

class BNO055 {
public:
  BNO055();
  bool init();
  void get_xyz();
}