#include <iostream.h>
#include <iomanip.h>

void main(void)
{
	char ch;

	cout << "Type a character and press Enter: ";
	cin.get(ch);
	cout << "You entered " << ch << endl;
	cout << "Its ASCII code is " << int(ch) << endl;
}
