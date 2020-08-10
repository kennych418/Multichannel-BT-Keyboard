# Multichannel-BT-Keyboard

## RN42 First Time Setup:
All commands are entered in command mode with a 10ms delay between each one. Exit command mode and save with **R,1\n**.  
Enable HID mode with **S~,6\n**.  
Enable authentication mode 0 with **SA,0\n**. Default pin is 1234.  
Configure flag register with **SH,<value>**, where value is 4 hex characters. Set bits 0-3 high (0x020F).  
Enable auto-reconnect with **SM,6\n**.  

## Future Improvements
Set inactive RN42s into low power mode by controlling their RESET pin. Requires a new schematic and PCB design.  
Use the RN42 RX pin for easier debugging.
Add a voltage divider to check battery percentage and report it to the host device similar to Logitech's devices.  
Add screw holes to case and PCB to improve rigidity and compatibility with standard consumer cases.