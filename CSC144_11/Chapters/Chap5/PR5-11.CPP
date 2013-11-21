// This program displays the numbers 1 through 10 and 
// their squares.

#include <iostream.h>

void main(void)
{
	int num;

	cout << "Number     Number Squared\n";
	cout << "-------------------------\n";

	for (num = 1; num <= 10; num++)
		cout << num << "\t\t" << (num * num) << endl;

	cout << "\nnum is " << num << endl;
}

