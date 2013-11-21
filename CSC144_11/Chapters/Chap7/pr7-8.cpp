// This program has a partially initialized array.

#include <iostream.h>


void main(void)
{
	int numbers[7] = {1, 2, 4, 8}; // Initialize the first 4
	                               // elements.

	cout << "Here are the contents of the array:\n";
	for (int index = 0; index < 7; index++)
		cout << numbers[index] << endl;
}
