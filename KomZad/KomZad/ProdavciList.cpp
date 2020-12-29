///// РЕАЛИЗАЦИЯ СПИСКА СОТРУДНИКОВ НА СМЕНЕ /////
#include "stdafx.h" 
#include "ProdavciList.h" 
#include <iostream>
#include <iomanip>

ProdavciList::~ProdavciList() //удаление всей памяти о сотрудниках
{
	while (!setPtrsSotr.empty())
	{
		iter = setPtrsSotr.begin();
		delete *iter;
		setPtrsSotr.erase(iter);
	}
}


void ProdavciList::insertSotr(Sotrydniki* ptrP) {  //добавление id 
	setPtrsSotr.push_back(ptrP);
}

void ProdavciList::display()     //отображение таблицы продажи товаров

{
	system("cls");
	cout << "\nID продавца         |Фио продавца             |Должность                |    Дата покупки        \n";
	cout << "------------------------------------------------------------------------------------------------\n";
	if (setPtrsSotr.empty())  //если список пустой
		cout << "---Не было продаж---\n" << endl;
	else
	{
		iter = setPtrsSotr.begin();
		while (iter != setPtrsSotr.end()) //вывести все строки таблицы
		{
			cout << setw(15) << (*iter)->getNumber() << "    |     " << std::setw(15) << (*iter)->getFio() << "    |     " << std::setw(15) << (*iter)->getKat() << "    |     " << std::setw(15) << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}