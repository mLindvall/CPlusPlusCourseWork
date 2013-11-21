// This program uses the >> operator to read information from a
// file.

#include <iostream.h>
#include <fstream.h>

void main(void)
{
	ifstream inFile;
	char name[81];

	inFile.open("demofile.txt");
	cout << "Reading information from the file.\n\n";
	
	// Now read name 1 from the file
	inFile >> name;
	cout << name << endl;
	// Now read name 2 from the file
	inFile >> name;
	cout << name << endl;
	// Now read name 3 from the file
	inFile >> name;
	cout << name << endl;
	// Now read name 4 from the file
	inFile >> name;
	cout << name << endl;

	// Close the file
	inFile.close();
	cout << "\nDone.\n";
}
