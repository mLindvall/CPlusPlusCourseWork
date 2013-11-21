// This program uses the return value of the square function 
// in a mathematical statement.

#include <iostream.h>
#include <iomanip.h>

//Function prototypes
float getRadius(void);
float square(float);

void main(void)
{
	const float pi = 3.14159;
	float rad;

	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);	
	cout << "This program calculates the area of ";
	cout << "a circle.\n";
	rad = getRadius();
	cout << "The area is " << pi * square(rad) << endl;
}

//**********************************************************
// Definition of function getRadius.                       *
// This function asks the user to enter the radius of      *
// the circle and then returns that number as a float.     *
//**********************************************************

float getRadius(void)
{
	float radius;

	cout << "Enter the radius of the circle: ";
	cin >> radius;
	return radius;
}
 	
//**********************************************************
// Definition of function square.                          *
// This function accepts a float argument and returns      *
// the square of the argument as a float.                  *
//**********************************************************

float square(float number)
{
	return number * number;
}
