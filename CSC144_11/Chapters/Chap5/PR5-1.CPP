// This program demonstrates the increment and decrement
// operators.

#include <iostream.h>

void main(void)
{
	int bigVal = 10, smallVal = 1;

	cout << "BigVal is " << bigVal 
	     << " and SmallVal is " << smallVal << endl;
	smallVal++;
	bigVal--;
	cout << "BigVal is " << bigVal 
	     << " and SmallVal is " << smallVal << endl;
	++smallVal;
	--bigVal;
	cout << "BigVal is " << bigVal 
	     << " and SmallVal is " << smallVal << endl;
}
