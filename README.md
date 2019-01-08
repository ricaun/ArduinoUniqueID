# ArduinoUniqueID

This Library gets the Unique Serial ID from the AVR Microcontroller.

## Dependences

This library only works on AVR Microcontroller.

## Tested Microcontroller

* Atmega328p
* Atmega328pb
* Atmega2560

## Installation

* Install the library by [Importing the .zip library](https://www.arduino.cc/en/Guide/Libraries#toc4) using either the [master](https://github.com/ricaun/ArduinoUniqueID/archive/master.zip) or one of the [releases](https://github.com/ricaun/ArduinoUniqueID/releases) ZIP files.

## Examples

The library comes with [examples](examples). After installing the library you need to restart the Arduino IDE before they can be found under **File > Examples > ArduinoUniqueID**.

## Unique Serial ID - Hidden Serial Number

The datasheet of the Atmega328pb chip have a section 'Serial Number' how explain every chip have an unique device ID with 9 bytes.
The datasheet of the Atmega328p chip does not say anything about serial number, but i tested ussing the same logic on the datasheet of the Atmega328pb.
Apparently the chip Atmega328p have a hidden serial number, and others AVR Microcontroller maybe too.
This library select only 8 bytes of the 'Serial Number'.

### ArduinoUniqueID Reference

## Include Library

```c
#include <ArduinoUniqueID.h>
```

## Variable: `UniqueID`

UniqueID is a 8 bytes array of the Unique Serial ID.

```c
for(size_t i = 0; i < 8; i++)
		Serial.println(UniqueID[i], HEX);
```

## Method: `UniqueIDdump`

Print the hexadecimal bytes of the Unique Serial ID on the Stream.

```c
void UniqueIDdump(Stream);
```

---

Do you like this library? Please [star this project on GitHub](https://github.com/ricaun/ArduinoUniqueID/stargazers)!

