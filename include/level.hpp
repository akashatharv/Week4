#pragma once

#include "PID.hpp"

class levelAlarm : public PID {
 private:
  double level;
  int alarm;
  double thresold;
  double levelMax;
 public:

  levelAlarm();
  void levelControl();
  int returnAlarm();
  ~levelAlarm();
};
