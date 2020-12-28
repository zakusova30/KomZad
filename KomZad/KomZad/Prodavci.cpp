///////////////////////////// ФАЙЛ РЕАЛИЗАЦИИИ Prodavci.ch  (инициализация пользователя)   ////////////////

#include "stdafx.h" 
#include "Prodavci.h" 

Prodavci::Prodavci(char u, string p) : username(u), password(p)
{
}

Prodavci::~Prodavci() //деструктор
{
}

int Prodavci::avtorizaciya(char u, string p)  //проверка на доступ
{
	if ('a' == u && "1234" == p) return 1; // если входит админ то запросить пароль
	else if ('p' == u && "" == p)  return 2; // если входит продавец, то пароль не требуктся 
	else return 3;
}
