//
// ArduinoUniqueIDSerialUSB.ino
//
// Example shows the UniqueID on the SerialUSB Monitor.
//

#include <ArduinoUniqueID.h>

void setup()
{
	SerialUSB.begin(115200);
  while (!SerialUSB);
	UniqueIDdump(SerialUSB);
  UniqueID8dump(SerialUSB);
}

void loop()
{
}