//I, Aniket CHopra, student number 000814313, certify that this material 
//is my original work. No other person's work has been used without
// due acknowledgment and I have not made my work available to anyone else.

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
  
  Serial.print("Time since Run:- ");
  Serial.println(millis());
  delay(2000);


}
