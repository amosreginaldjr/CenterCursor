# CenterCursor
This program is to center the cursor. 

IMPORTANT: To terminate the program key, hold '0'

There are two ways so far to go about using this program:
1) Call moveCursor() from CursorCenter in main and it will center the cursor (based off of your display resolution) for you after 500ms
2) Call setCursorXLocation(unsigned short int) or/and setCursorYLocation(unsigned short int) from CursorCenter and the cursor will go to the desired location based off the paramenter.
   Please note: if the resolution passed in from the parameter is greater than the detected screen resolution, it will center the X or Y value respectively

Thank you for using CenterCursor!
