////////////////////// ������� ����� ��� �������   /////////////

#ifndef INTERFACE_H   
#define INTERFACE_H 

#include "Prodavci.h" // ����� �������������
#include "TheFirstScreen.h" // ����� �� ����� "������� ����� � ������"

class Interface {

private:  // ������ ��������� �� ������� � ������
	TheFirstScreen* ptrTheFirstScreen;
	Prodavci* ptrProdavci;

public:  // ������ 
	Interface(); // �����������
	~Interface(); // ����������
	void menu(); //�������� ���� ���������
};

#endif