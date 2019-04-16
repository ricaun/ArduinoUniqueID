// Copyright © Luiz Henrique Cassettari. All rights reserved.
// Licensed under the MIT license.

#include "ArduinoUniqueID.h"

ArduinoUniqueID::ArduinoUniqueID()
{
#if defined(ARDUINO_ARCH_AVR)
	for (size_t i = 0; i < UniqueIDsize; i++)
	{
		id[i] = boot_signature_byte_get(0x0E + i + (UniqueIDsize == 9 && i > 5 ? 1 : 0));
	}
#elif defined(ARDUINO_ARCH_ESP8266)
	uint32_t chipid = ESP.getChipId();
	id[0] = 0;
	id[1] = 0;
	id[2] = 0;
	id[3] = 0;
	id[4] = chipid >> 24;
	id[5] = chipid >> 16;
	id[6] = chipid >> 8;
	id[7] = chipid;

#elif defined(ARDUINO_ARCH_ESP32)
	uint64_t chipid = ESP.getEfuseMac();
	id[0] = 0;
	id[1] = 0;
	id[2] = chipid >> 40;
	id[3] = chipid >> 32;
	id[4] = chipid >> 24;
	id[5] = chipid >> 16;
	id[6] = chipid >> 8;
	id[7] = chipid;
#endif
}

ArduinoUniqueID _UniqueID;
