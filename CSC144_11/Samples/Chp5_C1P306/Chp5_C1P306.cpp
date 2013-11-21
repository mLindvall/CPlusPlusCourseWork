/*
	Written by Michael Lindvall
	Program:		Sum of Number on page 303
	Date: March 8th 2006
			revised March 15, 2006
*/


#include <iostream.h>

void main(void)

{
	int x, a, sum;
	sum = 0;

	cout << "Please enter a positive integer number to start: ";
	cin >> a;
	do
	{
		if (a < 1)
		{
			cout << "\nPlease try again and enter a positive\n";
			cout << "integers greater then zero!\n\n";
			cout << "Please enter a positive integer number to start: ";
			cin >> a;
		}
	}
	while (a < 1 );

	cout << "\nPlease enter a positive integer number to end: ";
	cin >> x;
	do
	{
		if (x < 1)
		{
			cout << "\nPlease try again and enter a positive\n";
			cout << "integers greater then zero!\n\n";
			cout << "Please enter a positive integer number to end: ";
			cin >> x;
		}
		else if (x < a)
		{
			cout << "Ending number can't be smaller then beginning number\n";
			cout << "Please enter a positive integer number to end: ";
			cin >> x;
		}
	}
	while (x < 1);
	
	
		cout << "\nNumber          Sum\n";
		cout << "----------------------\n";
		int count;
		
		for (count = a ; count <= x ; count++)
		{
			sum += count;
			cout << count << "\t\t" << sum << endl;
			
		}
		
		cout << "\nSum of vaules " << a << " thur " << x << " is " << sum << endl;
	

}