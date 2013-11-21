// This program stores, in an array, the hours worked by 5
// employees who all make the same hourly wage. It then
// displays the gross pay, including any overTime.

#include <iostream.h>

// Constant for defining the array size.
const int numEmps = 5;

void main(void)
{
	int hours[numEmps];
	float payRate;

	cout << "Enter the hours worked by " << numEmps << " employees who all\n";
	cout << "earn the same hourly rate.\n";
	for (int index = 0; index < 5; index++)
	{
		cout << "Employee #" << (index + 1) << ": ";
		cin >> hours[index];
	}
	cout << "Enter the hourly pay rate for all the employees: ";
	cin >> payRate;
	cout << "Here is the gross pay for each employee:\n";
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	for (index = 0; index < 5; index++)
	{
        float grossPay, overTime;
		if (hours[index] > 40)
		{    
			// Calculate pay for 40 hours.
			grossPay = 40 * payRate; 
			// Calculate overTime pay.
			overTime = (hours[index] - 40) * 1.5 * payRate;
			// Add regular pay and overTime pay.
			grossPay += overTime;
		}
		else
			grossPay = hours[index] * payRate;
		cout << "Employee #" << (index + 1);
		cout << ": $" << grossPay << endl;
	}
}
