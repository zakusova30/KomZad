//// ����� ��������� /////////
#ifndef SOTRYDNIKI_H   
#define SOTRYDNIKI_H
#include <string> 
using namespace std;

class Sotrydniki // ����� ��������
{
private:
	string number;   // id - ��������
	string fio;     //��� ��������
	string katprod; //��������� ��������
	string date;  //���� �����

public:
	Sotrydniki(string n, string f, string k, string d);
	~Sotrydniki();
	string getNumber(); //��������� id
	string getFio();//��������� ��� ��������
	string getKat();//��������� ��������� ��������
	string getDate();//��������� ���� �����
};
#endif 