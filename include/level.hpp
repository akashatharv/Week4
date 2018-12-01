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
  /**@brief Constructor
   * @param none
   * @return none
   */
  levelAlarm();

  /**@brief function to implement level control
   * @param none
   * @return none
   */
  void levelControl();

  /**@brief function to get alarm flag
   * @param none
   * @return alarm value
   */
  int returnAlarm();

  /**@brief Destructor
   * @param none
   * @return none
   */
  ~levelAlarm();
};
