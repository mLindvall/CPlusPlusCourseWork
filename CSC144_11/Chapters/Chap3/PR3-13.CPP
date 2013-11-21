//   This program calculates the area of a circle.
//   The formula for the area of a circle is Pi times
//   the radius squared. Pi is 3.1459.

#include <iostream.h>
#include <math.h>   // needed for pow function

void main(void)
{
     const float pi = 3.14159;
     double area, radius;

     cout << "This program calculates the area of a circle.\n";
     cout << "What is the radius of the circle? ";
     cin >> radius;
     area = pi * pow(radius, 2);
     cout << "The area is " << area;
}
