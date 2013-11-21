/*
	Written by Michael Lindvall
	Program Pennies for Pay on page 303
	March 15, 2006
*/

#include <iostream.h>
#include <iomanip.h>
#include <math.h>

void main(void)

{
	int Days;
	double Sum;
	

	do
	{
		cout << "How many days do you plan on to\n";
		cout << "work for pennies: ";
		cin >> Days;

		if (Days < 1)
			cout << "Amount of days must be greater then one\n\n";
	}
	while (Days < 1);

	cout << "                      Penny\n";
	cout << "Day                   Amount\n";
	cout << "-----------------------------\n";

	float num;

	cout.precision (2);
	cout.setf(ios::fixed | ios::showpoint);

	for (num = 1; num <= Days ; num++)
	{
		Sum = pow(num,2);
		
		cout << num << "\t\t\t" << Sum << endl;
	}

	cout << "-----------------------------\n";

	Sum = Sum / 100;

	cout.precision(2);

	cout << "\nYour total amount for the " << Days << " days is $"; 
	cout.setf(ios::showpoint);
	cout << Sum << endl;
}