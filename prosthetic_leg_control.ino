#include <Servo.h>

Servo servo1;
Servo servo2;
int potPin = A0;
int emgPin = A1;
int emgThreshold = 600;
int emgState = 0;
int pos = 0;
int prevPos = 90; // Start at 90 degrees
bool reverseServo2 = false;

void setup() {
  servo1.attach(9);
  servo2.attach(10);
  pinMode(emgPin, INPUT);
}

void loop() {
  // Read the position of the potentiometer and map it to a servo position, reversing the direction
  pos = 180 - map(analogRead(potPin), 0, 1023, 65, 112);

  // Read the EMG signal and check if it exceeds the threshold
  int emgValue = analogRead(emgPin);
 if (emgValue > emgThreshold && emgState == 0) {
  // If the EMG signal exceeds the threshold and it's not already in override mode, set servo1 to 112 and servo2 to 68
  servo1.write(65);
  servo2.write(95);
  prevPos = pos;
  emgState = 1;
  delay(1000); // Wait for 1 second to complete the position change
} else if (emgValue < emgThreshold && emgState == 1) {
    // If the EMG signal drops below the threshold and it's currently in override mode, return the servos to the previous position
    servo1.write(prevPos);
    servo2.write(prevPos);
    emgState = 0;
  } else {
    // If the EMG signal is below the threshold and it's not in override mode, move the servos according to the potentiometer position, reversing the direction of servo2 if needed
    servo1.write(pos);
    if (reverseServo2) {
      servo2.write(180 - pos);
    } else {
      servo2.write(pos);
    }
  }
  
  delay(15); // add delay for the servo to move smoothly
}