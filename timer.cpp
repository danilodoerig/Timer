#include "Arduino.h"
#include "timer.h"
//**************************************************************
Timer::Timer(unsigned long Time) {
  t = Time;
}
//**************************************************************
bool Timer::get_Timerend() {
  return (millis() - previousMillis >= t);
}
//**************************************************************
void Timer::set_Timerstart(){ 
   previousMillis = millis();
}






