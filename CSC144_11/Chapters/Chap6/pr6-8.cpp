// This program demonstrates a function with three parameters.

#include <iostream.h>

// Function Prototype
void showSum(int, int, int);

void main(void)
{
	int value1, value2, value3;

	cout << "Enter three integers and I will display ";
	cout << "their sum: ";
	cin >> value1 >> value2 >> value3;
	showSum(value1, value2, value3);	// Call showSum with
 									    // 3 arguments
}

//*************************************************************
// Definition of function showSum.                            *
// It uses three integer parameters. Their sum is displayed.  *
//*************************************************************

void showSum(int num1, int num2, int num3)
{
	cout << (num1 + num2 + num3) << endl;
}

