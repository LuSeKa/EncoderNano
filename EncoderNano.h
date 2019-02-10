#include "Arduino.h"

// these are hardware interrupt pins and specific for the different kinds of Arduinos
#define ENCODERINTPIN_1 2
#define ENCODERINTPIN_2 3

class EncoderNano
{
	public:
		EncoderNano();
		long getCount();
		void setCount(long pos);
		void encoderCount_1();
		void encoderCount_2();
		
	private:
		volatile long counter;
	};


// ADD THIS TO YOUR PROJECT CODE //
/*
 * Includes:
#include "EncoderNano.h"
 * Declarations:
EncoderNano encoder;
void encoderCount_1() {encoder.encoderCount_1();}
void encoderCount_2() {encoder.encoderCount_2();}
 * In the setup() routine:
attachInterrupt(digitalPinToInterrupt(ENCODERINTPIN_1), encoderCount_1, CHANGE);
attachInterrupt(digitalPinToInterrupt(ENCODERINTPIN_2), encoderCount_2, CHANGE);
*/

// now you can read with encoder.getCount()
