# Arduino Bluetooth LED Control

## Project Overview
This project controls an LED connected to Arduino Uno digital pin 7 using an Android mobile phone and an HC-05 Bluetooth module.

## Components Required
- Arduino Uno
- HC-05 Bluetooth module
- LED
- 220-ohm resistor
- Jumper wires
- Android smartphone

## Circuit Connections

### HC-05 to Arduino Uno

| HC-05 Pin | Arduino Uno |
|---|---|
| VCC | 5V, if supported by the breakout board |
| GND | GND |
| TXD | Digital pin 10 |
| RXD | Digital pin 11 through a voltage divider |

### LED to Arduino Uno

| LED | Arduino Uno |
|---|---|
| Positive leg | Digital pin 7 through a 220-ohm resistor |
| Negative leg | GND |

**Safety:** Use a voltage divider on the Arduino TX connection to HC-05 RXD to reduce the signal voltage to approximately 3.3V.

## Working Principle
The HC-05 receives commands from the mobile phone and sends them to Arduino Uno.

- Send `1` to turn the LED ON.
- Send `0` to turn the LED OFF.

## Software Requirements
- Arduino IDE
- Serial Bluetooth Terminal for Android

## Future Improvements
- Create a custom Android app with ON/OFF buttons.
- Control multiple LEDs using Bluetooth.
- Add suitable driver circuits for controlling larger loads.
