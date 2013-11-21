//	This program asks for sales figures for 3 days. The total
//	sales is calculated and displayed in a table.

#include <iostream.h>
#include <iomanip.h>

void main(void)
{
	float day1, day2, day3, total;

	cout << "Enter the sales for day 1: ";
	cin >> day1;
	cout << "Enter the sales for day 2: ";
	cin >> day2;
	cout << "Enter the sales for day 3: ";
	cin >> day3;
	total = day1 + day2 + day3;
    cout.precision(2);
    cout.setf(ios::fixed | ios::showpoint);
	cout << "\nSales Figures\n";
	cout << "-------------\n";
	cout << "Day 1: ";
	cout.width(8);
	cout << day1 << endl;
	cout << "Day 2: ";
	cout.width(8);
	cout << day2 << endl;
	cout << "Day 3: ";
	cout.width(8);
	cout << day3 << endl;
	cout << "Total: ";
	cout.width(8);
	cout << total << endl;
}
