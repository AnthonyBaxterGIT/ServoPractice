#include <Arduino.h>
#include <Servo.h>

//create servo object to control a servo.
Servo servo_1;

//Initialize variable to store the servo positions with the initial value of ZERO.
int servo1Pos=0;

void setup() {
  //Initialize Serial with baudrate of 9600.
  Serial.begin(9600);
  //Attach Servo object on desired pin# used to pulse degree value.
  servo_1.attach(3);
}

void loop() {
  //Using two for loops to control degree increment and decrement.

  //First for loop works by saying when the Servos Position is = 0° and less than 180° then increment the ServoPosition by 1. 
  for (servo1Pos = 0; servo1Pos <=180; servo1Pos += 1) {
    servo_1.write(servo1Pos);
    delay(15);
    //Print the ServoPosition to serial monitor
    Serial.println(servo1Pos);
  }
  //Second for loop works by saying when the Servos Position is = 180° and more than 0° then decrement the ServoPosition by 1. 
  for (servo1Pos = 180; servo1Pos >=0; servo1Pos -= 1) {
    servo_1.write(servo1Pos);
    delay(15);
    //Print the ServoPosition to serial monitor
    Serial.println(servo1Pos);
  }
}