//// ���������� ������ ����� ��������� ////////////////
#include "stdafx.h" 
#include "ExpenseInputScreen.h" 
#include <iostream>
using namespace std;

ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord* per) : ptrExpenseList(per)
{
}

void ExpenseInputScreen::setExpense()  //����� ����� ��������
{

	string category, org, date;
	float amount;
	cout << "������� ��������� �������� (�����, ��������): ";
	cin >> category;
	cout << "������� ����������� (�� �������������, ��� ������): ";
	cin >> org;
	cout << "������� ���� ������� (20.12.2020): ";
	cin >> date;
	cout << "������� ����� � ������: ";
	cin >> amount;
	cin.ignore(80, '\n');
	Expense* ptrExpense = new Expense(category, org, date, amount);
	ptrExpenseList->insertExp(ptrExpense); // ���������� ����� ������ � ������� ��������
}