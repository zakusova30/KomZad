//////// ����� ����� ����������� �� ����� /////
#ifndef PRODAZA_H   
#define PRODAZA_H  
#include <string> 
#include "ProdavciList.h"
using namespace std;

class Prodaza  
{
private:
	ProdavciList* ptrProdavciList; //��������� �� ������ �����������
	string Number;     // id - ��������
	string fio;
	string dol; // ��� ���������
	string zp;
public:
	Prodaza(ProdavciList* ptrPL) : ptrProdavciList(ptrPL)
	{
	}
	void prodazaProd(); 
};
#endif 