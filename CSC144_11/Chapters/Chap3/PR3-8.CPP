//   This program calculates the area of a circle.
//   The formula for the area of a circle is Pi times
//   the radius squared. Pi is 3.14159.

#include <iostream.h>
#include <math.h>   // needed for pow function

void main(void)
{
     double area, radius;

     cout << "This program calculates the area of a circle.\n";
     cout << "What is the radius of the circle? ";
     cin >> radius;
     area = 3.14159 * pow(radius, 2);
     cout << "The area is " << area;
}
