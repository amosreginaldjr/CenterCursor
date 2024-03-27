#include"CursorCenter.h"

void CursorCenter::moveCursor()
{
    while (!(GetKeyState('0') & 0x8000))
    {
        SetCursorPos(centerX, centerY);
        Sleep(500);
    }
}

unsigned short int CursorCenter::setCursorXLocation(unsigned short int cursorXDesiredLocation)
{
    if (cursorXDesiredLocation > screenWidth)
        return centerX;
    this->centerX = cursorXDesiredLocation;
}
unsigned short int CursorCenter::setCursorYLocation(unsigned short int cursorYDesiredLocation)
{
    if (cursorYDesiredLocation > screenWidth)
        return centerY;
    this->centerY = cursorYDesiredLocation;
}
