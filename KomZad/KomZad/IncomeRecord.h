#ifndef INCOMERECORD_H   
#define INCOMERECORD_H   
#include <list> 
#include "Income.h"

class IncomeRecord  //таблица доходов
{
private:

	list <Income*> setPtrsIN;  //список указатель на доходы
	list <Income*>::iterator iter; //итератор
public:
	~IncomeRecord();
	void insertIncome(Income*);//добавление в таблицу доходов
	void display();            //отображение на экране           
	float getSumOfIncome();   //сумма всех доходов  для годового отчета
};

#endif  