#include "stdafx.h" 
#include "ExpenseRecord.h" 
#include <iostream>
#include <iomanip>

using namespace std;

ExpenseRecord::~ExpenseRecord() // ����������
{
	while (!vectPtrsExpenses.empty()) // ������� ������� 
	{
		iter = vectPtrsExpenses.begin();
		delete *iter;
		vectPtrsExpenses.erase(iter);
	}
}

void ExpenseRecord::insertExp(Expense* ptrExp)   //���������� � ������� ��������
{
	vectPtrsExpenses.push_back(ptrExp);
}

