// This program demonstrates default function arguments.

#include <iostream.h>

// Function prototype with default arguments
void displayStars(int = 10, int = 1);

void main(void)
{
	displayStars();
	cout << endl;
	displayStars(5);
	cout << endl;
	displayStars(7, 3);
}

//**********************************************************
// Definition of function displayStars.                    *
// The default argument for cols is 10 and for rows is 1.  *
// This function displays a rectangle made of asterisks.   *
//**********************************************************

void displayStars(int cols, int rows)
{
	// Nested loop. The outer loop controls the rows
	// and the inner loop controls the columns.
	for (int down = 0; down < rows; down++)
	{
		for (int across = 0; across < cols; across++)
			cout << "*";
		cout << endl;
	}
}
