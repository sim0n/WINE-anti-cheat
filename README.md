## What is WINE anti-cheat

WINE is an experimental Ring3 anti-cheat made to easily integrate into programs.

## Features
* Artificial clicking detection
* Easy to integrate detections

## Planned features
* WEService, WEPoppy (driver), WEClient, WEServer
* Memory enumeration
* Memory anomaly checks
* Pattern scan checks
* Module specific checks
* Memory guard
* Window enumeration
* Anomaly in enumeration
* Process enumeration
* Path checks
* Image name checks
* Overlay checks
* Module enumeration
* LSASS anomaly
* Driver presence detection
* Sleep check
* 7zip check
* Hardware abstraction layer check
* Image checks
* TCP table scan

#### Dependencies
* A compiler that supports C++17
* CMake >= 3.13
* In addition to the standard C++ packages you probably have, you'll need the v8-development package

===================

#### How to Use

Build like any cmake project
```bash
cmake . && make
```