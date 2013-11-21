// This program uses the >> operator to read information from a file

#include <iostream.h>
#include <fstream.h>


void main(void)

{
	ifstream inFile;
	char name[81];

	inFile.open ("Name.txt");
	cout << "reading information from the file.\n\n";

	//Now read names from the file
	for (int a=0; a<5; a++)
	{
		inFile >> name;
		cout << name << endl;
	}

	//Close the file
	inFile.close();
	cout << "\n\nDone|\n";
}