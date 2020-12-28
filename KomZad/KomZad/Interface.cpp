#include "stdafx.h" 
#include "Interface.h" 
#include <iostream>

Interface::Interface() //конструктор 
{

}

Interface::~Interface() // деструктор
{

}

void Interface::menu()  //отображение меню
{
	do // если пользователь ошибся вводом
	{
		ptrTheFirstScreen = new TheFirstScreen(ptrProdavci);
		ptrTheFirstScreen->inicial();     //обращение к методу ввода логина и пароля

		system("cls");

		if (ptrTheFirstScreen->getprava() == 3) cout << "Проверьте идентификатор или пароль\n"; //неавторизированный пользователь
	} while (ptrTheFirstScreen->getprava() == 3);

	while (true)
	{
		cout << "\n";
		cout << "/МЕНЮ/\n";
		cout << "/////////////////////////// \n";
		cout << "/1 - Ввести данные  / \n";
		if (ptrTheFirstScreen->getprava() == 1) cout << "/2 - Вывести данные/ \n";  //отображать это меню только если это директор
		cout << "/0 - Выход        / \n";
		cin >> pr;
		if (pr == '0')
			return;
	}
}