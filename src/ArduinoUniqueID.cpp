// Copyright © Luiz Henrique Cassettari. All rights reserved.
// Licensed under the MIT license.

#include "ArduinoUniqueID.h"

ArduinoUniqueID::ArduinoUniqueID()
{
	id[0] = boot_signature_byte_get(0x000E);
	id[1] = boot_signature_byte_get(0x0011);
	id[2] = boot_signature_byte_get(0x0010);
	id[3] = boot_signature_byte_get(0x0013);
	id[4] = boot_signature_byte_get(0x0012);
	id[5] = boot_signature_byte_get(0x0015);
	id[6] = boot_signature_byte_get(0x0016);
	id[7] = boot_signature_byte_get(0x0017);
}

void ArduinoUniqueID::dump(Stream &s)
{
	char buff[64];
	snprintf(buff, sizeof buff, "Unique Serial ID: %02X %02X %02X %02X %02X %02X %02X %02X", id[0], id[1], id[2], id[3], id[4], id[5], id[6], id[7]);
	s.println(buff);
}

ArduinoUniqueID _UniqueID;
