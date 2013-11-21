//	This program demonstrates cin's getline member function.

#include <iostream.h>
#include <iomanip.h>

void main(void)
{
        char sentence[81];

	cout << "Enter a sentence: ";
        cin.getline(sentence, 81);
        cout << "You entered " << sentence << endl;
}
