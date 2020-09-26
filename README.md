# Solar Powered Wireless Intrusion Alert System
## Steps to be followed:
1. Create an account in [Thingspeak](https://thingspeak.com/login) or [Sign In](https://thingspeak.com/login) if already created
2. Create and [Configure](https://in.mathworks.com/help/thingspeak/collect-data-in-a-new-channel.html#bu4b1yc) new or existing channel.
3. Make connections as mentioned in the circuit diagram. For configuring with ESP8266 WIFI Module [Refer this.](https://www.electronicshub.org/connect-esp8266-to-thingspeak/)
4. Download the two .ino files
5. Run the files
### NOTE: HC12 RF Transciever and ESP8266 can be used together or independently.

## Components Used:
- Arduino Mega 2560
- Ultrasonic Distance Sensor
- HC12 RF Transceiver
- ESP8266 WIFI Module
- LED and Resistor
- Solar Panel ( 3V 100mA )
- Buzzer
- USB Voltage Booster
- TP4056 Charging Module
- ICR 18650 Battery
## Circuit Diagram
### Sender
![Sender](/sender.JPG?raw=true)
### Receiver
![Receiver](/receiver.JPG?raw=true)
## Solar Panel Connection(Sender Side):
![Solar](/solar.JPG?raw=true)
