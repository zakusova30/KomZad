// KomZad.cpp : Defines the entry point for the console application.
//
 
///////////////////////  ������� �������   //////////////////////
#include "stdafx.h"
#include <iostream>
#include "Interface.h"  // ������� ����� ����������


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	Interface theUserInterface; // ������� ������ 
	theUserInterface.menu();
	return 0;
}

