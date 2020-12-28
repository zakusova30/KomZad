///// ����� ������� ��������  ////////
#ifndef EXPENSERECORD_H    
#define EXPENSERECORD_H   
#include <vector> 
#include "Expense.h"
#include <clocale>

class ExpenseRecord //����� ������� ��������
{
private:
	vector<Expense*> vectPtrsExpenses;  //��������� ��������� ������ �� �������
	vector<Expense*>::iterator iter; //�������� ��������
public:
	~ExpenseRecord();
	void insertExp(Expense*); //���������� � ������� ��������
	void display(); //����������� �� ������
	float displaySummary(); // ��� �������� ������
};

#endif 