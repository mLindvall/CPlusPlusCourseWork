// This program demonstrates that changes to a function parameter
// have no affect on the original argument.

#include <iostream.h>

// Function Prototype
void changeThem(int, float);

void main(void)
{
	int whole = 12;
	float real = 3.5;

	cout << "In main the value of Whole is " << whole << endl;
	cout << "and the value of real is " << real << endl;
	changeThem(whole, real);	// Call changeThem with 2 arguments
	cout << "Now back in main again, the value of ";
	cout << "whole is " << whole << endl; 
	cout << "and the value of real is " << real << endl;
}

//*************************************************************
// Definition of function changeThem.                         *
// It uses i, an int parameter, and f, a float. The values of *
// i and f are changed and then displayed.                    *
//*************************************************************

void changeThem(int i, float f)
{
	i = 100;
	f = 27.5;	
	cout << "In changeThem the value of i is changed to ";
	cout << i << endl;
	cout << "and the value of f is changed to " << f << endl;
}

