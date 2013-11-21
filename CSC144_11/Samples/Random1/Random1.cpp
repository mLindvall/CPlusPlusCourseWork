/*
	Written by Michael Lindvall
	Feb. 15, 2006
	Chapter 3
	Assignment Random Number
*/

#include <iostream.h>
#include <iomanip.h>
#include <stdlib.h>

void main(void)

{
	unsigned	seed;
	int no1, no2, no3;

	//promt the user to begin the program
	cout << "Key in a number for the seed: ";
	cin >> seed;
	srand(seed);
	
	//Produce random numbers
	no1 = 1 + rand() % 500;
	no2 = 1 + rand() % 500;
	no3 = 1 + rand() % 500;

	cout.setf(ios::right);
	cout << "Random number are: \n";
	cout << setw(7) << no1 << endl;
	cout << setw(7) << no2 << endl;
	cout << setw(7) << no3 << endl;
	
}