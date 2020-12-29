////////////////////// ������� ����� ��� �������   /////////////

#ifndef INTERFACE_H   
#define INTERFACE_H 

#include "Prodavci.h" // ����� �������������
#include "TheFirstScreen.h" // ����� �� ����� "������� ����� � ������"
#include "Prodaza.h"
#include "ProdavciList.h"
#include "AnnualReport.h"
#include "ExpenseInputScreen.h"
#include "ExpenseRecord.h"
#include "IncomeInputScreen.h"
#include "IncomeRecord.h"

class Interface {

private:  // ������ ��������� �� ������� � ������
	char pr;
	TheFirstScreen* ptrTheFirstScreen;
	Prodavci* ptrProdavci;
	ProdavciList* ptrProdavciList;
	Prodaza* ptrProdaza;
	IncomeRecord* ptrIncomeRecord;
	IncomeInputScreen* ptrIncomeInputScreen;
	ExpenseRecord* ptrExpenseRecord;
	ExpenseInputScreen* ptrExpenseInputScreen;
	AnnualReport* ptrAnnualReport;

public:  // ������ 
	Interface(); // �����������
	~Interface(); // ����������
	void menu(); //�������� ���� ���������
};

#endif