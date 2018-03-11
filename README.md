# Control-Motors-with-Processing-


* Project to control Motor using Motor Library and IHM Processing 
* Developed by Salim Khazem



It is a Project that allows you to control an Motor using Motor Library and interface Humans Machine (IHM), Processing in this case 

You must add the libraries to the Arduino libraries folder. 

To do this : you must copy the folder "Motor" paste them in the arduino libraries folder.
You will find Motor Library in this link https://github.com/salimkhazem/MotorLibrary

for the application in the Processing, it's just a simple application than allows you run and stop motors. 
In this case i used Two motors, so, you will find two Push Buttons in the application processing . 

Operation:

* To include the library you have to include the Motor library and this is done with this formula ( #include <Motor.h> )

* To create an instance: Motor object (pin1, pin2, pinPWM);

* For the assignment it is necessary to introduce: object.begin ();

* To run the motor in the forward direction: object.forward (speed_with_percentage);

* To run the motor in the reverse direction: object.rearward (speed_with_percentage);

* To stop the motor: object.turnOff ();


Contribution:

If you want contribute: 
* Fork the project 
* Add your branch 
* add your commits 
* Finally push your pull request

