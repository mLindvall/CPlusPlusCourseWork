/*
	Programmer Michael Lindvall
	Date March 22, 2006
*/

#include <iostream.h>

//Function Prototype
float retail(float, float);

void main(void)

{
	float wholesale, markup, sellingprice;

	do
	{
		cout << "Enter the item's wholesale cost: ";
		cin >> wholesale;
		if (wholesale < 0 )
			cout << "Enter positive value for wholesale.\n";
	}while (wholesale < 0);


	do
	{
		cout << "Enter the item's markup percentage: ";
		cin >> markup;
		if (markup < 0 )
			cout << "Enter positive value for markup.\n";
	}while (markup < 0);

	sellingprice = retail(wholesale, markup);
	
	cout.precision (2);
	cout.setf(ios::fixed | ios::showpoint);
	
	cout << "the retail price is $" << sellingprice << endl;
}

	//Function Call
	float retail(float whole, float mark)
	{
		float price;
		price = whole + (whole * (mark/100));
		return price;
	}




