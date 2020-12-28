/////////////////   ФАЙЛ РЕАЛИЗАЦИИ TheFirstScreen.h (ЭКРАН АВТОРИЗАЦИИ) ////////////////
#include "stdafx.h" 
#include "TheFirstScreen.h" 
#include <iostream>


void TheFirstScreen::inicial() 
{
	cout << "Выберите режим работы администратор/продавец (a/p): " << endl;
	cin >> username1;
	cout << "Введите пароль: " << endl;
	cin >> password1;
	prava = ptrname->avtorizaciya(username1, password1); 
}

int TheFirstScreen::getprava()
{
	return prava;
}