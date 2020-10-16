# Multichannel BT Keyboard
When someone has to work with multiple devices, whether it's a home computer, work laptop, or mobile tablet, they have to switch between multiple keyboards to type to each device. This is inconvenient for anyone who values their desk space or hates the soulcrushing burden of having to move your hands a couple degrees. The multichannel BT keyboard is designed to simplify transitions between devices by connecting to up to three different devices and changing the target with the press of a button. 

INSERT PHOTO HERE

## Schematic
The significant hardware decisions are listed below. 
* ATMega32u4 Microcontroller
* RN42 Bluetooth Module
* MIC4680 Voltage Regulator
* ______ Diodes

We chose to use the ATMega32u4 microcontroller because of its high number of GPIO pins and compatibility with the Arduino IDE. It provides just the right number of GPIO pins to act as inputs and outputs for 72 keys. The Arduino IDE simplifies the programming for the keyboard's firmware. Along with that, there is a lot of online support for Arduino devices and projects.

The RN42 bluetooth module .

## PCB
There are many ways to design a PCB and we won't be discussing design practices. The main priority behind our PCB design was to avoid bottlenecking high current components, like the microcontroller, bluetooth modules, voltage regulator, and batteries. Since the keyboard is primarily digital, the rest of the design simply aims to connect signals together with traces. 



## Files


## CAD Models


## RN42 First Time Setup
All commands are entered in command mode with a 10ms delay between each one. Exit command mode and save with **R,1\n**.  
Enable HID mode with **S~,6\n**.  
Enable authentication mode 0 with **SA,0\n**. Default pin is 1234.  
Configure the device name with **SN,`value`\n**, where value is an up to 20 character alphanumeric string.
Configure flag register with **SH,`value`\n**, where value is 4 hex characters. Set bits 0-3 high (020F).  
Enable auto-reconnect with **SM,6\n**.  

## Future Improvements
Set inactive RN42s into low power mode by controlling their RESET pin. Requires a new schematic and PCB design.  
Use the RN42 RX pin for easier debugging.
Add a voltage divider to check battery percentage and report it to the host device similar to Logitech's devices.
Use a microcontroller with more pins, possibly an STM.  
Add screw holes to case and PCB to improve rigidity and compatibility with standard consumer cases.