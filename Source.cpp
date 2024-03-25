#include<Windows.h>

int main() {
    // Get the screen dimensions
    unsigned short int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    unsigned short int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    // Calculate the center coordinates
    unsigned short int centerX = screenWidth / 2;
    unsigned short int centerY = screenHeight / 2;

    // Move the mouse cursor to the center
    while (!(GetKeyState('0') & 0x8000))
    {
        SetCursorPos(centerX, centerY);
        Sleep(500);
    }
    return 0;
}