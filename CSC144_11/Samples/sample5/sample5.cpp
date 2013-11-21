/*	Written by Michael Lindvall
	Feb. 1, 2006
	Chapter 2
	Programming Challenge 3
*/

#include <iostream.h>
void main (void)


{
	
	float purchase = 52;		//Cost of purchase
	float state = .04;			//State tax
	float country = .02;		//Country tax
	
	float taxOnPurchase ;
	taxOnPurchase=(purchase * state) + (purchase * country);

	cout <<"\n\nTax on $" << purchase << " is $" << taxOnPurchase << endl;endl;

}
