// KomZad.cpp : Defines the entry point for the console application.
//
 
///////////////////////  √Ћј¬Ќјя ‘”Ќ ÷»я   //////////////////////
#include "stdafx.h"
#include <iostream>
#include "Interface.h"  // √лавный класс подключаем


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	Interface theUserInterface; // создаем объект 
	theUserInterface.menu();
	return 0;
}

