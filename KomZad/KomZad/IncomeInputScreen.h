#ifndef INCOMEINPUTSCREEN_H    
#define INCOMEINPUTSCREEN_H   
#include "ProdavciList.h"
#include "IncomeRecord.h"
#include <string> 

using namespace std;
class IncomeInputScreen //класс экрана ввода доходов
{
private:
	IncomeRecord* ptrIncomeR; //указатель на таблицу доходов
	string ID; //имя клиента введное пользователем
	float PriceTov; //стоимость стирки введная пользователем
	float PriceService; //стоимость услуги введная пользователем
	string DatePrice; //дата оплаты введное пользователем
public:
	IncomeInputScreen(IncomeRecord* ptrIR) : ptrIncomeR(ptrIR)
	{
	}
	void setIncome();  //ввод доходов
};
#endif