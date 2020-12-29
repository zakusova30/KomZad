/////// ���������� ������ ������ /////
#include "stdafx.h" 
#include "Income.h" 

Income::Income(string i, float t, float s, string p) : id(i), priceTov(t), priceService(s), datePrice(p)
{
}
// �������� ID ��������, �������� ������, ���� � ���� �������
string Income::getID()
{
	return id;
}

string Income::getDate()
{
	return datePrice;
}

float Income::getPriceTov()
{
	return priceTov;
}

float Income::getPriceService()
{
	return priceService;
}