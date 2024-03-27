#pragma once
#include<Windows.h>

class CursorCenter
{
private:
    // Get the screen dimensions
    unsigned short int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    unsigned short int screenHeight = GetSystemMetrics(SM_CYSCREEN);
    // Calculate the center coordinates
    unsigned short int centerX = screenWidth / 2;
    unsigned short int centerY = screenHeight / 2;
public:
    void moveCursor();
    unsigned short int setCursorXLocation(unsigned short int cursorXDesiredLocation);
    unsigned short int setCursorYLocation(unsigned short int cursorYDesiredLocation);
};