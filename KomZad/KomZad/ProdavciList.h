/// ����� ������ ����������� �� ����� /////////////
#ifndef PRODAVCILIST_H   
#define PRODAVCILIST_H  
#include <list> 
#include "Sotrydniki.h"

class ProdavciList //������ id 
{
private:
	list <Sotrydniki*> setPtrsSotr;   // ��������� ������ �����������
	list <Sotrydniki*>::iterator iter; //��������

public:  ~ProdavciList(); 
		 void insertSotr(Sotrydniki*); //�������� ����������� � ������
		 void display();    //����������� �� ������      
};

#endif 