// This program uses an array of ten characters to store the
// first ten Letters of the alphabet. The ASCII codes of the
// characters are displayed.

#include <iostream.h>

void main(void)
{
	char letters[10] = {'A', 'B', 'C', 'D', 'E',
	                    'F', 'G', 'H', 'I', 'J'};

	cout << "Character" << "\t" << "ASCII Code\n";
	cout << "---------" << "\t" << "----------\n";
	for (int count = 0; count < 10; count++)
	{
		cout << letters[count] << "\t\t";
		cout << int(letters[count]) << endl;
	}
}


