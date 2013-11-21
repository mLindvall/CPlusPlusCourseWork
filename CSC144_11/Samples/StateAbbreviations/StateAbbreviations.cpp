/*
	Written by Michael Lindvall
	This program asks for a state's abbrevation and then
		displays the whole state name.
	Date is March 1, 2006
*/

#include <iostream.h>
#include <iomanip.h>
#include <string.h>

void main(void)

{
	char string1[3];

	cout << "Enter one of the following state abbreviations\n";
	cout << "FL, IL, MO: ";
	cin.getline(string1, 3);

	if (strcmp(string1, "FL")==0 || strcmp(string1,"fl")==0)
		cout << "\n" << string1 << "is Florida\n";
	else
		if (strcmp(string1, "MO")==0 || strcmp(string1,"mo")==0)
			cout << "\n" << string1 << "is Missouri\n";
		else 
			if (strcmp(string1, "IL")==0 || strcmp(string1,"il")==0)
				cout << "\n" << string1 << " is Illinois\n";
			else
				cout << "\n" << string1 << ", that abbrevations is not in my database.\n";

	cout << "\n\tCreated by Micheal Lindvall\n";

}

