// This program stores, in an array, the hours worked by 5
// employees who all make the same hourly wage.

#include <iostream.h>

void main(void)
{
	int hours[5];
	float grossPay[5];
	float payrate[5];

	cout << "Enter the hours worked by 5 employees who all\n";
	cout << "earn the same hourly rate.\n";
	
	//Input
	for (int index = 0; index < 5; index++)
	{
		cout << "Employee #" << (index + 1) << ": ";
		cin >> hours[index];
	}
	for (index = 0; index < 5; index++)
	{
		cout << "Enter the hourly pay rate for employee " << index + 1 << ": ";
		cin >> payrate[index];
	}
		cout << "\n\nHere is the gross pay for each employee:\n";
	
	
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);

	//Processing (Calculation)
	for (index = 0; index < 5; index++)
	{
        grossPay[index] = hours[index] * payrate[index];
	}

	//Output
	for (index = 0; index < 5; index++)
	{
		cout << "Employee #" << (index + 1);
		cout << ": $" << grossPay[index] << endl;
	}
}

