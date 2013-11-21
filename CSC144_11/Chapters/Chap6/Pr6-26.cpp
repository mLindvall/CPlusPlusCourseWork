// This program uses a reference variable as a function
// parameter.

#include <iostream.h>

// Function prototype. The parameter is a reference variable.
void doubleNum(int &);
void getNum(int &);
void tripleNum(int &);
void quadNum(int &);

void main(void)
{
	int value;

	getNum(value);
	doubleNum(value);
	cout << "The double of that value is: " << value << endl;
	tripleNum(value);
	cout << "The triple of that value is: " << value << endl;
	quadNum(value);
	cout << "The quaddripled of that value is: " << value << endl;


}

//***********************************************************
// Definition of getNum                                     *
// asks for the user to input a number to be used in the    *
// in the program.                                          *
//***********************************************************

void getNum(int &userNum)
{
	cout << "Enter a number: ";
	cin >> userNum;
}

//***********************************************************
// Definition of doubleNum.                                 *
// The parameter refVar is a reference variable. The value  *
// in refVar is doubled.                                    *
//***********************************************************

void doubleNum (int &refVar)
{
	refVar *= 2;
}

//***********************************************************
// Definition of tripleNum                                  *
// the value of triple is tripled                           *
//***********************************************************

void tripleNum(int &triple)
{
	triple *= 3;
}

//***********************************************************
// Definition of quadNum                                    *
// The value of quad is times for four                      *
//***********************************************************

void quadNum(int &quad)
{
	quad *= 4;
}

