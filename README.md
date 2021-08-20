# KeypadInterface-uart
a xc8 microchip program for a keypadinterface (4rows, 3 columns) to serial uart using a PIC16F15324.

Since scanning a 4x3 keypad takes quite a few pins, 
I programmed a simple microchip uc to do the scanning work and report via uart to the main processor when a key is pressed.

built in MPLAB X IDE (free), keypad library from Embedded Laboratory and the "code configurator" plugin (wizzard-like).

see keypad.h for the pins used.
RC5 is the uart tx, 9600bps
