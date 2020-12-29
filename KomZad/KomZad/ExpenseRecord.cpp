////// ���������� ������ ������� ��������/////
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

void ExpenseRecord::display()      //����������� �� ������ ������ � ��������          
{
	system("cls");
	cout << "\n���������         |����������              |����                    |�����\n";
	cout << "------------------------------------------------------------------------------------------------\n";
	if (vectPtrsExpenses.size() == 0) // ���� ������ ������� 0, �� �� ������ ������ �������� ��� 
		cout << "---�������� ���---\n" << endl;
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end()) // ���� �� ����� ������� ������� �� ����� ������� 
		{
			cout << setw(15) << (*iter)->category << "    |     " << std::setw(15) << (*iter)->org << "    |     " << std::setw(15) << (*iter)->datePay << "    |     " << std::setw(15) << (*iter)->sum << endl;
			iter++;
		}
		cout << endl;
	}
}

float ExpenseRecord::displaySummary()  //����� ����� ������� ��� 
{
	float totalExpenses = 0;
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "�������� ���\n";
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

