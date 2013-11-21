// This program takes daily sales figures over a period of time
// and calculates their total.

#include <iostream.h>

void main(void)
{
	int days, count = 0;
	float total = 0.0;

	cout << "For how many days do you have sales figures? ";
	cin >> days;
	while (count++ < days)
	{
		float sales;
		cout << "Enter the sales for day " << count << ": ";
		cin >> sales;
		total += sales;
	}
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	cout << "The total sales are $" << total << endl;
}
