// This program asks for the lengths of the two sides of a
// right triangle. The length of the hypotenuse is then 
// calculated and displayed.

#include <iostream.h>
#include <math.h>       // For sqrt

void main(void)
{
	float a, b, c;

	cout << "Enter the length of side A: ";
	cin >> a;
	cout << "Enter the length of side B: ";
	cin >> b;
	c = sqrt(pow(a, 2.0) + pow(b, 2.0));
	cout.precision(2);
	cout << "The length of the hypotenuse is ";
	cout << c << endl;
}

