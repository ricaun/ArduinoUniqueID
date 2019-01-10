//
// ArduinoUniqueID.ino
//
// Example shows the Serial Unique ID on the Serial Monitor.
//

#include <ArduinoUniqueID.h>;

void setup()
{
	Serial.begin(115200);
	UniqueIDdump(Serial);
	Serial.print("Serial Unique ID: ");
	for (size_t i = 0; i < 8; i++)
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
