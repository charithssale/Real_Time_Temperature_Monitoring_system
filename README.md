# Real-Time Temperature Monitoring using Arduino, OpenPLC, and MATLAB

## Overview

This project implements a real-time temperature monitoring and control system using Arduino Uno, OpenPLC, and MATLAB.

The system acquires temperature data from a temperature sensor, processes it through Arduino, performs control operations using OpenPLC logic, and visualizes the collected data in MATLAB.

## Features

* Real-time temperature monitoring
* Start/Stop control using push buttons
* Temperature threshold detection
* LED status indication
* MATLAB-based data acquisition and visualization
* OpenPLC ladder logic integration
* Arduino serial communication

## Hardware Components

* Arduino Uno R3
* TMP35 Temperature Sensor
* Breadboard
* Push Buttons
* LEDs
* Resistors
* Jumper Wires

## Software Tools

* Arduino IDE
* OpenPLC Editor
* MATLAB

## System Architecture

The temperature sensor sends analog data to the Arduino Uno.

The Arduino:

* Reads temperature values
* Performs threshold checking
* Controls LED indicators
* Sends sensor data to MATLAB

MATLAB:

* Collects real-time sensor data
* Processes measurements
* Generates visualization graphs

OpenPLC:

* Implements industrial control logic
* Provides start/stop functionality through ladder logic

## Results

The system successfully demonstrates:

* Real-time temperature sensing
* Industrial-style control implementation
* MATLAB-based visualization
* Reliable hardware-software integration

## Future Improvements

* Remote monitoring dashboard
* IoT connectivity
* Predictive analytics
* Cloud data storage
* Advanced environmental sensors

## Author

Charith Sai Sathvik Ale
University of Alabama at Birmingham
EE427/527 Industrial Controls
