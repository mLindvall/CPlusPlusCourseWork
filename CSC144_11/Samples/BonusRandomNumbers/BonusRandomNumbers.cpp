// it prints 10 random numbers between 500 and 1000

#include <iostream.h>
#include <stdlib.h>
#include <iomanip.h>
#include <time.h>
#include <fstream.h>

void main(void)
{
	int x, a=0;
	ofstream outputFile;
	ifstream inputFile;

	//Location of files
	outputFile.open("G:\\CSC144_11\\Data\\random1.txt");
	inputFile.open("G:\\CSC144_11\\Data\\sorted.txt");

	// promt the users to begin the program
	srand(time(0));

	// Produce random numbers
	do
	{
		x = 1 + rand() % 1000;
		if (x > 500 && x < 1000)
		{
			cout << x << endl;
			outputFile << x << endl;
			a++;
		}
	}
	while(a < 10000);

	outputFile.close();

}