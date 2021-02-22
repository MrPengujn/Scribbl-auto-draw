#include <iostream>
#include <Windows.h>
#include <winuser.h>
#include "Bridge.h"

void cat() {

	MessageBoxA(NULL, "1. Center your cursor on the paper.\n2. Press \"B\".\n3. Wait, don't click on anything at this stage.", "INFO!", MB_OK);

	while (TRUE) {
		if (GetAsyncKeyState(0x42)) {
			POINT point;
			if (GetCursorPos(&point)) {
				std::cout << "$> DEBUG >>> " << point.x << "," << point.y << std::endl;
			}
			Sleep(100);

			//MOUTH START
			SetCursorPos(point.x -60, point.y + 10);
			Sleep(100);
			mouse_event(MOUSEEVENTF_LEFTDOWN, point.x, point.y, 100, 100);
			Sleep(100);
			//left m
			SetCursorPos(point.x - 40, point.y + 20);
			Sleep(100);
			SetCursorPos(point.x - 20, point.y + 25);
			Sleep(100);
			SetCursorPos(point.x, point.y + 20);
			Sleep(100);
			//nose
			Sleep(100);
			SetCursorPos(point.x - 20, point.y);
			Sleep(100);
			SetCursorPos(point.x + 20, point.y);
			Sleep(100);
			SetCursorPos(point.x, point.y + 20);
			Sleep(100);
			//right m
			SetCursorPos(point.x + 20, point.y + 25);
			Sleep(100);
			SetCursorPos(point.x + 40, point.y + 20);
			Sleep(100);
			SetCursorPos(point.x + 60, point.y + 10);
			Sleep(100);
			//stop drawing
			mouse_event(MOUSEEVENTF_LEFTUP, point.x, point.y, 100, 100);
			Sleep(100);
			//####### MOUTH END

			//EYES START
			//left eye
			SetCursorPos(point.x - 50, point.y - 20);
			Sleep(100);
			mouse_event(MOUSEEVENTF_LEFTDOWN, point.x, point.y, 100, 100);
			Sleep(100);
			SetCursorPos(point.x - 70, point.y - 40);
			Sleep(100);
			SetCursorPos(point.x - 50, point.y - 60);
			Sleep(100);
			SetCursorPos(point.x - 30, point.y - 40);
			Sleep(100);
			SetCursorPos(point.x - 50, point.y - 20);
			Sleep(100);
			mouse_event(MOUSEEVENTF_LEFTUP, point.x, point.y, 100, 100);
			Sleep(100);
			//rigt Eye
			SetCursorPos(point.x + 50, point.y - 20);
			Sleep(100);
			mouse_event(MOUSEEVENTF_LEFTDOWN, point.x, point.y, 100, 100);
			Sleep(100);
			SetCursorPos(point.x + 70, point.y - 40);
			Sleep(100);
			SetCursorPos(point.x + 50, point.y - 60);
			Sleep(100);
			SetCursorPos(point.x + 30, point.y - 40);
			Sleep(100);
			SetCursorPos(point.x + 50, point.y - 20);
			Sleep(100);
			//stop drawing
			mouse_event(MOUSEEVENTF_LEFTUP, point.x, point.y, 100, 100);
			Sleep(100);
			//####### EYES END

			//FACE START
			SetCursorPos(point.x, point.y - 100);
			mouse_event(MOUSEEVENTF_LEFTDOWN, point.x, point.y, 100, 100);
			Sleep(100);
			//face right
			SetCursorPos(point.x + 50, point.y - 80);
			Sleep(100);
			SetCursorPos(point.x + 80, point.y - 120);
			Sleep(100);
			SetCursorPos(point.x + 100, point.y - 40);
			Sleep(100);
			SetCursorPos(point.x + 100, point.y + 20);
			Sleep(100);
			SetCursorPos(point.x + 50, point.y + 60);
			Sleep(100);
			SetCursorPos(point.x, point.y + 80);
			Sleep(100);
			//face left
			SetCursorPos(point.x - 50, point.y + 60);
			Sleep(100);
			SetCursorPos(point.x - 100, point.y + 20);
			Sleep(100);
			SetCursorPos(point.x - 100, point.y - 40);
			Sleep(100);
			SetCursorPos(point.x - 80, point.y - 120);
			Sleep(100);
			SetCursorPos(point.x - 50, point.y - 80);
			Sleep(100);
			SetCursorPos(point.x, point.y - 100);
			Sleep(100);
			//####### FACE END

			mouse_event(MOUSEEVENTF_LEFTUP, point.x, point.y, 100, 100);
			break;
		}
	}
}