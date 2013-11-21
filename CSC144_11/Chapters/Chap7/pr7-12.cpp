// This program stores, in two arrays, the hours worked by 5
// employees, and their hourly pay rates.

#include <iostream.h>

// Constant for defining the array size.
const int numEmps = 5;

void main(void)
{
	int hours[numEmps];
	float payRate[numEmps];

	cout << "Enter the hours worked by " << numEmps << " employees and their\n";
	cout << "hourly rates.\n";
	for (int index = 0; index < numEmps; index++)
	{
		cout << "hours worked by employee #" << (index + 1);
		cout << ": ";
		cin >> hours[index];
		cout << "Hourly pay rate for employee #";
		cout << (index + 1) << ": ";
		cin >> payRate[index];
	}
	cout << "Here is the gross pay for each employee:\n";
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	for (int index = 0; index < numEmps; index++)
	{
        float grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1);
		cout << ": $" << grossPay << endl;
	}
}
