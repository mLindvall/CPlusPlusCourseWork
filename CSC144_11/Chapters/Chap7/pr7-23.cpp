// This program stores, in two vectors, the hours worked by 5
// employees, and their hourly pay rates.

#include <iostream.h>
#include <vector>	// Needed to declare vectors
using namespace std;

void main(void)
{
	vector<int> hours(5);      // Declare a vector of 5 integers
	vector<float> payRate(5);  // Declare a vector of 5 floats

	cout << "Enter the hours worked by 5 employees and their\n";
	cout << "hourly rates.\n";
	for (int index = 0; index < 5; index++)
	{
		cout << "Hours worked by employee #" << (index + 1);
		cout << ": ";
		cin >> hours[index];
		cout << "Hourly pay rate for employee #";
		cout << (index + 1) << ": ";
		cin >> payRate[index];
	}
	cout << "Here is the gross pay for each employee:\n";
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	for (index = 0; index < 5; index++)
	{
        	float grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1);
		cout << ": $" << grossPay << endl;
	}
}

