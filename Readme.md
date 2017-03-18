# CAN Bus Logger / Playback Device with SD-card

The device can be used to log data from any CAN-bus based application: vehicle, automation, robotics, etc. The log is stored in comma separated text file (CSV) and each log entry (CAN-message) has a time stamp. It also has playback function, i.e. can play recorded file back onto a CAN bus, turning the device into a CAN bus simulator. The logger is an ideal solution for applications where small, cheap and simple device is needed to record CAN-bus activity without any additional hardware.

## Features

- The device has only one start/stop button, and all the settings are stored in configuration text file on SD card. No external PC or smartphone is required for logger operation.
- Bitrates up to 1 Mbps (any non-standard baud rate supported), supports CAN 2.0A (11-Bit ID) and CAN 2.0B (29-Bit ID).
- Optional message filtering based on ID mask matching.
- Selectable listen-only mode (without CAN bus acknowledge).
- Three LEDs for indication of logger status.
- Playback function with time accuracy of 3 ms.
- Open source and open hardware project.


## Specification

- Support for up to 32GB micro-SD cards (FAT32), for best results the UHS Speed Class 1 (U1) SD card recommended.
- Power supply voltage: from +5V to +20V DC.
- Dimensions: 48.26 x 20.85 mm (1.9 x 0.82 in).
- Microcontroller: STM32F405RGT6 (ARM Cortex M4).

## Where to buy ready made device

- [My Tindie store](https://www.tindie.com/products/akpc806a/can-bus-logger-with-sd-card/)
- [eBay](http://www.ebay.com/itm/CAN-Bus-Logger-with-SD-card/222408103840)

[![N|Solid](http://i.ebayimg.com/images/g/-foAAOSwYXVYy2zs/s-l1600.jpg)