#include "stdafx.h" 
#include "AnnualReport.h" 
#include <iostream>

AnnualReport::AnnualReport(IncomeRecord* pIN, ExpenseRecord* pER) : ptrIN(pIN), ptrER(pER)
{
}

void AnnualReport::display()  //отображение данных на экране
{
	cout << " Годовой отчет" << endl;
	cout << "-------------------------------------------------\n";
	cout << " Доходы" << endl;
	cout << "-------------------------------------------------\n";
	cout << "Выручка:";
	prof = ptrIN->getSumOfIncome();
	cout << prof << endl;
	cout << "-------------------------------------------------\n";
	cout << "Расходы" << endl;
	cout << "--------------------------------------------------\n";
	cout << "  Категория                |   Стоимость\n";
	cout << "---------------------------|------------------\n";
	expenses = ptrER->displaySummary();
	cout << "--------------------------------------------------\n";
	cout << "Общие расходы:";
	cout << expenses << endl;
	cout << "--------------------------------------------------\n";
	cout << "Прибыль:  " << (prof - expenses) << endl;
	cout << "--------------------------------------------------\n";
}