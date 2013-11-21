//	This program reads two strings into two character arrays.

#include <iostream.h>

void main(void)
{
	char first[16], last[16];

	cout << "Enter your first and last names and I will\n";
	cout << "reverse them.\n"; 
	cin >> first >> last;
	cout << last << ", " << first << endl;
}
