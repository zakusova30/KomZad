#include "stdafx.h" 
#include "Interface.h" 
#include <iostream>

Interface::Interface() //����������� 
{

}

Interface::~Interface() // ����������
{

}

void Interface::menu()  //����������� ����
{
	do // ���� ������������ ������ ������
	{
		ptrTheFirstScreen = new TheFirstScreen(ptrProdavci);
		ptrTheFirstScreen->inicial();     //��������� � ������ ����� ������ � ������

		system("cls");

		if (ptrTheFirstScreen->getprava() == 3) cout << "��������� ������������� ��� ������\n"; //������������������ ������������
	} while (ptrTheFirstScreen->getprava() == 3);

	while (true)
	{
		cout << "\n";
		cout << "/����/\n";
		cout << "/////////////////////////// \n";
		cout << "/1 - ������ ������  / \n";
		if (ptrTheFirstScreen->getprava() == 1) cout << "/2 - ������� ������/ \n";  //���������� ��� ���� ������ ���� ��� ��������
		cout << "/0 - �����        / \n";
		cin >> pr;
		if (pr == '0')
			return;
	}
}