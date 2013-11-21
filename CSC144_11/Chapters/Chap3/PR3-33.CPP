
// This program demonstrates random numbers.

#include <iostream.h>
#include <stdlib.h>

void main(void)
{
	unsigned seed;

	cout << "Enter a seed value: ";
	cin >> seed;
	srand (seed);
	cout << rand () << endl;
	cout << rand () << endl;
	cout << rand () << endl;
}
