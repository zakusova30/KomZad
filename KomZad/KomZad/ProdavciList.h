/// КЛАСС СПИСКА ПРОДАВЦОВ /////////////
#ifndef PRODAVCILIST_H   
#define PRODAVCILIST_H  
#include <list> 
#include "Sotrydniki.h"

class ProdavciList //список id - продавцов
{
private:
	list <Sotrydniki*> setPtrsSotr;   // контейнер список продавцов
	list <Sotrydniki*>::iterator iter; //итератор

public:  ~ProdavciList(); 
		 void insertSotr(Sotrydniki*); //внесение продавца в список
		 void display();    //отображение на экране      
};

#endif 