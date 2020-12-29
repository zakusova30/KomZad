//////////////////////  КЛАСС ИНИЦИАЛИЗАЦИИ ПОЛЬЗОВАТЕЛЯ   /////////////////

#ifndef PRODAVCI_H   
#define PRODAVCI_H 
#include <string> 
using namespace std;

class Prodavci 
{
private:
	char username; //идентификатор пользователя
	string password;  //пароль
public:
	Prodavci(char u, string p); // конструктор с параметрами
	~Prodavci(); // деструктор
	int avtorizaciya(char u, string p);  // получение доступа

};

#endif