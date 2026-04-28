# Smart Waste Classifier

This project presents an automated waste segregation system that uses **Raspberry Pi**, **ESP32**, and **TensorFlow Lite** to detect waste type in real time and sort it into the correct bin. It was developed as a low-cost smart automation solution for improved waste management and smart city applications.

## Overview

Improper waste segregation is one of the major challenges in modern waste management. This project addresses that problem by combining image-based classification with sensor-based monitoring and automatic bin control.

The system captures an image of the waste using a camera connected to the Raspberry Pi, classifies it as biodegradable or non-biodegradable using a TensorFlow Lite model, and opens the corresponding bin lid using a servo motor. At the same time, the ESP32 monitors environmental parameters such as gas level, bin fill level, and GPS location.

## Objectives

- Detect waste type using camera-based image classification.
- Automatically open the correct bin lid using servo motors.
- Monitor methane gas level using an MQ-4 sensor.
- Measure bin fill level using an HC-SR04 ultrasonic sensor.
- Track location using a GPS module.
- Transmit live sensor data through Bluetooth or Wi-Fi.
- Build a portable and low-cost smart waste management system.

## Methodology

### 1. Waste Detection and Classification

The Raspberry Pi captures images of waste using a Pi Camera. The image is then preprocessed and passed to a TensorFlow Lite model trained to classify waste as biodegradable or non-biodegradable.

### 2. Automatic Sorting

Based on the classification result, the Raspberry Pi activates the corresponding servo motor to open the correct bin lid. This allows contactless and automated waste disposal.

### 3. Sensor Monitoring

The ESP32 continuously reads data from multiple sensors:

- HC-SR04 ultrasonic sensor for measuring bin fill level.
- MQ-4 gas sensor for detecting methane concentration.
- GPS module for tracking bin location.

### 4. Data Communication

The sensor readings are sent through Bluetooth and can also be displayed through a local Wi-Fi-based web interface. This makes the system useful for monitoring and remote access.

## Key Features

- Real-time waste classification using TensorFlow Lite.
- Automatic sorting into biodegradable and non-biodegradable bins.
- Gas detection using MQ-4 sensor.
- Fill-level monitoring using HC-SR04 sensor.
- GPS-based location tracking.
- Bluetooth and Wi-Fi communication support.
- Low-cost and scalable embedded system design.

## Hardware Used

- Raspberry Pi 4
- ESP32 microcontroller
- Pi Camera module
- HC-SR04 ultrasonic sensor
- MQ-4 gas sensor
- GPS module (Neo-6M)
- SG90 servo motors
- Power supply and connecting components

## Software Used

- Python
- TensorFlow Lite
- Arduino IDE
- Raspbian OS
- Thonny IDE
- OpenCV / PIL
- RPi.GPIO
- TinyGPS++

