#include <Servo.h>

Servo servo1;
Servo servo2;
int potPin = A0;
int emgPin = A1;
int emgThreshold = 600;
int emgState = 0;
int pos = 0;
int prevPos = 90; 
bool reverseServo2 = false;

void setup() {
  
  servo1.attach(9);
  servo2.attach(10);
  pinMode(emgPin, INPUT);
}

void loop()
{
  
  pos = 180 - map(analogRead(potPin), 0, 1023, 65, 112);


  int emgValue = analogRead(emgPin);
 if (emgValue > emgThreshold && emgState == 0) 
 {
  
  servo1.write(65);
  servo2.write(95);
  prevPos = pos;
  emgState = 1;
  delay(1000); 
} 
else if (emgValue < emgThreshold && emgState == 1) 
{
   
    servo1.write(prevPos);
    servo2.write(prevPos);
    emgState = 0;
  } 
 else 
 {
    
    servo1.write(pos);
    if (reverseServo2) 
    {
      servo2.write(180 - pos);
    } 
    else 
    {
      servo2.write(pos);
    }
  }
  
  delay(15); 
}

