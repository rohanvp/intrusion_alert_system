#include <SoftwareSerial.h>
SoftwareSerial mySerial1(10,11); //RX, TX
SoftwareSerial mySerial2(12,13); //RX, TX
int led = 3;
const int trigPin = 9;
const int echoPin = 8;
long duration;
int distance;
#define SSID " " // type in your SSID
#define PASS " " // type in your password
#define IP "api.thingspeak.com"//Thingspeak IP Address,need not be changed

String GET1 = "GET /update?key=###&field1=";//add your thingspeak api key in place of ###
void setup() {
  
  Serial.begin(9600);
  mySerial1.begin(9600);
  mySerial2.begin(115200);
  
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
    pinMode(echoPin, INPUT); // Sets the echoPin as an Input
    pinMode(led, OUTPUT);

    mySerial2.println("AT"); //Start of AT commands
  delay(5000);
  if(mySerial2.find("OK"))
  {
    mySerial2.println("OK"); //Connection between Arduino & ESP 8266 is fine

    connectWiFi(); //Connect ESP 8266 with Wifi network

    delay(1000);
    mySerial2.println("WiFi Connected");
  }
  else
  {
    mySerial2.println("error");
  }
}

void loop() {
  delay(1000);
  digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance= duration*0.034/2;
    Serial.println(distance);

    int value1=1; //Read LDR 1
    String lux1= String (value1); // converting Integer value to String

  
  if(distance<20)
  { mySerial1.println(1234);
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);

    String cmd = "AT+CIPSTART=\"TCP\",\"";//set up TCP connection
  cmd += IP;
  cmd += "\",80";
  mySerial2.println(cmd);
  delay(1000);
  if(mySerial2.find("Error"))
  {
      mySerial2.println("AT+CIPSTART Error");
      return;
  }
  String  cmd1 = GET1;
  cmd1 += lux1;
  cmd1 += "\r\n\r\n";
  mySerial2.print("AT+CIPSEND=");//send TCP/IP data
  String v1="51";
  mySerial2.println(v1);
  delay(5000);
  mySerial2.print(cmd1);
  mySerial2.print("AT+CIPCLOSE");
}
  else
  {
    digitalWrite(led,LOW);
  }
 // delay(3000);        // delay in between reads for stability
}
int connectWiFi()
{
  mySerial2.println("AT+CWMODE=1");// Define the wifi mode (3)
  delay(2000);
  String cmd="AT+CWJAP=\"";// start to define the wifi network access point
  cmd+=SSID; //Add the wifi ID to the AT command
  cmd+="\",\"";
  cmd+=PASS; //Add the wifi password to the AT command
  cmd+="\"";
  mySerial2.println(cmd); //Serial Monitor print
}
