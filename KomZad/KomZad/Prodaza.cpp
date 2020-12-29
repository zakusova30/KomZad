#include "stdafx.h" 
#include "Prodaza.h" 
#include <iostream>
using namespace std;

void Prodaza::prodazaProd()  
{
	system("cls");
	cout << "¬ведите id сотрудника: " << endl;
	cin >> Number;
	cout << "¬ведите ‘»ќ сотрудника: " << endl;
	cin >> fio;
	cout << "¬ведите должность: " << endl;
	cin >> dol;
	cout << "¬ведите зарплату сотрудника: " << endl;
	cin >> zp;
	Sotrydniki* ptrS = new Sotrydniki(Number, fio, dol, zp);
	ptrProdavciList->insertSotr(ptrS);    //добавить запись в книгу учета продаж     

}