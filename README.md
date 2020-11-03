# Solar Powered Wireless Intrusion Alert System
  The project is usefull for the agricultural sector as a whole.Its design can be implemented on a small farm by an average farmer or by a well do to a farmer with acres and acres of land.Indeed the later would cost more to implement and maintain than the former but the purpose will be met. The project will give buffer time to the farmer to react and deal with an intrusion within his farm.There will be LED lights at the fence so as to make the animal aware of the human presence in the area but also taking care that the animal is not harmed but temporarily causing a stun so as to just scare the animal away from the plantation.

  The project can also be used by the forest officials or by the people living on the border area separating the natural jungle from the human habitation Many a times herds of animals wander off into the human habitat causing the destruction of farm property.If such a system is implemented in such a scenario the farms further from the jungle might be saved and destruction might be reduced as well people will become aware of such an intrusion.

## About the System:
- The system is a Intrusion Detection and Alert System which works wirelessly. The system will work best in area with negligible or lowest network connectivity(due to use of HC12 RF Transciver)
- 

## Steps to be followed:
1. Create an account in [Thingspeak](https://thingspeak.com/login) or [Sign In](https://thingspeak.com/login) if already created
2. Create and new or Configure existing channel.[Refer this](https://in.mathworks.com/help/thingspeak/collect-data-in-a-new-channel.html#bu4b1yc) 
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
