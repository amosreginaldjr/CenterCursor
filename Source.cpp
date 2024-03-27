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

int main() 
{
    CursorCenter cc;
    //cc.setCursorXLocation(7000);
    //cc.setCursorYLocation(30);
    cc.moveCursor();

    return 0;
}