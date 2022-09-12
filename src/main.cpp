#include <Arduino.h>

#define LED 2

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  Serial.println("\n\nHello World!");

  Serial.println("\nAniket Chopra\n000814313");

  Serial.println("ESP8266 Chip ID:- ");
  Serial.print(ESP.getChipId());

  Serial.println("Flash Chip ID ");
  Serial.println(ESP.getFlashChipId());


  
}



void loop() {
  
  Serial.println("Time since Run:- ");
  Serial.print(millis());
  delay(2000);


}