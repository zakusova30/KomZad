////// ����� ������ ����� �������� ///////
#ifndef EXPENSEINPUTSCREEN_H   
#define EXPENSEINPUTSCREEN_H  
#include "ExpenseRecord.h"

class ExpenseInputScreen 
{
private:
	ExpenseRecord* ptrExpenseList; //��������� �� ������� ��������
public:  ExpenseInputScreen(ExpenseRecord*);
		 void setExpense(); //������ �������
};

#endif 