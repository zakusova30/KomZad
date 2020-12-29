#include "stdafx.h" 
#include "Interface.h" 
#include <iostream>

Interface::Interface() //конструктор 
{
	ptrProdavciList = new ProdavciList; // возможно исправить лист на рекорд /// книга учета продавцов
	ptrIncomeRecord = new IncomeRecord; // записи доходов
	ptrExpenseRecord = new ExpenseRecord; // записи расходов

}

Interface::~Interface() // деструктор
{
	delete ptrProdavciList;
	delete ptrIncomeRecord;
	delete ptrExpenseRecord;

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
		if (pr == '1'){
			system("cls");
			cout << "\n";
			cout << "/ МЕНЮ - ВВЕСТИ ДАННЫЕ/ \n";
			cout << "///////////////////////\n";
			cout << "/1 - Оплата продажи  /\n";
			cout << "/2 - Провести расходы /\n";
				cin >> pr;
	
			switch (pr)
			{

			case '1': ptrIncomeInputScreen = new IncomeInputScreen(ptrIncomeRecord);
				ptrIncomeInputScreen->setIncome();
				delete ptrIncomeInputScreen;
				break;
			case '2': ptrExpenseInputScreen = new ExpenseInputScreen(ptrExpenseRecord);
				ptrExpenseInputScreen->setExpense();
				delete ptrExpenseInputScreen;
				break;
				break;
			default: cout << "Ошибка ввода\n";
				break;
		}
		}
		else if (pr == '2')       //меню вывода данных
		{
			if (ptrTheFirstScreen->getprava() == 1)  // выводить если директор
			{
				system("cls");
				cout << "\n";
				cout << "/ МЕНЮ - ВЫВЕСТИ ДАННЫЕ       /\n";
				cout << "//////////////////////////////\n";
				cout << "/1 - Таблица сотрудников    /\n";
				cout << "/2 - Таблица доходов       /\n";
				cout << "/3 - Таблица расходов     /\n";
				cout << "/4 - Годовой отчет       /\n";

				cin >> pr;
				system("cls");
				switch (pr)
				{

				case '1': ptrProdavciList->display();
					break;
				case '2':ptrIncomeRecord->display();
					break;
				case '3': ptrExpenseRecord->display();
					break;
				case '4':ptrAnnualReport = new AnnualReport(ptrIncomeRecord, ptrExpenseRecord);
					ptrAnnualReport->display();
					delete ptrAnnualReport;
					break;
				default: cout << "Ошибка ввода\n";
					break;
				}

			}
		}

		else if (pr == '0')  //выход из программы
			return;
		else     cout << "Ошибка ввода\n";
	}
	delete ptrProdaza;
 }
