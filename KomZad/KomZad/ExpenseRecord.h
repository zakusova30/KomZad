///// КЛАСС ТАБЛИЦЫ РАСХОДОВ  ////////
#ifndef EXPENSELIST_H    
#define EXPENSELIST_H   
#include <vector> 
#include "Expense.h"

class ExpenseRecord //класс таблицы расходов
{
private:
	vector<Expense*> vectPtrsExpenses;  //указатель контейнер вектор на расходы
	vector<Expense*>::iterator iter; //итератор расходов
public:
	~ExpenseRecord();
	void insertExp(Expense*); //добавление в таблицу расходов
	void display(); //отображение на экране
	float displaySummary(); // для годового отчета
};

#endif 