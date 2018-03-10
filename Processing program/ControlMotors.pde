import controlP5.*; 
import processing.serial.*; 
Serial port; 
ControlP5 cp5; 
PFont font ; 
void setup() {
  size(300,300); 
 // String portName=Serial.list()[0]; 
  cp5=new ControlP5(this); 
 // port=new Serial(this,portName,9600); 
  font=createFont("calibri light bold ",20);
  cp5.addButton("RUN1") .setPosition(170,50).setSize(100,80).setFont(font);
  cp5.addButton("STOP1").setPosition(170,150).setSize(100,80).setFont(font);
  cp5.addButton("RUN") .setPosition(30,50).setSize(100,80).setFont(font);
  cp5.addButton("STOP").setPosition(30,150).setSize(100,80).setFont(font);
      
  
  
}

void draw() {
 background(47,0,47); 
 fill(0,255,0); 
 textFont(font);
 text("MOTOR CONTROL",70, 30); 
   
}

void RUN1() {
 // port.write('H'); 
}

void STOP1() {
// port.write('L');  
}
void RUN() {
// port.write('R'); 
}
void STOP() {
// port.write('S');  
}