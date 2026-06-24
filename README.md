# Smart Parking Slot Monitoring System

## Description

This project is a smart parking slot monitoring system developed using Arduino Uno, HC-SR04 ultrasonic sensor, 16x2 LCD display, red LED, and green LED.

The ultrasonic sensor measures the distance between the sensor and a vehicle. If the vehicle is detected within a fixed distance limit, the parking slot is marked as occupied and the red LED turns ON. If no vehicle is detected, the parking slot is marked as available and the green LED turns ON.

## Components Used

* Arduino Uno
* HC-SR04 Ultrasonic Sensor
* 16x2 LCD Display
* Red LED
* Green LED
* 220 Ohm Resistors
* Potentiometer
* Connecting Wires

## Software Used

* Arduino IDE
* Proteus Design Suite

## Working Principle

1. The HC-SR04 ultrasonic sensor continuously measures the distance from the parking slot.
2. Arduino Uno receives the distance value from the sensor.
3. If the distance is less than the set threshold value, the system identifies the slot as occupied.
4. The red LED turns ON and the LCD displays the occupied status.
5. If the distance is greater than the threshold value, the system identifies the slot as available.
6. The green LED turns ON and the LCD displays the available status.

## Project Files

* `code/smart_parking_slot.ino/smart_parking_slot.ino` - Arduino source code
* `circuits/smart_parking_slot.pdsprj` - Proteus circuit project
* `screenshots/circuit.png` - Circuit diagram screenshot
* `screenshots/output.png` - Simulation output screenshot
