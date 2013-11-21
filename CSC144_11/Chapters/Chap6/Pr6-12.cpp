// This program uses a function to perform division. If division
// by zero is detected, the function returns.

#include <iostream.h>

// Function prototype.
void divide(float, float);

void main(void)
{
	float num1, num2;

	cout << "Enter two numbers and I will divide the first\n";
	cout << "number by the second number: ";
	cin >> num1 >> num2;
	divide(num1, num2);
}

//*****************************************************************
// Definition of function divide.                                 *
// Uses two parameters: arg1 and arg2. The function divides arg1  *
// by arg2 and shows the result. If arg2 is zero, however, the    *
// function returns.                                              *
//*****************************************************************

void divide(float arg1, float arg2)
{
	if (arg2 == 0.0)
	{
		cout << "Sorry, I cannot divide by zero.\n";
		return;
	}
	cout << "The quotient is " << (arg1 / arg2) << endl;
}

