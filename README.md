# Solar Powered Wireless Intrusion Alert System
## Components Used:
- Arduino Mega 2560
- Ultrasonic Distance Sensor
- HC12 RF Transceiver
- LED and Resistor
- Solar Panel ( 3V 100mA )
- Buzzer
- USB Voltage Booster
- TP4056 Charging Module
- ICR 18650 Battery
## Implementation Steps:
1. Configure Arduino by connecting Vcc and Gnd Pins to BreadBoard and USB connector to computer.
2. Vcc and Gnd of UltraSonic Distance Sensor will be connected to Vcc and Gnd of Arduino. Echo Pin and Trigger Pin will be connected to Pins 8 and 9 of Arduino.
3. Take LED and connect the positive leg to 220 ohm resistor and connect that to pin 13 of Arduino and negative (short) leg of LED to Gnd for both sender and receiver.
4. Take Buzzer and connect positive leg to pin 13 along with LED and negative leg to Gnd for both sender and receiver.
5. Vcc and Gnd of ESP8266 will be connected to Vcc (3.3V) and Gnd of Arduino. Rx and Tx of esp8266 will be connected to pins 12 and 13 respectively. Also CH_EN and RESET pins should be connected to Vcc (3.3V).
6. Vcc and Gnd of HC12 will be connected to Vcc and Gnd of Arduino. Rx and Tx of HC12 will be connected to pins 10 and 11 respectively.
7. Flash code to Arduino via Arduino IDE and get OUTPUT.
8. Once Flashed, now power can be disconnected from the computer and connected to any external Power Source.
## Circuit Diagram
![Receiver](/receiver.JPG?raw=true)
