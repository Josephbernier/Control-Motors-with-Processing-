#include <Motor.h> //include motor library 
Motor Alpha(8,12,9); //create an object which is a firt motor 
Motor Beta(7,6,11);  // second Motor 
String val;  // variable to stock data received  from processing 
void setup() {
  Alpha.begin(); // begin the motor 1 
  Beta.begin() ;  // begin the motor 2 
   
  Serial.begin(9600); 

}

void loop() {
 while(Serial.available()) {
   val=Serial.read(); //read data 
   delay(40); 
 }
 if (val=="R") 
 {
Alpha.forward(100); // turn on the first motor to forward direction for  100 per cent 
 }
 else if (val=="S") 
 {
  Alpha.rearward(100);  // turn on the first motor to rearward direction for 100 per cent 
 }
 if (val=="H")  // turn on the second motor in the forward direction 
 {
  Beta.forward(100); 
  
 }
 else if (val=="L") 
 {
  Beta.rearward(100); //turn on the second motor in the rearward direction 
 }
 else {
Alpha.turnOff(); // turn off the first motor 
Beta.turnOff(); // turn off the second motor 
 }
 }

