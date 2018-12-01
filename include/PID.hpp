/** @file PID.hpp
 * 
 * @brief This class implements PID control algorithm to control
 *        a velocity value based on current velocity and a set point
 * 
 * @author Nithish Sanjeev Kumar
 * @copyright 2018 , Nithish Sanjeev Kumar All rights reserved

*/

#pragma once

/** @brief Class to implement PID control
 */

class PID {
 private:
    /** Identifiers for gains Kp,Ki and Kd
    */   
     double Kp;
     double Ki;
     double Kd;

 public:
    /**@brief Constructor
     * @param none
     * @return none
     */
    PID();

    /**@brief function to calculate the velocity to be provided
     * @param targetSetpoint, velocity
     * @return a double value to be fed to the controlled object
     */
    virtual double computeVelocity(double targetSetpoint, double velocity);
    /**@brief function to input the gain values Kp,Ki,Kd
     * @param Kp,Ki,Kd
     * @return void
     */
    void inputGains(double inputKp, double inputKi, double inputKd);
    /**@brief function to return the gain value Kp
     * @return a double value corresponding to gain value Kp
     */
    virtual double returnKp();
    /**@brief function to return the gain value Kp
     * @return a double value corresponding to gain value Kp
     */
    virtual double returnKi();
    /**@brief function to return the gain value Kp
     * @return a double value corresponding to gain value Kp
     */
    virtual double returnKd();

    /**@brief Destructor
     * @param none
     * @return none
     */
    virtual ~PID();
};
