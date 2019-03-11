// Copyright © Luiz Henrique Cassettari. All rights reserved.
// Licensed under the MIT license.

#include "ArduinoUniqueID.h"

ArduinoUniqueID::ArduinoUniqueID()
{
	for(size_t i = 0; i < UniqueIDsize; i++)
	{
		id[i] = boot_signature_byte_get(0x0E + i + (UniqueIDsize == 9 && i > 5 ? 1 : 0));
	}
}

ArduinoUniqueID _UniqueID;
