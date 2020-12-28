/////////////  КЛАСС РАСХОДОВ  /////////////////////
#ifndef EXPENSE_H  
#define EXPENSE_H 
#include <string> 
using namespace std;

class Expense //класс расходов
{
public:
	string category; //категория услуги  или товара
	string org;    //название организации        
	string datePay;  //дата оплаты
	float sum;   //сумма оплаты
	Expense(){}
	Expense(string c, string o, string d, float s) : category(c), org(o), datePay(d), sum(s) // конструктор с параметрами
	{
	}
};
#endif