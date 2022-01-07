# ArduinoUniqueID

This Library gets the Unique ID / Manufacture Serial Number from the Atmel AVR, SAM, SAMD, STM32, and ESP Microcontroller.

[![Compile Sketch](https://github.com/ricaun/ArduinoUniqueID/actions/workflows/Compile Sketch.yml/badge.svg)](https://github.com/ricaun/ArduinoUniqueID/actions)


# Microcontrollers

ArduinoUniqueID supports the [Microcontrollers](MCU.md).

* Atmel AVR - [`Not Unique Disclaimer`](MCU.md#Disclaimer)
* Atmel SAM ARM
* Atmel SAMD ARM
* STM32
* Espressif ESP
* Teensy
* Raspberry Pi Pico - RP2040

# Installation

* Install the library by [Using the Library Manager](https://www.arduino.cc/en/Guide/Libraries#toc3)
* **OR** by [Importing the .zip library](https://www.arduino.cc/en/Guide/Libraries#toc4) using either the [master](https://github.com/ricaun/ArduinoUniqueID/archive/1.2.0.zip) or one of the [releases](https://github.com/ricaun/ArduinoUniqueID/releases) ZIP files.

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
