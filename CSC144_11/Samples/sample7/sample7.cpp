/*	Feb 6, 2006
	Chapter 3
	ExA3.1
*/


#include <iostream.h>
void main(void)

{
	float length, width, area;
	cout << "This program calculates the area of a rectangle.\n\n";
	cout << "What is the length of the rectangle in inches? ";
	cin >> length;
	cout << "\n\nWhat is the width of the rectangle in inches? ";
	cin >> width;
	area = length * width;
	cout << "\n\nThe area of the rectangle is " << area << " inches squared.\n";

}