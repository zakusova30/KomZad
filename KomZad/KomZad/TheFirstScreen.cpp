/////////////////   ���� ���������� TheFirstScreen.h (����� �����������) ////////////////
#include "stdafx.h" 
#include "TheFirstScreen.h" 
#include <iostream>


void TheFirstScreen::inicial() 
{
	cout << "�������� ����� ������ �������������/�������� (a/p): " << endl;
	cin >> username1;
	cout << "������� ������: " << endl;
	cin >> password1;
	prava = ptrname->avtorizaciya(username1, password1); 
}

int TheFirstScreen::getprava()
{
	return prava;
}