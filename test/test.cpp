/** @file test.cpp
 *
 * @brief This test function tests if the class is designed properly.
 *
 * @author Nithish Sanjeev Kumar
 * @copyright 2018 , Nithish Sanjeev Kumar All rights reserved

*/

#include <gtest/gtest.h>
#include "gmock/gmock.h"
#include "iostream"
#include "PID.hpp"
#include "level.hpp"
/** @brief Test to verify if compute function of mock class is working
 * properly or not
 *
 * @param setpoint and velocity
*/

using ::testing::AtLeast;
using ::testing::_;
using ::testing::Return;

class MockPID : public PID{
 public:
  MOCK_METHOD0(returnKp, double());
  MOCK_METHOD0(returnKi, double());
  MOCK_METHOD0(returnKd, double());
  MOCK_METHOD3(inputGains, void(double inputKp, double inputKi,
                                double inputKd));
  MOCK_METHOD2(computeVelocity, double(double targetSetpoint,
                                       double velocity));
};

TEST(pidCompute, ComputationCheck) {
  MockPID obj;   /*!< Object of the class PID  */
  EXPECT_CALL(obj, computeVelocity(40.00, 40.00))
              .WillOnce(Return(0.0)).WillOnce(Return(0.0));
  std::cout << "The function returns:" << obj.computeVelocity(40, 40)
           << std::endl;
  ASSERT_EQ(obj.computeVelocity(40, 40), 0);
}

/** @brief Test to verify if the respective gain enquiry functions of classPID 
 *is working properly or not
 *
*/
TEST(gainEnquiry, CheckClassFunctionWorking) {
  MockPID obj;   /*!< Object of the class PID  */
  levelAlarm obj1;
  obj1.levelControl();
  EXPECT_CALL(obj, inputGains(0.5, 0.2, 0.1)).Times(1);
  obj.inputGains(0.5, 0.2, 0.1);
  EXPECT_CALL(obj, returnKp()).Times(1).WillOnce(Return(.5));
  EXPECT_CALL(obj, returnKi()).Times(1).WillOnce(Return(.2));
  EXPECT_CALL(obj, returnKd()).Times(1).WillOnce(Return(.1));

  EXPECT_EQ(0.5, obj.returnKp());
  EXPECT_EQ(0.2, obj.returnKi());
  EXPECT_EQ(0.1, obj.returnKd());
  EXPECT_EQ(1, obj1.returnAlarm());
}


