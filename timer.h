#ifndef Timer_h
#define Timer_h

#include "Arduino.h"
class Timer{

  private:
  unsigned long t;
  unsigned long previousMillis;
  unsigned long currentMillis;
  
  
  public:
  Timer(unsigned long  Time);
  bool get_Timerend();
  void set_Timerstart();
};
#endif

