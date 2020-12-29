#ifndef INCOMEINPUTSCREEN_H    
#define INCOMEINPUTSCREEN_H   
#include "ProdavciList.h"
#include "IncomeRecord.h"
#include <string> 

using namespace std;
class IncomeInputScreen //����� ������ ����� �������
{
private:
	IncomeRecord* ptrIncomeR; //��������� �� ������� �������
	string ID; //��� ������� ������� �������������
	float PriceTov; //��������� ������ ������� �������������
	float PriceService; //��������� ������ ������� �������������
	string DatePrice; //���� ������ ������� �������������
public:
	IncomeInputScreen(IncomeRecord* ptrIR) : ptrIncomeR(ptrIR)
	{
	}
	void setIncome();  //���� �������
};
#endif