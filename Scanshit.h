// stdafx.cpp : source file that includes just the standard includes
// ConsoleApplication1.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
#include <process.h>        
#include <iostream>
#include <windows.h>
#include <ctime>

class ScanContents
{
public:
	//values used to compare and decide exactly which quarter 
	BITMAP Bm;
	RECT RcWindow;
	//our pixel array
	RGBQUAD *PPixels;
	//all the contents necessary to run our aimbot scanning thread
	ScanContents(BITMAP bm, RECT rcWindow, RGBQUAD *pPixels)
	{
		Bm = bm;
		RcWindow = rcWindow;
		PPixels = pPixels;
	}
};

class MouseCoord
{
public:
	int X;
	int Y;
	MouseCoord(int x, int y)
	{
		X = x;
		Y = y;
	}
};

//DECLARE after basic concept
class AimbotThr
{
public:
	HWND AppWnd;
	std::string GameWindow;
	AimbotThr(HWND appWnd, std::string gameWindow)
	{
		AppWnd = appWnd;
		GameWindow = gameWindow;
	}
};