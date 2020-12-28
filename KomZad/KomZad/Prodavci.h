//////////////////////  »Ќ»÷»јЋ»«ј÷»я ѕќЋ№«ќ¬ј“≈Ћя   /////////////////

#ifndef PRODAVCI_H   
#define PRODAVCI_H 
#include <string> 
using namespace std;

class Prodavci // класс пользовател€
{
private:
	char username; //идентификатор пользовател€
	string password;  //пароль
public:
	Prodavci(char u, string p); // конструктор с параметрами
	~Prodavci(); // деструктор
	int avtorizaciya(char u, string p);  // получение доступа

};

#endif