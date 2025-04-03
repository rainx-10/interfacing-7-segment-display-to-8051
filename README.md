# Interfacing 7 Segment Display to 8051 using Atmel AT89C51ED2

## Project Overview
This project focuses on interfacing a 7-segment display with the Atmel AT89C51ED2 microcontroller. The goal is to display digits from 0 to 9 in sequence using a programmed microcontroller.

Authors
-------

-   **Rainer Gomes (17ECE1016)**
-   **Shounak Karapurkar (17ECE1019)**

## Features
- Uses AT89C51ED2 microcontroller to control the display.
- Displays digits 0-9 sequentially.
- Implements a simple delay-based timing mechanism.
- Written in embedded C for Keil uVision.

## Components Used
- **Microcontroller:** Atmel AT89C51ED2
- **Display:** Common Cathode 7-Segment Display
- **Power:** 12V DC battery or adapter
- **Supporting Components:** Resistors (10KΩ, 330Ω, 1KΩ, 470Ω), capacitors (33pF, 10μF), 11.0592 MHz crystal, connecting wires

## Circuit and Working Principle
The AT89C51ED2 microcontroller sends appropriate signals to the 7-segment display to show numbers. The display is connected to the microcontroller's PORT2, and each segment is controlled via bit patterns.

### Algorithm
1. Initialize the segment hex values in an array.
2. Assign values to PORT2 with a delay.
3. Repeat the process for digits 0-9 in sequence.

## How to Compile and Run
1. Load the code into Keil uVision.
2. Compile and generate the hex file.
3. Upload the hex file to the microcontroller using Atmel FLIP.
4. Connect the circuit and power it up.
5. Observe the digits appearing on the 7-segment display.

## Applications
- Digital counters
- Electronic measurement devices
- Display systems in embedded applications

## References
- [7-Segment Display Interfacing](https://www.electronicshub.org/interfacing-7-segment-display-8051/)
- [Keil uVision Documentation](http://www.keil.com/dd/chip/3599.htm)
