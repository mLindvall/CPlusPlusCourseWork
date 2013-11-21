// This program demonstrates how floating point round-off
// errors can make equality comparisons unreliable.

#include <iostream.h>

void main(void)
{
	float result;

	result = 6.0 * 0.666666;
	if (result == 4)
		cout << "It's true!";
    else
		cout << "It's false!";
}
