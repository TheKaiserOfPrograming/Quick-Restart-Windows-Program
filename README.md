# Quick Windows Restart

This repository contains a simple C++ program to promptly restart a Windows machine.

## Overview

The program utilises the Windows API and a system command to enforce an immediate system restart.

### Disclaimer
**WARNING**: `This program will forcefully close all running applications, which may result in the loss of unsaved data. Use at your own risk.`
## Code

```cpp
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    FreeConsole();

    system("SHUTDOWN /f /r /t 0"); //Utilising CMD command

    return 0;
}
