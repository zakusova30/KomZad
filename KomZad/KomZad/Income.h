#ifndef INCOME_H    
#define INCOME_H   
#include <string> 
using namespace std;
class Income //����� �������
{
private:
	string id; //id ��������
	float priceTov; //��������� �������
	float priceService; //��������� ������
	string datePrice;//���� ������
public:
	Income(string, float, float, string);
	float getPriceTov(); //�������� ��������� ������
	string getID();      //�������� ID
	float getPriceService();
	string getDate();
};
#endif