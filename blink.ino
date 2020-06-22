/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This example code is in the public domain.
  AVH works OK on the Feather M0 (Power + load via Feather M0 native USB port)
  (1) Modified for Feather M0 Adalogger to flash green led on pin 8 as well
*/

// Pin 13 has an LED connected on most Arduino boards.
// Pin 11 has the LED on Teensy 2.0
// Pin 6  has the LED on Teensy++ 2.0
// Pin 13 has the LED on Teensy 3.0
// give it a name:
const int led_feather = 13; // pin that RED LED is attached to Adalogger M0
const int led_SD_card = 8; // pin that GREEN LED is attached to Adalogger SD card
const int led_pin5 = 5; // pin that BLUE LED is attached to digital pin 5

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led_feather, OUTPUT); //Required for M0
  pinMode(led_SD_card, OUTPUT); //Required for M0
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led_feather, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led_SD_card, HIGH);
  digitalWrite(led_pin5, HIGH);
  delay(1000);               // wait for a second
  digitalWrite(led_feather, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led_SD_card, LOW);
  digitalWrite(led_pin5, LOW);
  delay(1000);               // wait for a second
}
