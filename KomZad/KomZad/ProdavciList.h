/// КЛАСС СПИСКА СОТРУДНИКОВ НА СМЕНЕ /////////////
#ifndef PRODAVCILIST_H   
#define PRODAVCILIST_H  
#include <list> 
#include "Sotrydniki.h"

class ProdavciList //список id 
{
private:
	list <Sotrydniki*> setPtrsSotr;   // контейнер список сотрудников
	list <Sotrydniki*>::iterator iter; //итератор

public:  ~ProdavciList(); 
		 void insertSotr(Sotrydniki*); //внесение сотрудников в список
		 void display();    //отображение на экране      
};

#endif 