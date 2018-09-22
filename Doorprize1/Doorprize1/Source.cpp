#include <string>
#include <iostream>
using namespace std;



int main()
{
	int doorChoice;
	string result;
	
	cout << "Welcome to the door prize.\n";
	cout << "There are three doors to choose from. \n";
	cout << "So pick a door. \n";
	cout << "n1- for first door/ n2- for second door/n3-for third door" << endl;
	cin >> doorChoice;

	if (doorChoice == 1)
	{
		result = "piles of garbage";
	}
	else if (doorChoice == 2)
	{
		result = "piles of Money";
	}
	else if (doorChoice == 3)
	{
		result = "life time supply of food";
	}
	cout << " You got " << result << endl;

	system("pause");
	return 0;
}
