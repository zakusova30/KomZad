#include "stdafx.h" 
#include "Interface.h" 
#include <iostream>

Interface::Interface() //����������� 
{
	ptrProdavciList = new ProdavciList; // �������� ��������� ���� �� ������ /// ����� ����� ���������
	ptrIncomeRecord = new IncomeRecord; // ������ �������
	ptrExpenseRecord = new ExpenseRecord; // ������ ��������

}

Interface::~Interface() // ����������
{
	delete ptrProdavciList;
	delete ptrIncomeRecord;
	delete ptrExpenseRecord;

}

void Interface::menu()  //����������� ����
{
	do // ���� ������������ ������ ������
	{
		ptrTheFirstScreen = new TheFirstScreen(ptrProdavci);
		ptrTheFirstScreen->inicial();     //��������� � ������ ����� ������ � ������

		system("cls");

		if (ptrTheFirstScreen->getprava() == 3) cout << "��������� ������������� ��� ������\n"; //������������������ ������������
	} while (ptrTheFirstScreen->getprava() == 3);

	h = -1;
	while (true)
	{

		cout << "\n";
		cout << "/����/\n";
		cout << "/////////////////////////// \n";
		cout << "/1 - ������ ������  / \n";
		if (ptrTheFirstScreen->getprava() == 1) cout << "/2 - ������� ������/ \n";  //���������� ��� ���� ������ ���� ��� ��������
		cout << "/0 - �����        / \n";
		cin >> pr;
		if (pr == '1'){
			system("cls");
			cout << "\n";
			cout << "/ ���� - ������ ������/ \n";
			cout << "///////////////////////\n";
			cout << "/1 - ������ �������  /\n";
			cout << "/2 - �������� ������� /\n";
			if (ptrTheFirstScreen->getprava() == 1) cout << "/0 - ������ ������ �� ������ ����������� /\n";
			
				cin >> h;
	
			switch (h)
			{

			case '1': 
				system("cls"); 
				ptrIncomeInputScreen = new IncomeInputScreen(ptrIncomeRecord);
				ptrIncomeInputScreen->setIncome();

				delete ptrIncomeInputScreen;
				break;
			case '2': system("cls"); 
				ptrExpenseInputScreen = new ExpenseInputScreen(ptrExpenseRecord);
				ptrExpenseInputScreen->setExpense();
				delete ptrExpenseInputScreen;
				break;
			case '0':  ptrProdaza = new Prodaza(ptrProdavciList);
				ptrProdaza->prodazaProd();
				delete ptrProdaza;
				break;
			default: cout << "������ �����\n";
				break;
		}
		}
		else if (pr == '2')       //���� ������ ������
		{
			if (ptrTheFirstScreen->getprava() == 1)  // �������� ���� ��������
			{
				system("cls");
				cout << "\n";
				cout << "/ ���� - ������� ������       /\n";
				cout << "//////////////////////////////\n";
				cout << "/1 - ������� �����������    /\n";
				cout << "/2 - ������� �������       /\n";
				cout << "/3 - ������� ��������     /\n";
				cout << "/4 - ������� �����       /\n";

				cin >> pr;
				system("cls");
				switch (pr)
				{

				case '1': system("cls"); 
					ptrProdavciList->display();
					break;
				case '2':system("cls"); 
					ptrIncomeRecord->display();
					break;
				case '3': system("cls"); 
					ptrExpenseRecord->display();
					break;
				case '4':system("cls"); 
					ptrAnnualReport = new AnnualReport(ptrIncomeRecord, ptrExpenseRecord);
					ptrAnnualReport->display();
					delete ptrAnnualReport;
					break;
				default: cout << "������ �����\n";
					break;
				}

			}
		}
		else if (pr == 3){
			ptrTheFirstScreen = new TheFirstScreen(ptrProdavci);
			ptrTheFirstScreen->inicial();
		}

		else if (pr == '0')  //����� �� ���������
			return;
		else     cout << "������ �����\n";
	}
	delete ptrProdaza;
 }
