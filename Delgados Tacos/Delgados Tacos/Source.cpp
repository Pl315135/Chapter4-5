#include <iostream>
#include <string>
using namespace std;

int main()
{

	int choice;
	double tacoOrder = 2.00;
	double burritoOrder = 2.00;
	double nachoOrder = 2.00;
	double tamalesOrder = 2.00;
	double churroOrder = 2.00;
	double totalBill;
	

	cout << "//////////////////////////////////////////////////////////////" << endl;
	cout << "/                                                           /" << endl;
	cout << "/                                                           /" << endl;
	cout << "/                                                           /" << endl;
	cout << "/                                                           /" << endl;
	cout << "/                                                           /" << endl;
	cout << "/                                                           ///////////////////" << endl;
	cout << "/                                                           /                 /" << endl;
	cout << "///////////////////////////////////////////////////////////////////////////////" << endl;
	cout << "/0000000/                                                             /00000000/" << endl;

	cout << "Welcome to Delgados Tacos/n" << endl;
	cout << "Please enter your order here/n: " << endl;
	cout << "1-tacos = $2.00 / 2-burritos = $2.00 / 3-nachos = $2.00 / 4-churro = $1.00 / 5-churro = $2.00";
	cin >> choice;
	
	if (choice == 1)
	{
		totalBill = tacoOrder;
		cout << "The total bill is " << tacoOrder << endl;
	}
	else if (choice == 2)
	{
		totalBill = burritoOrder;
		cout << "The total bill is " << burritoOrder << endl;
	}
	else if (choice == 3)
	{
		totalBill = nachoOrder;
		cout << "The total bill is " << nachoOrder << endl;
	}
	else if (choice == 4)
	{
		totalBill = tamalesOrder;
		cout << "The total bill is " << tamalesOrder << endl;
	}
	else if (choice == 5)
	{
		totalBill = churroOrder;
		cout << "The total bill is " << totalBill << endl;
	}


system("pause");
return 0;
}



