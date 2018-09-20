#include <string>
#include <iostream>
using namespace std;

int main();

{
	int age;
	string stringAnswer;
	cout << "What is your age ? >>> ";
	cin >> age;

	if (age <= 12) {
		stringAnswer = "You are a minor ";
	}
	else if (age > 13 && age <= 18) {
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
			stringAnswer = "I got rejected ";
		}

	}

	cout << stringAnswer << endl;
	system("pause");

	return 0;
}