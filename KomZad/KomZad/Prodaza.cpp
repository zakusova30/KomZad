#include "stdafx.h" 
#include "Prodaza.h" 
#include <iostream>
using namespace std;

void Prodaza::prodazaProd()  
{
	system("cls");
	cout << "������� id ����������: " << endl;
	cin >> Number;
	cout << "������� ��� ����������: " << endl;
	cin >> fio;
	cout << "������� ���������: " << endl;
	cin >> dol;
	cout << "������� �������� ����������: " << endl;
	cin >> zp;
	Sotrydniki* ptrS = new Sotrydniki(Number, fio, dol, zp);
	ptrProdavciList->insertSotr(ptrS);    //�������� ������ � ����� ����� ������     

}