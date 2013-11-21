// This program uses the return value of strcmp to alphabetically
// sort two strings entered by the user.

#include <iostream.h>
#include <string.h>

void main(void)
{
	char name1[30], name2[30];

	cout << "Enter a name (last name first): ";
	cin.getline(name1, 30);
	cout << "Enter another name: ";
	cin.getline(name2, 30);
	cout << "Here are the names sorted alphabetically:\n";
	cout << (strcmp(name1, name2) <= 0 ? name1 : name2) << endl;
	cout << (strcmp(name1, name2) > 0 ? name1 : name2) << endl;
}
