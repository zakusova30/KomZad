/////////////  ����� ��������  /////////////////////
#ifndef EXPENSE_H  
#define EXPENSE_H 
#include <string> 
using namespace std;

class Expense //����� ��������
{
public:
	string category; //��������� ������  ��� ������
	string org;    //�������� �����������        
	string datePay;  //���� ������
	float sum;   //����� ������
	Expense(){}
	Expense(string c, string o, string d, float s) : category(c), org(o), datePay(d), sum(s) // ����������� � �����������
	{
	}
};
#endif