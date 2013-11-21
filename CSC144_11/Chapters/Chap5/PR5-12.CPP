// This program takes daily sales figures for one week
// and calculates their total.

#include <iostream.h>

void main(void)
{
	const int days = 7;
	int count;
	float total;

	for (count = 1, total = 0.0; count <= days; count++)
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
