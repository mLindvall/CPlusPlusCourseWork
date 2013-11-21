// This program uses strcmp to compare the string entered
// by the user with the valid stereo part numbers.

#include <iostream.h>
#include <string>

void main(void)
{
	const float aprice = 249.0, bprice = 299.0;
	char partNum[8];

	cout << "The stereo part numbers are:\n";
	cout << "\tBoom Box, part number S147-29A\n";
	cout << "\tShelf Model, part number S147-29B\n";
	cout << "Enter the part number of the stereo you\n";
	cout << "wish to purchase: ";
	cin.width(9);	// So they won't enter more than 8 char's
	cin >> partNum;
	cout.setf(ios::fixed || ios::showpoint);
	cout.precision(2);
	if (strcmp(partNum, "S147-29A") == 0)
		cout << "The price is $" << aprice << endl;
	else if (strcmp(partNum, "S147-29B") == 0)
		cout << "The price is $" << bprice << endl;
	else
		cout << partNum << " is not a valid part number.\n";
}
