//
// ArduinoUniqueID.ino
//
// Example shows the UniqueID on the Serial Monitor.
//

#include <ArduinoUniqueID.h>

void setup()
{
	Serial.begin(115200);
	while(!Serial);
	UniqueIDdump(Serial);
	Serial.print("UniqueID: ");
	for (size_t i = 0; i < UniqueIDsize; i++)
	{
		if (UniqueID[i] < 0x10)
			Serial.print("0");
		Serial.print(UniqueID[i], HEX);
		Serial.print(" ");
	}
	Serial.println();
}

void loop()
{
}
