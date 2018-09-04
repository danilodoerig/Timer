#include "Arduino.h"
#include "timer.h"
//********************************************************************************
Timer::Timer(unsigned long Time){
 t=Time;}
//********************************************************************************
bool Timer::get_Timerend(){
 currentMillis = millis();
 if(currentMillis - previousMillis >= t) {
    is_Timer_end=true;
  }
  else{is_Timer_end=false;}
return is_Timer_end;
}
//********************************************************************************
void Timer::set_Timerstart()
 {previousMillis = currentMillis;
	get_Timerend();

}







