/*
	Written by Mike Lindvall
	Date March 6, 2006
	Discription:	learning to use cases
*/


#include <iostream.h>
#include <iomanip.h>
#include <math.h>

void main(void)


{
	int Num;
	char shape;
		
	double PI = 3.14159, radius, width, length, base, height, area;
				



	cout << "Geometry Calculator\n\n";
	cout << "\t1. Calculate the Area of a Circle\n";
	cout << "\t2. Calculate the Area of a Rectangle\n";
	cout << "\t3. Calculate the Area of a Triangle\n";
	cout << "\t4. Quit\n\n";

	cout << "Enter your choise (1-4): ";
	cin >> Num;

	if (Num > 4 || Num < 1)
		cout << "\nPlease enter one of the options\n\n";
	else
	{
		cout << "\n\nPlease enter ";

		switch(Num)
		{

			case 1:	cout << "radius: ";
					cin >> radius;
					area = PI * pow(radius, 2);
					shape = circle;
					break;
			case 2: cout << "length: ";
					cin >> length;
					cout << "\t      width: ";
					cin >> width;
					area = length * width;
					break;
			case 3: cout << "length of base: ";
					cin >> base;
					cout << "\t\t     height: ";
					cin >> height;
					area = base * height * .5;
					break;
			case 4: cout << "\ngoodbye\n";
					break;
		}

		cout << "\n\nThe area of your shape is " << area << endl << endl;
	}
}