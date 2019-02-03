#include "Arduino.h"
#include "EncoderNano.h"

EncoderNano::EncoderNano()
{
	counter = 0;
}

long EncoderNano::getCount()
{
	return EncoderNano::counter;
}
// interrupt routines that increment or decrement the counters according to the direction of rotation
void EncoderNano::encoderCount_1()
{
  EncoderNano::counter += ((digitalRead(ENCODERINTPIN_1)<<1) - 1) * ((digitalRead(ENCODERINTPIN_2)<<1) - 1); // add -1 or 1 to counter, depending on the state of dirPin1 
}

void EncoderNano::encoderCount_2()
{
  EncoderNano::counter -= ((digitalRead(ENCODERINTPIN_1)<<1) - 1) * ((digitalRead(ENCODERINTPIN_2)<<1) - 1); // add -1 or 1 to counter, depending on the state of dirPin1 
}
