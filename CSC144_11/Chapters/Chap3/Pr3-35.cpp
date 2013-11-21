// This program uses the << operator to write information to a
// file.

#include <iostream.h>
#include <fstream.h>

void main(void)
{
	ofstream outputFile;

	outputFile.open("demofile.txt");
	cout << "Now writing information to the file.\n";

	// Write 4 great names to the file
	outputFile << "Bach\n";
	outputFile << "Beethoven\n";
	outputFile << "Mozart\n";
	outputFile << "Schubert\n";

	// Close the file
	outputFile.close();
	cout << "Done.\n";
}
