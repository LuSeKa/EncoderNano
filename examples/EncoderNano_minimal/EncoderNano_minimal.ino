/*
 * Wiring
 * Power the encoder vom 5V and GND
 * Encoder channel A --> Arduino Nano D2
 * Encoder channel B --> Arduino Nano D3
 */

#include "EncoderNano.h"
EncoderNano encoder;
// Wrappers for interrupt service routines
void encoderCount_1() {
  encoder.encoderCount_1();
}
void encoderCount_2() {
  encoder.encoderCount_2();
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  // setup of interrupt service routines
  attachInterrupt(digitalPinToInterrupt(ENCODERINTPIN_1), encoderCount_1, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENCODERINTPIN_2), encoderCount_2, CHANGE);
}

void loop() {
  // put your main code here, to run repeatedly:
  // print encoder count periodically
  Serial.println(encoder.getCount());
  delay(20);
}
