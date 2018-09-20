#include <string>
#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	double c = 7.81;
	double perimeter;

	cout << "Enter the first side" << endl;
	cin >> a;
	cout << "Enter the second side" << endl;
	cin >> b;
	cout << "Enter the third side" << endl;
	cin >> c;

	perimeter = a + b + c;

	cout << "The perimeter of the triangle is " << perimeter << endl;
	
	system("pause");
	return 0;


}