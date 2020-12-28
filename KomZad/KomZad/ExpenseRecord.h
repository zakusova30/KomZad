///// КЛАСС ТАБЛИЦЫ РАСХОДОВ  ////////
#ifndef EXPENSERECORD_H    
#define EXPENSERECORD_H   
#include <vector> 
#include "Expense.h"
#include <clocale>

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