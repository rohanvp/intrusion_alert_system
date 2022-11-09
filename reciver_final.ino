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
  //Read from HC-12 and send to serial monitor
  if(mySerial.available() > 1){
    String input = mySerial.readString();
    int a=input.toInt();
    Serial.println(a);
    //1234 is just any message that is received from receiver     
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
