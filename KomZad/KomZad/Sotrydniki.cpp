//// РЕАЛИЗАЦИЯ КЛАСС ПРОДАВЦОВ ////
#include "stdafx.h" 
#include "Sotrydniki.h" 

Sotrydniki::Sotrydniki(string n, string f, string k, string d) : number(n), fio(f), katprod(k), date(d)
{
}

Sotrydniki::~Sotrydniki()
{
}

string Sotrydniki::getNumber()  //получение id продавца
{
	return number;
}

string Sotrydniki::getFio() //получение фио продавца
{
return fio;
}

string Sotrydniki::getKat() //получение категории продавца
{
	return katprod;
}

string Sotrydniki::getDate()  //получение даты смены
{
	return date;
}
