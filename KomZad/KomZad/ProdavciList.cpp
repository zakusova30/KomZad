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
	cout << "\nID ��������        |��� ��������            |���������               |    ���� �������        \n";
	cout << "------------------------------------------------------------------------------------------------\n";
	if (setPtrsSotr.empty())  //���� ������ ������
		cout << "---�� ���� ������---\n" << endl;
	else
	{
		iter = setPtrsSotr.begin();
		while (iter != setPtrsSotr.end()) //������� ��� ������ �������
		{
			cout << setw(19) << (*iter)->getNumber() << "    |     " << std::setw(19) << (*iter)->getFio() << "    |     " << std::setw(19) << (*iter)->getKat() << "    |     " << std::setw(19) << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}