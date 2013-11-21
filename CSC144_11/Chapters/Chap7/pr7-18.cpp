// This program demonstrates a two-dimensional array.

#include <iostream.h>
#include <iomanip.h>

void main(void)
{
	float sales[3][4];		// 2D array, 3 rows and 4 columns.
	float totalSales = 0;	// To hold the total sales.
	int div, qtr;			// Loop counters.
	
	cout << "This program will calculate the total sales of\n";
	cout << "all the company's divisions.\n";
	cout << "Enter the following sales information:\n\n";


	// Nested loops to fill the array with quarterly
	// sales figures for each division.
	for (div = 0; div < 3; div++)
	{
		for (qtr = 0; qtr < 4; qtr++)
		{
			cout << "Division " << (div + 1);
			cout << ", Quarter " << (qtr + 1) << ": $";
			cin >> sales[div][qtr];
		}
		cout << endl; // Print blank line.
	}

	// Nested loops to add all the elements.
	for (div = 0; div < 3; div++)
		for (qtr = 0; qtr < 4; qtr++)
			totalSales += sales[div][qtr];
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	cout << "The total sales for the company are: $";
	cout << totalSales << endl;
}
