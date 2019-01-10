// Copyright © Luiz Henrique Cassettari. All rights reserved.
// Licensed under the MIT license.

#ifndef _ARDUINO_UNIQUE_ID_H_
#define _ARDUINO_UNIQUE_ID_H_

#define UniqueID _UniqueID.id
#define UniqueIDdump(stream)                \
	{                                       \
		stream.print("Serial Unique ID: "); \
		for (size_t i = 0; i < 8; i++)      \
		{                                   \
			if (UniqueID[i] < 0x10)         \
				stream.print("0");          \
			stream.print(UniqueID[i], HEX); \
			stream.print(" ");              \
		}                                   \
		stream.println();                   \
	}

#include <Arduino.h>

#if __AVR_ARCH__
#include <avr/boot.h>
#else
#error "ArduinoUniqueID only works on AVR Architecture"
#endif

class ArduinoUniqueID
{
  public:
	ArduinoUniqueID();
	uint8_t id[8];
};

extern ArduinoUniqueID _UniqueID;

#endif
