///// ���������� ������ ����������� �� ����� /////
#include "stdafx.h" 
#include "ProdavciList.h" 
#include <iostream>
#include <iomanip>

ProdavciList::~ProdavciList() //�������� ���� ������ � �����������
{
	while (!setPtrsSotr.empty())
	{
		iter = setPtrsSotr.begin();
		delete *iter;
		setPtrsSotr.erase(iter);
	}
}


void ProdavciList::insertSotr(Sotrydniki* ptrP) {  //���������� id 
	setPtrsSotr.push_back(ptrP);
}

void ProdavciList::display()     //����������� ������� ������� �������

{
	system("cls");
	cout << "\nID ��������         |��� ��������             |���������                |    ���� �������        \n";
	cout << "------------------------------------------------------------------------------------------------\n";
	if (setPtrsSotr.empty())  //���� ������ ������
		cout << "---�� ���� ������---\n" << endl;
	else
	{
		iter = setPtrsSotr.begin();
		while (iter != setPtrsSotr.end()) //������� ��� ������ �������
		{
			cout << setw(15) << (*iter)->getNumber() << "    |     " << std::setw(15) << (*iter)->getFio() << "    |     " << std::setw(15) << (*iter)->getKat() << "    |     " << std::setw(15) << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}