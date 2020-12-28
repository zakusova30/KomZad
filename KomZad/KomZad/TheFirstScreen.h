////////////////////////  › –¿Õ ¿¬“Œ–»«¿÷»»  ////////////////
#pragma once
#ifndef THEFIRSTSCREEN_H   
#define THEFIRSTSCREEN_H
#include "Prodavci.h"

class TheFirstScreen
{
private:
	Prodavci* ptrname;
	char username1;
	string password1;
	int prava;

public:
	TheFirstScreen(Prodavci* ptrPC) : ptrname(ptrPC){}
	void inicial();
};

#endif 