#include <Arduino.h>


#include <SoftwareSerial.h>

/*Macros*/ 
#define PERSISTANCE_PERIOD 500 
#define TIMES_TO_REPEAT 3
#define CHAR_HEIGHT 8
#define CHAR_WIDTH 5
#define MIN_ASCII 32
#define MAX_ASCII 126
#define BLUE_DISPLAY 12
#define RED_DISPLAY A0
#define BLUETOOTH_TX 3
#define BLUETOOTH_RX 2
#define HALL_SENSOR 13

const int LEDpins[] = {11, 10, 9, 8, 7, 6, 5, 4}; //MSB->LSB

/*Prototypes*/
void displayFromCol (int column);
void printCharCol (char character , int column);
void scrollingDisplayLeft ();
void displayFromColBis (int column);
void scrollingDisplayLeftBis ();


