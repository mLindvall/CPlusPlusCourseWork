#include <iostream.h>

void main(void)


{
	int a,b,c;
	a=2;
	b=5;
	c=a*b++;
	cout << a << "  " << b-- << "  " << c << endl;
	cout << "b = " << b << endl;

}