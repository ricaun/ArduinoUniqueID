//
// ArduinoUniqueID8.ino
//
// Example shows the last eight UniqueID on the Serial Monitor.
//

#include <ArduinoUniqueID.h>

void setup()
{
	Serial.begin(115200);
	UniqueID8dump(Serial);
	Serial.print("UniqueID: ");
	for (size_t i = 0; i < 8; i++)
	{
		if (UniqueID8[i] < 0x10)
			Serial.print("0");
		Serial.print(UniqueID8[i], HEX);
		Serial.print(" ");
	}
	Serial.println();
}

void loop()
{
}
