// This program shows that local variables do not retain 
// their values between function calls.

#include <iostream.h>

// Function prototype
void showLocal(void);

void main(void)
{
	showLocal();
	showLocal();
}

//***********************************************************
// Definition of function showLocal.                        *
// The initial value of localNum, which is 5, is displayed. *
// The value of localNum is then changed to 99 before the   *
// function returns.                                        *
//***********************************************************

void showLocal(void)
{
	int localNum = 5;  // Local variable

	cout << "LocalNum is " << localNum << endl;
	localNum = 99;
}
