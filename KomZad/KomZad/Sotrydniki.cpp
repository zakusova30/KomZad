//// ���������� ����� ��������� ////
#include "stdafx.h" 
#include "Sotrydniki.h" 

Sotrydniki::Sotrydniki(string n, string f, string k, string d) : number(n), fio(f), katprod(k), date(d)
{
}

Sotrydniki::~Sotrydniki()
{
}

string Sotrydniki::getNumber()  //��������� id ��������
{
	return number;
}

string Sotrydniki::getFio() //��������� ��� ��������
{
return fio;
}

string Sotrydniki::getKat() //��������� ��������� ��������
{
	return katprod;
}

string Sotrydniki::getDate()  //��������� ���� �����
{
	return date;
}
