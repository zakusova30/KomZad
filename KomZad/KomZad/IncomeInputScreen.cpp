#include "stdafx.h" 
#include "IncomeInputScreen.h" 
#include <iostream>
//¬вод дохода в таблицу
void IncomeInputScreen::setIncome()
{
	cout << "¬ведите ID продавца(000): " << endl;
	cin >> ID;
	cout << "¬ведите стоимость товара (1000): " << endl;
	cin >> PriceTov; cin.ignore(80, '\n'); 
	cout << "¬ведите стоимость услуги (0): " << endl;
	cin >> PriceService; cin.ignore(80, '\n');
	cout << "¬ведите дату продажи (21.12.2020): " << endl;
	cin >> DatePrice;
	Income* ptrIncome = new Income(ID, PriceTov, PriceService, DatePrice);
	ptrIncomeR->insertIncome(ptrIncome);
}
