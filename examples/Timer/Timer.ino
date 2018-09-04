#include "timer.h"

//****************Timer name mit wert in ms definieren*******************************
Timer myTimer1(5000);
Timer myTimer2(10000);
Timer myTimer3(20000);

void setup() {

  
Serial.begin(9600);


Serial.println("programm gestartet");

//myTimer1.set_Timerstart();   //Timer starten
//myTimer2.set_Timerstart();
//myTimer3.set_Timerstart();

}

void loop() {
  

if (myTimer1.get_Timerend()==true){    //abfrage Timer ende
   Serial.println("Timer1 end");
   myTimer1.set_Timerstart();          //Timer starten
}


if (myTimer2.get_Timerend()==true){
   Serial.println("Timer2 end");
   myTimer2.set_Timerstart();
}

if (myTimer3.get_Timerend()==true){
   Serial.println("Timer3 end");
   myTimer3.set_Timerstart();
}



}
