# Prosthetic-Leg-Control-System-with-Arduino

**Program Overview**

* Allows user control through a potentiometer to adjust the position of the servos.

* EMG sensor input is monitored for activation of the override mode

* EMG signals exceeding a threshold activate an "override" mode
In override mode, servos move to a predetermined position.
    * Prosthetic leg returns to previous position when EMG signal drops below the threshold.

* Potentiometer reading is mapped to servo positions for user control

* Servo movements are smoothed using a delay for improved performance

