# MPU6050 I2C Library for Raspberry Pi Pico

This repository contains a simple C++ library to interface MPU6050 sensor via I2C with Raspberry Pi Pico.

## Usage
- Connect MPU6050 SDA → GPIO8, SCL → GPIO9
- Build and flash main.cpp using the Raspberry Pi Pico SDK
- Serial output shows accelerometer X, Y, Z values

## Files
- MPU6050.h / MPU6050.cpp : Library code
- main.cpp : Example usage
