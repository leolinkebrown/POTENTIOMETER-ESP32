# Potentiometer ESP32

A simple program to print the value of a potentiometer using an ESP32

## General Information

### Wiring Diagram

https://github.com/leolinkebrown/POTENTIOMETER_ESP32/blob/5a8321156ee9b1c00ae3c24c599850b0bfcdc0ba/PXL_20230806_043046734.jpg

### Demonstration

https://github.com/leolinkebrown/POTENTIOMETER_ESP32/blob/7cb74f8ff582c5edf5caf072b59c7cb65383ab26/PXL_20230806_043126880~2.mp4

### Code Explanation

First, the variable of the pin for the potentiometer is set at D4, but this can be set to almost any pin, then, the variable for the potentiometer value is set to zero, this will be used to store the value of the potentiometer as it changes. After that, in the 'Setup' function, the baud is initiated as 9600 so that messages are able to be sent to the serial monitor with the potentiometer value, and a delay of 1000 milliseconds is set before values are sent to the serial monitor. Next, in the 'loop' function, the potentiometer value is set to what value is read from the potentiometer's pin, the potentiometer's value is printed to the serial monitor and a delay of 100 milliseconds is set between each time the value is printed to the serial monitor.

## Technologies

### Project is Created With:

- Arduino IDE 2.1.1
- 1x ESP32 Development Board 30 pins
- 1x Potentiometer
- 5x Wires
- 1x USB-C Cable

## Setup

- Download Arduino IDE
- Wire ESP32 board as shown in 'Wiring Diagram'
- Input code in 'POTENTIOMETERESP32.ino' under 'Main'
- Enjoy!
