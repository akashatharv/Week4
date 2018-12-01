#include "level.hpp"
#include "iostream"


levelAlarm::levelAlarm() {
  level =0.00;
  alarm = 0;
  thresold = 85.00;
  levelMax = 100.00;
}

 void levelAlarm::levelControl() {

 	PID::inputGains(.5, .1, .1);
 	while (level < thresold){

 	level = PID::computeVelocity(thresold, level);
 	}
 	alarm = 1;

 	if(alarm == 1)
 	  std::cout<< "Tank almost full";
 }

 int levelAlarm::returnAlarm(){
   return alarm;
 }

 levelAlarm::~levelAlarm(){}
