# DC Motor Direction Control System Using Arduino UNO

A simple embedded systems project developed using Arduino UNO, push buttons, and an L293D motor driver to control the rotational direction of a DC motor.

This project demonstrates real-time motor control where users can change the motor direction using dedicated push buttons. The system provides an excellent introduction to motor interfacing, digital input handling, and embedded control logic.

## Project Overview

The system uses an Arduino UNO to monitor two push buttons connected as digital inputs.

Based on the button pressed:

* Clockwise rotation is activated using Button 1.
* Anti-clockwise rotation is activated using Button 2.
* Motor direction is controlled through an L293D motor driver.

The project demonstrates practical implementation of:

* Embedded Systems Programming
* DC Motor Interfacing
* Digital Input Processing
* Motor Driver Applications
* Real-Time Control Systems

## Features

* Clockwise Motor Rotation Control
* Anti-Clockwise Motor Rotation Control
* Push Button-Based User Input
* L293D Motor Driver Interfacing
* Real-Time Direction Switching
* Arduino-Based Embedded Control

## Hardware Components

* Arduino UNO
* L293D Motor Driver IC
* DC Motor
* 2 Push Buttons
* Breadboard
* Jumper Wires
* Power Supply

## Software and Technologies

* Arduino IDE
* Embedded C
* Arduino Framework
* Digital I/O Programming
* Motor Driver Control Logic

## Working Principle

### Clockwise Rotation

When Button 1 is pressed:

* Arduino detects HIGH input from Button 1.
* Control signals are sent to the motor driver.
* Motor rotates in the clockwise direction.

### Anti-Clockwise Rotation

When Button 2 is pressed:

* Arduino detects HIGH input from Button 2.
* Motor driver receives reverse control signals.
* Motor rotates in the anti-clockwise direction.

## Folder Structure

DC-Motor-Direction-Control/

│

├── src/

│ └── dc_motor_clk_anti.ino

│

├── images/

│ ├── hardware_setup.jpg

│ ├── circuit_diagram.png

│ └── output_demo.jpg

│

└── README.md

## Functionalities Implemented

* Digital Input Reading
* Push Button Interfacing
* Motor Driver Interfacing
* Clockwise Motor Control
* Anti-Clockwise Motor Control
* Function-Based Programming
* Real-Time Direction Switching

## Applications

* Robotics Projects
* Conveyor Belt Systems
* Industrial Motor Control
* Home Automation Systems
* Educational Embedded Systems Projects
* Automation Learning Platforms

## Future Improvements

* PWM-Based Speed Control
* LCD Status Display
* Bluetooth Control
* IoT-Based Motor Monitoring
* Mobile App Integration
* Multiple Motor Control

## Author

LakkiReddy Thrisha

Electronics and Communication Engineering (ECE)

Embedded Systems | Arduino | IoT | Electronics Projects
