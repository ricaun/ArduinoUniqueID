# ArduinoUniqueID

This Library gets the Unique Serial ID from the AVR Microcontroller and ESP Microcontroller.

# AVR Microcontroller

## Unique Serial ID - Hidden Serial Number

The datasheet of the Atmega328pb chip has a section 'Serial Number' how explain every chip have a unique device ID with 10 bytes. <br/>

The datasheet of the Atmega328p chip does not say anything about the serial number, but I tested using the same Z-pointer Address on the datasheet of the Atmega328pb. <br/>

Apparently, the chip Atmega328p have a hidden serial number with 9 bytes, and others AVR Microcontroller maybe too, like the table below. <br/>

| Z-pointer Address | Atmega328pb | Atmega328p |
| :-------: | :------: | :------:|
| 0x000E | Byte 0 | Byte 0 |
| 0x000F | Byte 1 | Byte 1 |
| 0x0010 | Byte 2 | Byte 2 |
| 0x0011 | Byte 3 | Byte 3 |
| 0x0012 | Byte 4 | Byte 4 |
| 0x0013 | Byte 5 | Byte 5 |
| 0x0014 | Byte 6 | - |
| 0x0015 | Byte 7 | Byte 6 |
| 0x0016 | Byte 8 | Byte 7 |
| 0x0017 | Byte 9 | Byte 8 |

## Tested Microcontroller

* Atmega328pb - 10 bytes
* Atmega328p - 9 bytes
* Atmega2560 - 9 bytes
* Attiny85 - 9 bytes

# ESP Microcontroller

ESP microcontroller has basically two versions, ESP8266 and ESP32, each one has a specific function to request the chip id. <br/>

* ESP8266 - ESP.getChipId() - 4 bytes
* ESP32 - ESP.getEfuseMac() - 6 bytes

| UniqueID | ESP8266 | ESP32 |
| :-------: | :------: | :------:|
| Byte 0| Byte 0 | Byte 5 |
| Byte 1| Byte 1 | Byte 4 |
| Byte 2| Byte 2 | Byte 3 |
| Byte 3| Byte 3 | Byte 2 |
| Byte 4| - | Byte 1 |
| Byte 5| - | Byte 0 |

To make the variable UniqueID8 to work propably the library uses the default bytes to 0x00. <br/>

| UniqueID8 | ESP8266 | ESP32 |
| :-------: | :------: | :------:|
| Byte 0| 0x00 | 0x00 |
| Byte 1| 0x00 | 0x00 |
| Byte 2| 0x00 | Byte 5 |
| Byte 3| 0x00 | Byte 4 |
| Byte 4| Byte 0 | Byte 3 |
| Byte 5| Byte 1 | Byte 2 |
| Byte 6| Byte 2 | Byte 1 |
| Byte 7| Byte 3 | Byte 0 |

## Tested Microcontroller

* ESP8266 - 4 bytes
* ESP32 - 6 bytes

## Dependencies

This library only supports AVR Microcontroller and ESP Microcontroller.

## Installation

* Install the library by [Using the Library Manager](https://www.arduino.cc/en/Guide/Libraries#toc3)
* **OR** by [Importing the .zip library](https://www.arduino.cc/en/Guide/Libraries#toc4) using either the [master](https://github.com/ricaun/ArduinoUniqueID/archive/1.0.5.zip) or one of the [releases](https://github.com/ricaun/ArduinoUniqueID/releases) ZIP files.

## Examples

The library comes with [examples](examples). After installing the library you need to restart the Arduino IDE before they can be found under **File > Examples > ArduinoUniqueID**.

---

# Reference

## Include Library

```c
#include <ArduinoUniqueID.h>
```

### Variable: UniqueID & UniqueIDsize

UniqueID has UniqueIDsize bytes array of the Unique Serial ID.

```c
for(size_t i = 0; i < UniqueIDsize; i++)
  Serial.println(UniqueID[i], HEX);
```

### Method: UniqueIDdump

Print the hexadecimal bytes of the Unique Serial ID on the Stream.

```c
void UniqueIDdump(Stream);
```

### Variable: UniqueID8

UniqueID8 has the last 8 bytes array of the Unique Serial ID.

```c
for(size_t i = 0; i < 8; i++)
  Serial.println(UniqueID8[i], HEX);
```

### Method: UniqueID8dump

Print the last eight hexadecimal bytes of the Unique Serial ID on the Stream.

```c
void UniqueID8dump(Stream);
```

Do you like this library? Please [star this project on GitHub](https://github.com/ricaun/ArduinoUniqueID/stargazers)!
