# ArduinoUniqueID

This Library gets the Unique Serial ID from the AVR Microcontroller.

## Unique Serial ID - Hidden Serial Number

The datasheet of the Atmega328pb chip has a section 'Serial Number' how explain every chip have a unique device ID with 10 bytes. <br/>

The datasheet of the Atmega328p chip does not say anything about the serial number, but I tested using the same Z-pointer Address on the datasheet of the Atmega328pb. <br/>

Apparently, the chip Atmega328p have a hidden serial number with 9 bytes, and others AVR Microcontroller maybe too, like the table below. <br/>

| Z-pointer Address | Atmega328pb | Atmega328p | UniqueID |
| :-------: | :------: | :------: | :------:|
| 0x000E | Byte 0 | Byte 0 | - |
| 0x000F | Byte 1 | Byte 1 | Byte 0 |
| 0x0010 | Byte 2 | Byte 2 | Byte 1 |
| 0x0011 | Byte 3 | Byte 3 | Byte 2 |
| 0x0012 | Byte 4 | Byte 4 | Byte 3 |
| 0x0013 | Byte 5 | Byte 5 | Byte 4 |
| 0x0014 | Byte 6 | - | - |
| 0x0015 | Byte 7 | Byte 6 | Byte 5 |
| 0x0016 | Byte 8 | Byte 7 | Byte 6 |
| 0x0017 | Byte 9 | Byte 8 | Byte 7 |

This library selects the last 8 bytes of the Serial Number. <br/>

## Dependencies

This library only works on AVR Microcontroller.

## Tested Microcontroller

* Atmega328pb - 10 bytes
* Atmega328p - 9 bytes
* Atmega2560 - 9 bytes

## Installation

* Install the library by [Importing the .zip library](https://www.arduino.cc/en/Guide/Libraries#toc4) using either the [master](https://github.com/ricaun/ArduinoUniqueID/archive/master.zip) or one of the [releases](https://github.com/ricaun/ArduinoUniqueID/releases) ZIP files.

## Examples

The library comes with [examples](examples). After installing the library you need to restart the Arduino IDE before they can be found under **File > Examples > ArduinoUniqueID**.

---

# Reference

## Include Library

```c
#include <ArduinoUniqueID.h>
```

### Variable: UniqueID

UniqueID has 8 bytes array of the Unique Serial ID.

```c
for(size_t i = 0; i < 8; i++)
  Serial.println(UniqueID[i], HEX);
```

### Method: UniqueIDdump

Print the hexadecimal bytes of the Unique Serial ID on the Stream.

```c
void UniqueIDdump(Stream);
```

Do you like this library? Please [star this project on GitHub](https://github.com/ricaun/ArduinoUniqueID/stargazers)!
