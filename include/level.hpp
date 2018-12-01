/** @file level.hpp
 *
 * @brief This class implements level control and sets alarm on
 *        if level is reached
 * @author Nithish Sanjeev Kumar
 * @copyright 2018 , Nithish Sanjeev Kumar All rights reserved
 */
#pragma once

/** @brief Class to implement PID control
 */

#include "PID.hpp"

class levelAlarm : public PID {
 private:
  /** Identifiers for level, alarm and thresold
     */

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
