#include "stdafx.h" 
#include "Prodaza.h" 
#include <iostream>
using namespace std;

void Prodaza::prodazaProd()  //реализаци€ товара
{
	cout << "¬ведите id продавца: " << endl;
	cin >> Number;
	cout << "¬ведите вид товара: " << endl;
	cin >> Vid;
	cout << "¬ведите вид услуги (если услуга не требуетс€, ничего не вводить): " << endl;
	cin >> Service;
	cout << "¬ведите дату продажи (01.01.2021): " << endl;
	cin >> Date;
	Sotrydniki* ptrS = new Sotrydniki(Number, Vid, Service, Date);
	ptrProdavciList->insertSotr(ptrS);    //добавить запись в книгу учета продаж     

}