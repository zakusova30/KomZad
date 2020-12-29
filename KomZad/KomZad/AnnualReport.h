///////////////////////// ����� �������� ������ ///////////////////
#ifndef ANNUALREPORT_H  
#define ANNUALREPORT_H   
#include "IncomeRecord.h"
#include "ExpenseRecord.h"

class AnnualReport 
{
private:  IncomeRecord* ptrIN;  //��������� �� ������� �������       
		  ExpenseRecord* ptrER;  //��������� �� ������� �������� 
		  float expenses, prof; //����� �������� � ������� 

public:  AnnualReport(IncomeRecord*, ExpenseRecord*);
		 void display();  //����������� �� ������
};
#endif