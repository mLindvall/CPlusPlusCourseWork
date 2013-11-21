// This program calculates a consultant's charges at $50 
// per hour, for a minimum of 5 hours. The ?: operator
// adjusts Hours to 5 if less than 5 hours were worked.

#include <iostream.h>

void main(void)
{
	const float payRate = 50.0;
	float hours, charges;

	cout << "How many hours were worked? ";
	cin >> hours;
	hours = hours < 5 ? 5 : hours;
	charges = payRate * hours;
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	cout << "The charges are $" << charges << endl;
}
