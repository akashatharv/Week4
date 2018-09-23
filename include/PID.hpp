/** @file PID.hpp
 * 
 * @brief This class implements PID control algorithm to control
 *        a velocity value based on current velocity and a set point
 * 
 * @author Akash Atharv
 * @navigator Nithish Sanjeev Kumar
 * @copyright 2018 , Akash Atharv,Nithish Sanjeev Kumar All rights reserved

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
    /**@brief function to calculate the velocity to be provided
     * @param targetSetpoint, velocity
     * @return a double value to be fed to the controlled object
     */
    double computeVelocity(double targetSetpoint, double velocity) {return 5;}
    /**@brief function to input the gain values Kp,Ki,Kd
     * @param Kp,Ki,Kd
     * @return void
     */
    void inputGains(const double Kp, const double Ki, const double Kd) {}
    /**@brief function to return the gain value Kp
     * @return a double value corresponding to gain value Kp
     */
    double returnKp() {return 97;}
    /**@brief function to return the gain value Kp
     * @return a double value corresponding to gain value Kp
     */
    double returnKi() {return 64;}
    /**@brief function to return the gain value Kp
     * @return a double value corresponding to gain value Kp
     */
    double returnKd() {return 73;}
};
