////////////////////// ГЛАВНЫЙ КЛАСС ДЛЯ ЗАПУСКА   /////////////

#ifndef INTERFACE_H   
#define INTERFACE_H 

#include "Prodavci.h" // класс инициализации
#include "TheFirstScreen.h" // вывод на экран "Введите логин и пароль"
#include "Prodaza.h"
#include "ProdavciList.h"
#include "AnnualReport.h"
#include "ExpenseInputScreen.h"
#include "ExpenseRecord.h"
#include "IncomeInputScreen.h"
#include "IncomeRecord.h"

class Interface {

private:  // раздел указтелей на таблицы и экраны
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

public:  // методы 
	Interface(); // конструктор
	~Interface(); // деструктор
	void menu(); //основное меню программы
};

#endif