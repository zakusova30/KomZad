//// КЛАСС ПРОДАВЦОВ /////////
#ifndef SOTRYDNIKI_H   
#define SOTRYDNIKI_H
#include <string> 
using namespace std;

class Sotrydniki // класс продавца
{
private:
	string number;   // id - продавца
	string fio;     //фио продавца
	string katprod; //категория продавца
	string date;  //дата смены

public:
	Sotrydniki(string n, string f, string k, string d);
	~Sotrydniki();
	string getNumber(); //получение id
	string getFio();//получение фио продавца
	string getKat();//получение категории продавца
	string getDate();//получение даты сменя
};
#endif 