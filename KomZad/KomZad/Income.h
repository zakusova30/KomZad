#ifndef INCOME_H    
#define INCOME_H   
#include <string> 
using namespace std;
class Income //Класс доходов
{
private:
	string id; //id продавца
	float priceTov; //стоимость товаров
	float priceService; //стоимость услуги
	string datePrice;//дата оплаты
public:
	Income(string, float, float, string);
	float getPriceTov(); //получить стоимость товара
	string getID();      //получить ID
	float getPriceService();
	string getDate();
};
#endif