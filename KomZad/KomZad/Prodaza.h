#ifndef PRODAZA_H   
#define PRODAZA_H  
#include <string> 
#include "ProdavciList.h"
using namespace std;

class Prodaza  // ����� ������� 
{
private:
	ProdavciList* ptrProdavciList; //��������� �� ������ ���������
	string Number;     // id - ��������
	string Vid; //��� ������
	string Service; // ��� ������
	string Date; //���� ���������
public:
	Prodaza(ProdavciList* ptrPL) : ptrProdavciList(ptrPL)
	{
	}
	void prodazaProd(); // ������� ������
};
#endif 