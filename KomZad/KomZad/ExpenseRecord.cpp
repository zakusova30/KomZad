////// РЕАЛИЗАЦИЯ КЛАССА ТАБЛИЦА РАСХОДОВ/////
#include "stdafx.h" 
#include "ExpenseRecord.h" 
#include <iostream>
#include <iomanip>

using namespace std;

ExpenseRecord::~ExpenseRecord() // деструктор
{
	while (!vectPtrsExpenses.empty()) // очистка вектора 
	{
		iter = vectPtrsExpenses.begin();
		delete *iter;
		vectPtrsExpenses.erase(iter);
	}
}

void ExpenseRecord::insertExp(Expense* ptrExp)   //добавление в таблицу расходов
{
	vectPtrsExpenses.push_back(ptrExp);
}

void ExpenseRecord::display()      //отображение на экране данных о расходах          
{
	system("cls");
	cout << "\nКатегория         |Получатель              |Дата                    |Сумма\n";
	cout << "------------------------------------------------------------------------------------------------\n";
	if (vectPtrsExpenses.size() == 0) // если размер вектора 0, то он пустой значит расходов нет 
		cout << "---Расходов нет---\n" << endl;
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end()) // пока не конец вектора выводим на экран расходы 
		{
			cout << setw(15) << (*iter)->category << "    |     " << std::setw(15) << (*iter)->org << "    |     " << std::setw(15) << (*iter)->datePay << "    |     " << std::setw(15) << (*iter)->sum << endl;
			iter++;
		}
		cout << endl;
	}
}

float ExpenseRecord::displaySummary()  //общая сумма доходов для 
{
	float totalExpenses = 0;
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "Расходов нет\n";
		return 0;
	}
	iter = vectPtrsExpenses.begin();
	while (iter != vectPtrsExpenses.end())
	{
		cout << std::setw(15) << ((*iter)->category) << "    | " << std::setw(15) << ((*iter)->sum) << endl;
		totalExpenses += (*iter)->sum;
		iter++;
	}
	return totalExpenses;
}

