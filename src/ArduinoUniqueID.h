// Copyright © Luiz Henrique Cassettari. All rights reserved.
// Licensed under the MIT license.

#ifndef _ARDUINO_UNIQUE_ID_H_
#define _ARDUINO_UNIQUE_ID_H_

#define UniqueID _UniqueID.id
#define UniqueIDdump(p) _UniqueID.dump(p)

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
	void dump(Stream &s);
	uint8_t id[8];
};

extern ArduinoUniqueID _UniqueID;

#endif
