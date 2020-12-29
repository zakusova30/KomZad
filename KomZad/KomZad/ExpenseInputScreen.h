////// КЛАСС ЭКРАНА ВВОДА РАСХОДОВ ///////
#ifndef EXPENSEINPUTSCREEN_H   
#define EXPENSEINPUTSCREEN_H  
#include "ExpenseRecord.h"

class ExpenseInputScreen //класс экрана ввода расходов
{
private:
	ExpenseRecord* ptrExpenseList; //указатель на таблицу расходов
public:  ExpenseInputScreen(ExpenseRecord*);
		 void setExpense(); //ввести расходы
};

#endif 