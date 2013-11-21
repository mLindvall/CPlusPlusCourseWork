// This program displays the numbers 1 through 10 and 
// their squares.

#include <iostream.h>

void main(void)
{
	int num = 0;

	cout << "Number     Number Squared\n";
	cout << "-------------------------\n";
	while (num++ < 5)
	{
		cout << num << "\t\t" << (num * num) << endl;
		//num++;
	}
}

