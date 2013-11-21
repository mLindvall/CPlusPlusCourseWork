// This program demonstrates the && logical operator.

#include <iostream.h>

void main(void)

{
   char employed, recentGrad;

   cout << "Answer the following questions\n";
   cout << "with either Y for Yes or ";
   cout << "N for No.\n";
   cout << "Are you employed? ";
   cin >> employed;
   cout << "Have you graduated from college ";
   cout << "in the past two years? ";
   cin >> recentGrad;
   if (employed == 'Y'&& recentGrad == 'Y')
   {
      cout << "You qualify for the special ";
      cout << "interest rate.\n";
   }
   else
   {
	  cout << "You must be employed and have \n";
      cout << "graduated from college in the\n";
      cout << "past two years to qualify.\n";
   }

}
