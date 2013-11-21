     //   This program demonstrates integer overflow and underflow.

#include <iostream.h>

void main(void)
{
     short testVar = 32767;

     cout << testVar << endl;
     testVar = testVar + 1;
     cout << testVar << endl;
     testVar = testVar - 1;
     cout << testVar << endl;
}
