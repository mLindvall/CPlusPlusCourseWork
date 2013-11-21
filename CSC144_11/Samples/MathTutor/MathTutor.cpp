/*
	Written by Michael Lidnvall
	Feb. 15, 2006
	Math Tutor p 162
*/

#include <iostream.h>
#include <iomanip.h>
#include <stdlib.h>
#include <ctime>

void main(void)

{
	unsigned	seed;
	int no1, no2, no3, no4;

	//cout << "Please hit number for a random problem: ";
	//cin >> seed;

	//prompt user to begin program
	srand(time(0));
	//srand(seed);

	no1 = 1 + rand() % 500;
	no2 = 1 + rand() % 500;
	
	cout.setf(ios::right);
	cout << "  " << no1 << endl;
	cout << " +" << no2 << endl;
	cout << "------" << endl;

	no4 = no1 + no2;
	cout << "  ";
	cin >> no3;
	cout << "\n  " << no4 << endl;

	if (no3==no4)
		cout << "\nCongrats....You got it!!!" <<endl;
	else
		cout <<"\nSorry the correct answer was " << no4 << "." << endl;

}
