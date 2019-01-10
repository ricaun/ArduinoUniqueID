// Copyright © Luiz Henrique Cassettari. All rights reserved.
// Licensed under the MIT license.

#include "ArduinoUniqueID.h"

ArduinoUniqueID::ArduinoUniqueID()
{
	for (size_t i = 0; i < 5; i++)
	{
		id[i] = boot_signature_byte_get(0x0F + i);
	}
	for (size_t i = 0; i < 3; i++)
	{
		id[i + 5] = boot_signature_byte_get(0x15 + i);
	}
}

ArduinoUniqueID _UniqueID;
