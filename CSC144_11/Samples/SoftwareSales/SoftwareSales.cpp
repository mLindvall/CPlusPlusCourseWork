/*
	Written by Michael Lindvall
	Date:			March 6, 2006
	Discription:	Calculates discounts for large quanties
					of software purchaes
*/


#include <iostream.h>
#include <iomanip.h>

void main(void)

{
	int Quantity;
	double	LessTwenty = .2,
			LessFifty = .3,
			LessHundred = .4,
			MoreHundred = .5,
			Total,
			Cost = 99,
			TotalDis;

	cout << "How many units were purchased: ";
	cin >> Quantity;


	if (Quantity <= 0)
		cout << "\nPlease enter a number greater then zero.\n";
	else
	
		if (Quantity < 10)
			TotalDis = 0;
		else if (Quantity < 20)
			TotalDis = LessTwenty;
		else if (Quantity < 50)
			TotalDis = LessFifty;
		else if (Quantity < 100)
			TotalDis = LessHundred;
		else
			TotalDis = MoreHundred;
	

	Total = (Quantity * Cost) - (Quantity * Cost * TotalDis);

	cout.precision (2);
	cout.setf(ios::fixed | ios::showpoint);
	cout << "\nThe total cost of the purchase is $" << Total << endl;
}