/////////////////   ���� ���������� TheFirstScreen.h (����� �����������) ////////////////
#include "stdafx.h" 
#include "TheFirstScreen.h" 
#include <iostream>


void TheFirstScreen::inicial() 
{
	system("cls");
	cout << "�������� ����� ������ �������������/�������� (a/p): " << endl;
	cin >> username1;
	if (username1 == 'a'){  // ������ �������������� �����  ������ 
		cout << "������� ������: " << endl;
		cin >> password1;
	}
	else password1 = "";
	prava = ptrname->avtorizaciya(username1, password1); 
}

int TheFirstScreen::getprava()
{
	return prava;
}