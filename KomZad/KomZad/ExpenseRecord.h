///// ����� ������� ��������  ////////
#ifndef EXPENSELIST_H    
#define EXPENSELIST_H   
#include <vector> 
#include "Expense.h"

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