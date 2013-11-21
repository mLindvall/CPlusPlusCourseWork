/*
	Written by Michael Lidnvall
	Program page 245 problem 1
	Date: Feb. 27, 06
*/

#include <iostream.h>
#include <math.h>
#include <iomanip.h>

void main(void)

{
	int Number1, Number2, min, max;

/*
	cout << "Enter first whole number: ";
	cin >> Number1;
	cout << "Enter second whole number: ";
	cin >> Number2;

	if (Number1 < Number2)
		cout << Number1 << " is smaller than " << Number2 << endl;
	else
		if (Number1 > Number2)
			cout << Number1 << " is greater then " << Number2 << endl;
		else
			cout << Number1 << " is equal to " << Number2 << endl;
*/


			// Another way of doing if statements
		
	min = Number1 > Number2 ? Number1 : Number2;
	max = Number1 < Number2 ? Number1 : Number2;
	equal = Number1 == Number2 ? Number1 : Number2;

	//Display results
	cout << "The smaller of the two is " << min << endl;
	cout << "The greater of the two is " << max << endl;
	
}