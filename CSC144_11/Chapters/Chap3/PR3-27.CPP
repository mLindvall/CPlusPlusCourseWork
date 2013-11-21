//	This program uses cin's width member function.

#include <iostream.h>
#include <iomanip.h>

void main(void)
{
        char word[5];

	cout << "Enter a word: ";
	cin.width(5);
        cin  >> word;
        cout << "You entered " << word << endl;
}
