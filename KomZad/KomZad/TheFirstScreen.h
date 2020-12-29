////////////////////////  ЭКРАН АВТОРИЗАЦИИ  ////////////////
#pragma once
#ifndef THEFIRSTSCREEN_H   
#define THEFIRSTSCREEN_H
#include "Prodavci.h"

class TheFirstScreen
{
private:
	Prodavci* ptrname; //указатель на использующего
	char username1; //идентификатор
	string password1;  // пароль
	int prava; // право доступа

public:
	TheFirstScreen(Prodavci* ptrPC) : ptrname(ptrPC){} // конструктор
	int getprava(); // получить номер права доступа
	void inicial(); //ввод пользователя
};

#endif 