/*
 * @file PID.cpp
 * @brief Class & member functions Definitions
 *
 * @author RajendraMayavan
 * @copyright 2018, RajendraMayavan
 */
#include "PID.hpp"

double PID::computeVelocity(double targetSetpoint, double velocity) {
    // Calculates the error to be corrected
    double error = targetSetpoint - velocity;
    const double dt = 0.2;
    // Calculates the output velocity using PID constants
    double output = error * Kp + (error/dt) * Kd + (error*dt) *Ki;
    return output;
}

void PID::inputGains(const double inputKp,
                     const double inputKi, const double inputKd) {
    Kp = inputKp;
    Kd = inputKd;
    Ki = inputKi;
}

double PID::returnKp() {
    return Kp;
}

double PID::returnKi() {
    return Ki;
}

double PID::returnKd() {
    return Kd;
}
