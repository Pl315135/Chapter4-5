#include <iostream>
#include <string>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
using namespace std;

int main()
{
	int numberGuess;
	int secret;
	string result;
	int count = 0;
	srand(time(NULL));
	secret = rand() % 100 + 1;

	cout << " Welcome to the number generator.\n ";
	
	
	
	do {
		cout << " This is where you get to pick a number from 1 to 100 and type it. ";
		cin >> numberGuess;
		cout << " Pick a number from 1 to 100: ";
		if (numberGuess < secret)
		{
			result = "The number is too low";
		}
		else if (numberGuess > secret)
		{
			result = "the number is too high";
		}
		cout << result << endl;
		count++;
	} while (numberGuess != secret);
	
	cout << "Number of guesses was " << count << endl;
	system("pause");
	return 0;
}