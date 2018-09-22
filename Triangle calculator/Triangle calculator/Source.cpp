#include <iostream>
#include <string>

using namespace std;




int equilateralTriangle()
{
	double a;
	double perimeter;
	double area;
	int eTriangle;

	cout << "Are solving for \ n1- perimeter for equilateral triangle \ n2- area for equilateral triangle";
	cin >> eTriangle;
	if (eTriangle == 1)
	{
		cout << "Please enter a number for side A :" << endl;
		cin >> a;
     
		perimeter = 3 * a;
		cout << "The perimeter of the equilateral Triangle is " << perimeter << endl;
	}
	else if (eTriangle == 2)
	{
		cout << "Please enter a number for side A :" << endl;
		
		cin >> a;
		area = sqrt(3) / 4 * (a * a);
		
		cout << "The area of the equilateral triangle is " << area << endl;
	}
	system("pause");
	return 0;
}
int isoscelesTriangle()
{
	double base;
	double height;
	double sideA = 0;
	double area;
	double perimeter;
	int iTriangle;

	cout << "Are solving for \ n1- perimeter for isosceles triangle \ n2- area for isosceles triangle";
	cin >> iTriangle;

	if (iTriangle == 2)
	{
		cout << "Please enter the first side of the triangle :" << endl;
		cin >> base;
		cout << "Enter the second side of the triangle :" << endl;
		cin >> height;
		area = base * height / 2;
		cout << "The area of the isosceles triangle is" << area << endl;
	}
	else if (iTriangle == 1)
	{
		cout << "Please enter the first side of the triangle :" << endl;
		cin >> sideA;
		cout << "Enter the second side of the triangle :" << endl;
		cin >> base;
		perimeter = 2 * sideA + base;
		cout << "the perimeter of the right triangle is " << perimeter << endl;
	}
	system("pause");
	return 0;
}
int rightTriangle() 
{
	double aSide;
	double bSide;
	double cSide=0;
	double perimeter;
	int sideUnknown;
	double area;
	
	
	
	cout << "Are you solving for \n1- for Right Triangle Side C\n2- For Side A\n 3- For side B";
	cin >> sideUnknown;
	
	

	
	if (sideUnknown == 1)//solving for c
	{
		cout << "Please enter the first side :" << endl;
		cin >> aSide;
		cout << "Enter the second side of the triangle :" << endl;
		cin >> bSide;
		cSide = sqrt((aSide*aSide) + (bSide*bSide));
		cout << "The hypotnuse length is : " << cSide << endl;

		cout << "The result is " << cSide << endl;
		perimeter = aSide + bSide + cSide;
		cout << "The perimeter is : " << perimeter << endl;

		cout << "The result is " << cSide << endl;
		area = aSide * bSide / 2;
		cout << "The area is : " << area << endl;
	}
	else if (sideUnknown== 2 || sideUnknown == 3)//solving for b
	{
		cout << "Please enter the side for C :" << endl;
		cin >> cSide;
		cout << "Enter the second side of the triangle :" << endl;
		cin >> bSide;
		
	}
	system("pause");
	return 0;
}
int main()
{


	int triangleChoice;


	cout << "Welcome to my Triangle Calculator\n";
	cout << "What kind of triangle are you looking to solve for? \n";
	cout << "1- for Right/n2- for Isoceles/n3 - for Equalateral";
	cin >> triangleChoice;

	if (triangleChoice == 1) {
		rightTriangle();
	}
	else if (triangleChoice == 2)
	{
		isoscelesTriangle();
	}
	else if (triangleChoice == 3) 
	{
		equilateralTriangle();
	}
	else
		//Thats not an option

	system("pause");
	return 0;

}
