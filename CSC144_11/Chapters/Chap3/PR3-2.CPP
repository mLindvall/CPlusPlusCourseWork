//	This program reads the length and width of
//	a rectangle. It calculates the rectangle's area and displays
//	the value on the screen.


#include <iostream.h>

void main(void)


{
	int length, width, area;

	cin >> length;
	cin >> width;
	area = length * width;
	cout << "The area of the rectangle is " << area << endl;
}
