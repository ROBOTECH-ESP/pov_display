/*Title: POV_Display prototype sketch
  Author: Alioune Woula Ndiaye
  Company : ROBOTECH-ESP
  Date:31/03/2018
  Version:1.1
  Description: Main program for the POV Display*/

#include "new_pov_lib.h"

SoftwareSerial bluetooth (BLUETOOTH_RX, BLUETOOTH_TX);
String TXT = "TEST";


void setup() {
  for (int i = 0; i < CHAR_HEIGHT; i++)
    pinMode(LEDpins[i], OUTPUT);

  pinMode(BLUE_DISPLAY, OUTPUT);
  pinMode(RED_DISPLAY, OUTPUT);

  pinMode(HALL_SENSOR, INPUT);
  //Serial.begin(9600);
  //bluetooth.begin(9600);
  digitalWrite(BLUE_DISPLAY, HIGH);
  //digitalWrite(RED_DISPLAY, HIGH);
}

void loop() {
  scrollingDisplayLeftBis();
  delay(1000);
}


