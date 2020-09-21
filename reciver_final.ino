#include <SoftwareSerial.h>
SoftwareSerial mySerial(10,11); //RX, TX
int a=0;
void setup() 
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  mySerial.begin(9600);
}
void loop() 
{
  if(mySerial.available() > 1){//Read from HC-12 and send to serial monitor
    String input = mySerial.readString();
    //Serial.println(input);
    int a=input.toInt();
    Serial.println(a);
    if(a==1234)
    {
      digitalWrite(13,HIGH);
      delay(1000);
      digitalWrite(13,LOW);
    }
    else
    {
      digitalWrite(13,LOW);
    }
  }
  delay(20);
}
