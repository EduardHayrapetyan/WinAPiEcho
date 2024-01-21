#include <windows.h>
#include <stdlib.h>
#define BUFFER_SIZE 256

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    HANDLE hConsoleInput = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    if (hConsoleInput == INVALID_HANDLE_VALUE || hConsoleOutput == INVALID_HANDLE_VALUE) {
        // Handle error
        return 1;
    }

    CHAR buffer[BUFFER_SIZE];
    DWORD bytesRead, bytesWritten;
    // Read from console input
    if (!ReadConsole(hConsoleInput, buffer, BUFFER_SIZE, &bytesRead, NULL)) {
        // Handle error
        return 0;
    }
    MessageBox(NULL,buffer,"title",1);
    return 0;
}
