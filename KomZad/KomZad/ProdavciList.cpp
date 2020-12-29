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
	cout << "\nID продавца        |Фио продавца            |Должность               |    Дата покупки        \n";
	cout << "------------------------------------------------------------------------------------------------\n";
	if (setPtrsSotr.empty())  //если список пустой
		cout << "---Не было продаж---\n" << endl;
	else
	{
		iter = setPtrsSotr.begin();
		while (iter != setPtrsSotr.end()) //вывести все строки таблицы
		{
			cout << setw(19) << (*iter)->getNumber() << "    |     " << std::setw(19) << (*iter)->getFio() << "    |     " << std::setw(19) << (*iter)->getKat() << "    |     " << std::setw(19) << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}