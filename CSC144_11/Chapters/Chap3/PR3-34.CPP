// This program is used by General Crates, Inc. to calculate
// the volume, cost, customer charge, and profit of a crate
// of any size. It calculates this data from user input, which
// consists of the dimensions of the crate.

#include <iostream.h>
#include <iomanip.h>

void main(void)
{
	float length,	// The crate's length
	      width,	// The crate's width
	      height,	// The crate's height
	      volume,	// The volume of the crate
	      cost,	    // The cost to build the crate
	      charge,	// The customer charge for the crate
	      profit;	// The profit made on the crate 

	// Set cout's ios flags and precision. 
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(2);

	// Prompt the user for the crate's length, width, 
	// and height.
    cout << "Enter the dimensions of the crate (in feet):\n";
	cout << "Length: ";
	cin >> length;
	cout << "Width: ";
	cin >> width;
	cout << "Height: ";
	cin >> height;

	// Calculate the crate's volume, the cost to produce it,
    // the charge to the customer, and the profit.
	volume = length * width * height;
	cost = volume * 0.23;
	charge = volume * 0.5;
	profit = charge - cost;

    // Display the calculated data.
	cout << "The volume of the crate is ";
	cout << volume << " cubic feet.\n";
	cout << "Cost to build: $" << cost << endl;
	cout << "Charge to customer: $" << charge << endl;
	cout << "Profit: $" << profit << endl;
}
