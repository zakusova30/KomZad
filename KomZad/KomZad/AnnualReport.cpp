#include "stdafx.h" 
#include "AnnualReport.h" 
#include <iostream>

AnnualReport::AnnualReport(IncomeRecord* pIN, ExpenseRecord* pER) : ptrIN(pIN), ptrER(pER)
{
}

void AnnualReport::display()  //����������� ������ �� ������
{
	cout << " ������� �����" << endl;
	cout << "-------------------------------------------------\n";
	cout << " ������" << endl;
	cout << "-------------------------------------------------\n";
	cout << "�������:";
	prof = ptrIN->getSumOfIncome();
	cout << prof << endl;
	cout << "-------------------------------------------------\n";
	cout << "�������" << endl;
	cout << "--------------------------------------------------\n";
	cout << "  ���������                |   ���������\n";
	cout << "---------------------------|------------------\n";
	expenses = ptrER->displaySummary();
	cout << "--------------------------------------------------\n";
	cout << "����� �������:";
	cout << expenses << endl;
	cout << "--------------------------------------------------\n";
	cout << "�������:  " << (prof - expenses) << endl;
	cout << "--------------------------------------------------\n";
}