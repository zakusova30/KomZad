#ifndef PRODAZA_H   
#define PRODAZA_H  
#include <string> 
#include "ProdavciList.h"
using namespace std;

class Prodaza  // класс продажи 
{
private:
	ProdavciList* ptrProdavciList; //указатель на список продавцов
	string Number;     // id - продавца
	string Vid; //Вид товара
	string Service; // Вид услуги
	string Date; //Дата обращения
public:
	Prodaza(ProdavciList* ptrPL) : ptrProdavciList(ptrPL)
	{
	}
	void prodazaProd(); // продажа товара
};
#endif 