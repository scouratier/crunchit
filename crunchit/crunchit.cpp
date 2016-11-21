#define _WIN32_WINNT 0x0501

#include <windows.h>
#include <stdio.h>
#include <winuser.h>
#include <string>
#include <iostream>
#include <sstream>  // Required for stringstreams

void main(void){
	HWND	_hwnd=FindWindow(NULL, L"World of Warcraft");
    	
	while(1)
	{
		SendMessage(_hwnd, WM_KEYDOWN, 0x4C, 0);
		Sleep(10);
		SendMessage(_hwnd, WM_KEYUP, 0x4C, 0);
	}
}