# Transtibial Myo-Electric Prosthesis

## Project Overview

Many diabetic patients face the challenge of amputations, leaving them physically impaired. While modern prosthetics offer assistance, static prosthetics can be inefficient, and bionic limbs are often prohibitively expensive. Our project, provides an alternative solution by harnessing propulsion technology to create a cost-efficient, dynamic prosthetic option.

Our rendition utilizes muscle signals produced by the body to translate them into mechanical movement, offering a more efficient and natural experience for users. Our goal is to enable patients to regain a sense of normalcy and functionality, as if they never lost their limb.

The core of our device consists of minimal technology, prioritizing simplicity while maintaining effectiveness. It is controlled by muscle signals and powered by an Arduino UNO and Olimex EMG shield. The prosthetic incorporates a linear actuator that exerts force along the ankle, supplemented by various mechanical components to ensure optimal performance.

Built through 3D modeling and printing, our project emphasizes cost-efficiency, reliability, and accessibility to benefit individuals who have been impaired.

## Repository Contents

### Prosthetic-Leg-Control-System-with-Arduino

This repository contains the code and documentation for the Prosthetic Leg Control System with Arduino. Here's a brief overview of the features:

- **Program Overview**: 
  - Allows user control through a potentiometer to adjust the position of the servos.
  - Monitors EMG sensor input for activation of the override mode.
  - Activates an "override" mode when EMG signals exceed a threshold, moving servos to a predetermined position.
  - Returns the prosthetic leg to its previous position when the EMG signal drops below the threshold.
  - Maps potentiometer readings to servo positions for user control.
  - Smooths servo movements using a delay for improved performance.

