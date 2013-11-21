//	This program uses setw with the cin object.

#include <iostream.h>
#include <iomanip.h>

void main(void)
{
        char word[5];

        cout << "Enter a word: ";
        cin >> setw(5) >> word;
        cout << "You entered " << word << endl;
}

