// This program stores, in two arrays, the hours worked by 5
// employees, and their hourly pay rates.

#include <iostream.h>
#include <vector>
using namespace std;

void main(void)
{
	vector<int> hours;      // hours is an empty vector
	vector<float> payRate;  // payRate is an empty vector
	int numEmployees;       // The number of employees

	cout << "How many employees do you have? ";
	cin >> numEmployees;
	cout << "Enter the hours worked by " << numEmployees;
	cout << " employees and their hourly rates.\n";
	for (int index = 0; index < numEmployees; index++)
	{
		int tempHours;	// To hold the number of hours entered
		float tempRate;	// To hold the payrate entered

		cout << "Hours worked by employee #" << (index + 1);
		cout << ": ";
		cin >> tempHours;
		hours.push_back(tempHours);	// Add an element to hours
		cout << "Hourly pay rate for employee #";
		cout << (index + 1) << ": ";
		cin >> tempRate;
		payRate.push_back(tempRate);	// Add an element to payRate
	}
	cout << "Here is the gross pay for each employee:\n";
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	for (index = 0; index < numEmployees; index++)
	{
        float grossPay = hours[index] * payRate[index];
		cout << "Employee #" << (index + 1);
		cout << ": $" << grossPay << endl;
	}
}
