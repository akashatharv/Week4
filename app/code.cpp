/** @file code.cpp
 * 
 * @brief This script makes use of the class PID to get the required
 *        PID value for a target setpoint and velocity
 * 
 * @author Akash Atharv
 * @navigator Nithish Sanjeev Kumar
 * @copyright 2018 , Akash Atharv,Nithish Sanjeev Kumar All rights reserved

*/

#include<iostream>
#include "PID.hpp" /*!< Library that contains the class PID */


int main() {
        PID obj;   /*!< Object of Class PID */

        double error, setpoint, velocity;
        /*!< Declaration of system variables */
        setpoint = 30;
        velocity = 20;

	/**@brief function to input the gain values Kp,Ki,Kd
	* @param Kp,Ki,Kd
	* @return void
	*/
        const double Kp = 0.6, Kd = 0.3, Ki = 0.2;
        obj.inputGains(Kp, Kd, Ki);

	/**@brief function to calculate the velocity to be provided
	* @param targetSetpoint, velocity
	* @return a double value to be fed to the controlled object
	*/

        error = obj.computeVelocity(setpoint, velocity);

        std::cout << "The PID output is : " << error << std::endl;
        std::cout << "New state(velocity) is : " << velocity+error << std::endl;

        return 0;
}


