// This program unsafely accesses an area of memory by writing
// values beyond an array's boundary.
// WARNING: If you compile and run this program, it could cause
// the computer to crash.

#include <iostream.h>

void main(void)
{
	short values[3];  // An array of 3 integers.

	cout << "I will store 5 numbers in a 3 element array!\n";
	for (int count = 0; count < 5; count++)
		values[count] = 100;
	cout << "If you see this message, it means the computer\n";
	cout << "has not crashed! Here are the numbers:\n";
	for (int count = 0; count < 5; count++)
		cout << values[count] << endl;
}
