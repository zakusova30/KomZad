#include "stdafx.h" 
#include "Prodaza.h" 
#include <iostream>
using namespace std;

void Prodaza::prodazaProd()  //���������� ������
{
	cout << "������� id ��������: " << endl;
	cin >> Number;
	cout << "������� ��� ������: " << endl;
	cin >> Vid;
	cout << "������� ��� ������ (���� ������ �� ���������, ������ �� �������): " << endl;
	cin >> Service;
	cout << "������� ���� ������� (01.01.2021): " << endl;
	cin >> Date;
	Sotrydniki* ptrS = new Sotrydniki(Number, Vid, Service, Date);
	ptrProdavciList->insertSotr(ptrS);    //�������� ������ � ����� ����� ������     

}