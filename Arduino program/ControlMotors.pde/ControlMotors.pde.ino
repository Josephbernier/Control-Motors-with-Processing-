#include <Motor.h> 
Motor Alpha(8,12,9);
Motor Beta(7,6,11); 
String val;  
void setup() {
  Alpha.begin(); 
  Beta.begin() ; 
   
  Serial.begin(9600); // put your setup code here, to run once:

}

void loop() {
 while(Serial.available()) {
   val=Serial.read(); 
   delay(40); 
 }
 if (val=="R") 
 {
Alpha.forward(100); 
 }
 else if (val=="S") 
 {
  Alpha.rearward(100);  
 }
 if (val=="H") 
 {
  Beta.forward(100); 
  
 }
 else if (val=="L") 
 {
  Beta.rearward(100); 
 }
 else {
Alpha.turnOff(); 
Beta.turnOff(); 
 }
 }

 
