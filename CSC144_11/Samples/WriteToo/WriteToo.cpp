/*
	1
	this program uses the << operator to write information to a file
*/

#include <iostream.h>
#include <fstream.h>


void main(void)
{
	ofstream outputFile;

	//Opening file
	outputFile.open ("demofile.txt");
	cout << "Now writing information to the file.\n";

	//Write 4 lines to the file
	outputFile << "Hello\n";
	outputFile << "Today is a cool Sprint morning.\n";
	outputFile << "So far so good\n";
	outputFile << "C++ Rocks!!!\n";

	//Close File
	outputFile.close();

	cout << "Done|\n";

}