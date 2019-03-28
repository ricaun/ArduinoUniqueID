// Copyright © Luiz Henrique Cassettari. All rights reserved.
// Licensed under the MIT license.

#ifndef _ARDUINO_UNIQUE_ID_H_
#define _ARDUINO_UNIQUE_ID_H_

#include <Arduino.h>

#if __AVR_ARCH__
#include <avr/boot.h>
#ifndef SIGRD
#define SIGRD 5
#endif
#else
#error "ArduinoUniqueID only works on AVR Architecture"
#endif

#if defined(__AVR_ATmega328PB__)
#define UniqueIDsize 10
#else
#define UniqueIDsize 9
#endif

#define UniqueID8 (_UniqueID.id + UniqueIDsize - 8)
#define UniqueID _UniqueID.id
#define UniqueIDdump(stream)                      \
	{                                             \
		stream.print("Serial Unique ID: ");       \
		for (size_t i = 0; i < UniqueIDsize; i++) \
		{                                         \
			if (UniqueID[i] < 0x10)               \
				stream.print("0");                \
			stream.print(UniqueID[i], HEX);       \
			stream.print(" ");                    \
		}                                         \
		stream.println();                         \
	}

class ArduinoUniqueID
{
  public:
	ArduinoUniqueID();
	uint8_t id[UniqueIDsize];
};

extern ArduinoUniqueID _UniqueID;

#endif
