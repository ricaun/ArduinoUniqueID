// ArduinoUniqueID.ino

#include <ArduinoUniqueID.h>;

void setup()
{
	Serial.begin(115200);
	UniqueIDdump(Serial);
	Serial.println();
	for (size_t i = 0; i < 8; i++)
	{
		Serial.print(UniqueID[i]);
		Serial.print(" ");
	}
}

void loop()
{
}