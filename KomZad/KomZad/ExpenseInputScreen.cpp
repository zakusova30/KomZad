//// РЕАЛИЗАЦИЯ ЭКРАНА ВВОДА РАССХОДОВ ////////////////
#include "stdafx.h" 
#include "ExpenseInputScreen.h" 
#include <iostream>
using namespace std;

ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord* per) : ptrExpenseList(per)
{
}

void ExpenseInputScreen::setExpense()  //экран ввода расходов
{

	string category, org, date;
	float amount;
	cout << "Введите категорию расходов (Цветы, водитель): ";
	cin >> category;
	cout << "Введите организацию (ИП Автоперевозки, ОАО Лютики): ";
	cin >> org;
	cout << "Введите дату платежа (20.12.2020): ";
	cin >> date;
	cout << "Введите сумму в рублях: ";
	cin >> amount;
	cin.ignore(80, '\n');
	Expense* ptrExpense = new Expense(category, org, date, amount);
	ptrExpenseList->insertExp(ptrExpense); // добавление новой записи в таблицу расходов
}