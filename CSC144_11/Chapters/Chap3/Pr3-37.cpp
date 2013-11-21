// This program uses the >> operator to read information from a
// file.

#include <iostream.h>
#include <fstream.h>

void main(void)
{
	ifstream inFile;
	int length, width, area;

	inFile.open("dimensions.txt");
	cout << "Reading dimensions of 5 rectangles from the file.\n\n";

	// Process rectangle 1
	inFile >> length;
	inFile >> width;
	area = length * width;
	cout << "Area of rectangle 1: " << area << endl;

	// Process rectangle 2
	inFile >> length;
	inFile >> width;
	area = length * width;
	cout << "Area of rectangle 2: " << area << endl;

	// Process rectangle 3
	inFile >> length;
	inFile >> width;
	area = length * width;
	cout << "Area of rectangle 3: " << area << endl;

	// Process rectangle 4
	inFile >> length;
	inFile >> width;
	area = length * width;
	cout << "Area of rectangle 4: " << area << endl;

	// Process rectangle 5
	inFile >> length;
	inFile >> width;
	area = length * width;
	cout << "Area of rectangle 5: " << area << endl;

	// Close the file
	inFile.close();
	cout << "\nDone.\n";
}
