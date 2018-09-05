#include "Arduino.h"
#include "timer.h"
//**************************************************************
Timer::Timer(unsigned long Time) {
  t = Time;
}
//**************************************************************
bool Timer::get_Timerend(){ 
  if (millis() - previousMillis >= t) {
    return true;
  }
  else {
    return false;
  }
}
//**************************************************************
void Timer::set_Timerstart()
{ previousMillis = millis();
  get_Timerend();
}







