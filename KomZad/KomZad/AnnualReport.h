#ifndef ANNUALREPORT_H  
#define ANNUALREPORT_H   
#include "IncomeRecord.h"
#include "ExpenseRecord.h"

class AnnualReport // Класс годового отчета
{
private:  IncomeRecord* ptrIN;  //указатель на таблицу доходов       
		  ExpenseRecord* ptrER;  //указатель на таблицу расходов 
		  float expenses, prof; //сумма расходоы и доходов 

public:  AnnualReport(IncomeRecord*, ExpenseRecord*);
		 void display();  //отображение на экране
};
#endif