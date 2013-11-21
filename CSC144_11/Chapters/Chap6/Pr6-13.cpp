// This program uses a function that returns a value.
#include <iostream.h>

//Function prototype
int square(int);

void main(void)
{
	int value, result;
	cout << "Enter a number and I will square it: ";
	cin >> value;
	result = square(value);
	cout << value << " squared is " << result << endl;
}
//******************************************************
// Definition of function square.                      *
// This function accepts an int argument and returns   *
// the square of the argument as an int.               *
//******************************************************

int square(int number)
{
	return number * number;
}
