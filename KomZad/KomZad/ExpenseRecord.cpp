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

