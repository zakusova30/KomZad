///////////////////////////// ���� ����������� Prodavci.ch  (������������� ������������)   ////////////////

#include "stdafx.h" 
#include "Prodavci.h" 

Prodavci::Prodavci(char u, string p) : username(u), password(p)
{
}

Prodavci::~Prodavci() //����������
{
}

int Prodavci::avtorizaciya(char u, string p)  //�������� �� ������
{
	if ('a' == u && "1234" == p) return 1; // ���� ������ ����� �� ��������� ������
	else if ('p' == u && "" == p)  return 2; // ���� ������ ��������, �� ������ �� ��������� 
	else return 3;
}
