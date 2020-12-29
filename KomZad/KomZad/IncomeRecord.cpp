////// РЕАЛИЗАЦИЯ КЛАССА ТАБЛИЦА ДОХОДОВ/////
#include "stdafx.h" 
#include "IncomeRecord.h" 
#include <iostream>
#include <iomanip>
using namespace std;

IncomeRecord::~IncomeRecord()
{
	while (!setPtrsIN.empty())
	{
		iter = setPtrsIN.begin();
		delete *iter;
		setPtrsIN.erase(iter);
	}
}


void IncomeRecord::insertIncome(Income* ptrR) {
	setPtrsIN.push_back(ptrR);
}



void IncomeRecord::display() //отоброжение на экране доходов                  
{

	cout << "\nID продавца        |Стоимость товара      |Стоимость услуги        |Общая стоимость         |Дата оплаты\n";
	cout << "----------------------------------------------------------------------------------------------------------------------\n";
	if (setPtrsIN.empty())
		cout << "---Нет доходов---\n" << endl;
	else
	{
		iter = setPtrsIN.begin();
		while (iter != setPtrsIN.end())
		{

			cout << std::setw(15) << (*iter)->getID() << "    |     " << std::setw(15) << (*iter)->getPriceTov() << "    |     " << std::setw(15) << (*iter)->getPriceService() << "    |     " << std::setw(15) << (*iter)->getPriceTov() + (*iter)->getPriceService() << "    |     " << std::setw(15) << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}

float  IncomeRecord::getSumOfIncome()  //общая сумма доходов для годового отчета
{
	float sumIncome = 0.0;
	iter = setPtrsIN.begin();
	while (iter != setPtrsIN.end())
	{
		sumIncome += (*iter)->getPriceTov() + (*iter)->getPriceService();
		iter++;
	}
	return sumIncome;
}


