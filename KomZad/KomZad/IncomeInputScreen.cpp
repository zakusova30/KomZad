//// ���������� ������ ����� ������� ////////////////
#include "stdafx.h" 
#include "IncomeInputScreen.h" 
#include <iostream>
//���� ������ � �������
void IncomeInputScreen::setIncome()
{
	system("cls");
	cout << "������� ID ��������(000): " << endl;
	cin >> ID;
	cout << "������� ��������� ������ (1000): " << endl;
	cin >> PriceTov; cin.ignore(80, '\n'); 
	cout << "������� ��������� ������ (0): " << endl;
	cin >> PriceService; cin.ignore(80, '\n');
	cout << "������� ���� ������� (21.12.2020): " << endl;
	cin >> DatePrice;
	Income* ptrIncome = new Income(ID, PriceTov, PriceService, DatePrice);
	ptrIncomeR->insertIncome(ptrIncome);
}
