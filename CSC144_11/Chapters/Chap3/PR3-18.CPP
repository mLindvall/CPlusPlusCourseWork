//	This program displays three rows of numbers.

#include <iostream.h>
#include <iomanip.h>

void main(void)
{
	int num1 = 2897, num2 = 5,    num3 = 837,
	    num4 = 34,   num5 = 7,    num6 = 1623,
	    num7 = 390,  num8 = 3456, num9 = 12;
	
	// Display the first row of numbers
	cout << setw(4) << num1 << "  ";
	cout << setw(4) << num2 << "  ";
	cout << setw(4) << num3 << endl;

	// Display the second row of numbers
	cout << setw(4) << num4 << "  ";
	cout << setw(4) << num5 << "  ";
	cout << setw(4) << num6 << endl;

	// Display the third row of numbers
	cout << setw(4) << num7 << "  ";
	cout << setw(4) << num8 << "  ";
	cout << setw(4) << num9 << endl;
}
