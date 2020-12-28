////////////////////// ГЛАВНЫЙ КЛАСС ДЛЯ ЗАПУСКА   /////////////

#ifndef INTERFACE_H   
#define INTERFACE_H 

#include "Prodavci.h" // класс инициализации
#include "TheFirstScreen.h" // вывод на экран "Введите логин и пароль"

class Interface {

private:  // раздел указтелей на таблицы и экраны
	TheFirstScreen* ptrTheFirstScreen;
	Prodavci* ptrProdavci;

public:  // методы 
	Interface(); // конструктор
	~Interface(); // деструктор
	void menu(); //основное меню программы
};

#endif