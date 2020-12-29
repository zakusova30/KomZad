#ifndef INCOMERECORD_H   
#define INCOMERECORD_H   
#include <list> 
#include "Income.h"

class IncomeRecord  //������� �������
{
private:

	list <Income*> setPtrsIN;  //������ ��������� �� ������
	list <Income*>::iterator iter; //��������
public:
	~IncomeRecord();
	void insertIncome(Income*);//���������� � ������� �������
	void display();            //����������� �� ������           
	float getSumOfIncome();   //����� ���� �������  ��� �������� ������
};

#endif  