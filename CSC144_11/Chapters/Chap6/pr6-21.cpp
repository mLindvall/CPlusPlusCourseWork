// This program has local and global variables. In the function
// ringUpSale, there is a local variable named tax. There is
// also a global variable with the same name.

#include <iostream.h>

void ringUpSale(void); // Function prototype

// Global Variables
const float taxRate = 0.06;
float tax, sale, total;

void main(void)
{
	char again;

	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	do
	{
		ringUpSale();
		cout << "Is there another item to be purchased? ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
	tax = sale * taxRate;
	total = sale + tax;
	cout << "The tax for this sale is " << tax << endl;
	cout << "The total is " << total << endl;
}

//*****************************************************************
// Definition of function ringUpSale.                             *
// This function asks for the quantity and unit price of an item. *
// It then calculates and displays the sales tax and subtotal     *
// for those items.                                               *
//*****************************************************************

void ringUpSale(void)
{
	int qty;
	float unitPrice, tax, thisSale, subTotal;

	cout << "Quantity: ";
	cin >> qty;
	cout << "Unit price: ";
	cin >> unitPrice;
	thisSale = qty * unitPrice; // Get the total unit price
    sale += thisSale;           // Update global variable sale
	tax = thisSale * taxRate;   // Get sales tax for these items
	subTotal = thisSale + tax;  // Get subtotal for these items
	cout << "Price for these items: " << thisSale << endl;
	cout << "Tax for these items: " << tax << endl;
	cout << "SubTotal for these items: " << subTotal << endl;
}

