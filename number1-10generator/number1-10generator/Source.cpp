#include <iostream>
#include <string>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
using namespace std;

int main()
{
	int numberChoice;
	int secret;
	string result;
	int count = 0;
	srand(time(NULL));
	secret = rand() % 10 + 1;

	cout << " Welcome to the number generator.\n ";
	do {
		cout << " This is where you get to pick a number from 1 to 10 and type it. ";
		cin >> numberChoice;
		cout << " Pick a number from 1 to 10: ";
		if (numberChoice < secret)
		{
			result = "The number is low";
		}
		else if (numberChoice > secret)
		{
			result = "the number is high";
		}
		cout << result << endl;
		count++;
	} while (numberChoice != secret);

	cout << "Number of guesses was " << count << endl;
	system("pause");
	return 0;
}


