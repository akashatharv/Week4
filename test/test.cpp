/** @file test.cpp
 *
 * @brief This test function tests if the class is designed properly.
 *
 * @author Akash Atharv
 * @navigator Nithish Sanjeev Kumar
 * @copyright 2018 , Akash Atharv,Nithish Sanjeev Kumar All rights reserved

*/

#include <gtest/gtest.h>
#include "PID.hpp"
#include "level.hpp"
/** @brief Test to verify if compute function of classPID is working
 * properly or not
 *
 * @param setpoint and velocity
*/
TEST(pidCompute, should_pass) {
  PID obj;   /*!< Object of the class PID  */
  EXPECT_EQ(0, obj.computeVelocity(40,40));
}

/** @brief Test to verify if the respective gain enquiry functions of classPID 
 *is working properly or not
 *
*/
TEST(gainEnquiry, should_pass) {
  PID obj;   /*!< Object of the class PID  */
  levelAlarm obj1;
  obj1.levelControl();
  obj.inputGains(0.5,0.2,0.1);
  EXPECT_EQ(0.5, obj.returnKp());
  EXPECT_EQ(0.2, obj.returnKi());
  EXPECT_EQ(0.1, obj.returnKd());
  EXPECT_EQ(1, obj1.returnAlarm());
}
