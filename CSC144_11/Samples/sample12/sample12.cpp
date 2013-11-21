/*	Programmer:	Mike Lindvall
	Date:		Feb. 13, 2006
	Program:	Chapter 3 problem 8, p162
*/

#include <iostream.h>
#include <iomanip.h>
void main(void)

{
	double	US,
			YCurrency,
			ECurrency;

	float Yen=134.33, Euro=1.1644;

	cout << "\nEnter the amount of US currency you would "
		<< "like to convert.\n"
		<< "Please DO NOT use commas between numbers! ";
	cin >> US;

	//Perform conversion
	YCurrency=US*Yen;
	ECurrency=US*Euro;
	
	cout << "\n\nThe following are the converted equivalents:\n\n";
	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint | ios::right);
	
	cout << "YEN:  " <<setw(10)<< YCurrency<< endl;
	cout << "EURO: " <<setw(10)<< ECurrency<< endl;
}


