/*	Programmer:		Michael Lindvall
	Date:			Feb. 8, 2006
	Description:	Figure out staduim seating
*/

#include <iostream.h>
#include <math.h>
void main(void)

{
	float	ClassA=15,			//the price for seats in ClassA
			ClassB=12,			//the price for seats in ClassB
			ClassC=9;			//the price for seats in ClassC

	int SeatA, SeatB, SeatC;	//the user will input the number
								//of seats they want for each Class
	float Total;				//Total income of the seats

	//Promts user to enter in the number of seats sold for class A
	cout<<"Please enter the amount of seats for Class A\n";
	cout<<"that were sold and press Enter: ";
	cin>>SeatA;
	Total=SeatA*ClassA;
	cout<<"\n\nThe Total cost for those seats will be $"<<Total<< ".\n";

	//Promts user to enter in the number of seats sold for class B
	cout<<"\n\nPlease enter the amount of seats for Class B\n";
	cout<<"that were sold and press Enter: ";
	cin>>SeatB;
	Total=SeatA*ClassB;
	cout<<"\n\nThe Total cost for those seats will be $"<<Total<< ".\n";

	//Promts users to enter in the number of seats sold for class C
	cout<<"\n\nPlease enter the amount of seats for Class C\n";
	cout<<"that were sold and press Enter: ";
	cin>>SeatC;
	Total=SeatA*ClassC;
	cout<<"\n\nThe Total cost for those seats will be $"<<Total<< ".\n";

	//Calculate the total income from all seats
	Total=(SeatA*ClassA)+(SeatB*ClassB)+(SeatC*ClassC);
	cout<<"\n\n\t\tThe total revenue from all the seats sold is $" <<Total<< ".\n\n";
}