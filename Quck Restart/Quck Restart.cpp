#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    FreeConsole();

    system("SHUTDOWN /f /r /t 0");

    return 0;
}