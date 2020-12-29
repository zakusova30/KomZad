//// РЕАЛИЗАЦИЯ ЭКРАНА ВВОДА ДОХОДОВ ////////////////
#include "stdafx.h" 
#include "IncomeInputScreen.h" 
#include <iostream>
//Ввод дохода в таблицу
void IncomeInputScreen::setIncome()
{
	system("cls");
	cout << "Введите ID продавца(000): " << endl;
	cin >> ID;
	cout << "Введите стоимость товара (1000): " << endl;
	cin >> PriceTov; cin.ignore(80, '\n'); 
	cout << "Введите стоимость услуги (0): " << endl;
	cin >> PriceService; cin.ignore(80, '\n');
	cout << "Введите дату продажи (21.12.2020): " << endl;
	cin >> DatePrice;
	Income* ptrIncome = new Income(ID, PriceTov, PriceService, DatePrice);
	ptrIncomeR->insertIncome(ptrIncome);
}
