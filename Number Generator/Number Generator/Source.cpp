#include <string>
#include <iostream>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
using namespace std;

int main()
{
	int numberGuess;
	int secretGuess;
	string result;


	cout << " Welcome to the number generator.\n ";
	cout << " This is where you get to pick a number from 1 to 100 ";
	cin >> numberGuess;
	do {
		srand(time(NULL));
		secretGuess = rand() % 99 + 1;
		
		cout << " Pick a number from 1 to 100: ";
		if (numberGuess < secretGuess)
		{
			result = "The number is too low";
		}
		else if (numberGuess > secretGuess)
		{
			result = "the number is too high";
		}
		
		
	} while (numberGuess != secretGuess);
	
	cout << "That's impossible " << result << endl;
	system("pause");
	return 0;
}