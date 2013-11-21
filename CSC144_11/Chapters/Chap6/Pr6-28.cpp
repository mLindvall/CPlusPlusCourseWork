// This program uses overloaded functions.

#include <iostream.h>

// Function prototypes
int square(int);
float square(float);

void main(void)
{
	int userInt;
	float userFloat;

	cout.precision(2);
	cout << "Enter an integer and a floating-point value: ";
	cin >> userInt >> userFloat;
	cout << "Here are their squares: ";
	cout << square(userInt) << " and " << square(userFloat);
}

//*****************************************************************
// Definition of overloaded function square.                      *
// This function uses an int parameter, number. It returns the    *
// square of number as an int.                                    *
//*****************************************************************

int square(int number)
{
	return number * number;
}

//*****************************************************************
// Definition of overloaded function square.                      *
// This function uses a float parameter, number. It returns the   *
// square of number as a float.                                   *
//*****************************************************************

float square(float number)
{
	return number * number;
}
