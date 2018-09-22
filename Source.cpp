#include <string>
#include <iostream>
using namespace std;

int main()
{
	int age;
	string stringAnswer;
	string college;
	
	cout << "What is your age ? >>> ";
	cin >> age;

	if (age <= 12)
	{
		stringAnswer = "You are a minor ";
	}
	else if (age > 13 && age <= 18) 
	{
		stringAnswer = "You are cool! ";
	}
	else if (age > 18 && age <= 25) {
		cout << "Did you go to college ? yes or no >>>";
		cin >> college;
		
		if (college == "Yes")
		{
			stringAnswer = "I'm in debt ";
		}
		else
		{
			stringAnswer = "You are a bum.";
		}
		cout << stringAnswer << endl;
	}
	
	system ("pause");
	return 0;
}