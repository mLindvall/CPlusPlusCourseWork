// This program will assist the High Adventure Travel Agency
// in calculating the costs of their 4 major vacation packages.

#include <iostream.h>
#include <iomanip.h>

// Constants for the charges.
const float climbRate = 350.0;			// Base rate - Devil's
					                    // Courthouse
const float scubaRate = 1000.0;			// Base rate - Bahamas
const float skyDiveRate = 400.0;	    // Base rate - Sky diving
const float caveRate = 700.0;		    // Base rate - Spelunking
const float climbInstruct = 100.0;		// Climbing instruction
const float scubaInstruct = 100.0;		// Scuba instruction
const float dailyCampRental = 40.0;		// Daily camping equip. rental
const float dayLodge1 = 65.0;		    // Lodging option (sky diving)
const float dayLodge2 = 120.0;			// Lodging option (sky diving)

// Function prototypes
void climbing(void);
void scuba(void);
void skyDive(void);
void spelunk(void );
int menu(void);

void main(void)
{
	int selection;

	cout.precision(2);
	cout.setf(ios::fixed | ios::showpoint);
	do
	{
        selection = menu();
		switch(selection)
		{
			case 1 :	climbing();
						break;
			case 2 :	scuba();
						break;
			case 3 :	skyDive();
						break;
			case 4 :	spelunk();
						break;
			case 5 :	cout << "Exiting program.\n\n";
		}
        } while (selection != 5);
	return 0;
}

//*******************************************************
// Definition of function menu.                         *
// Displays the main menu and asks the user to select   *
// an option. Returns an integer in the range 1 - 5.    *
//*******************************************************

int menu(void)
{
	int choice;

	cout << "High Adventure Travel Agency\n";
	cout << "----------------------------\n";
	cout << "1) Devil's Courthouse Adventure Weekend\n";
	cout << "2) Scuba Bahama\n";
	cout << "3) Sky Dive Colorado\n";
	cout << "4) Barron Cliff Spelunk\n";
    cout << "5) Exit Program\n\n";
	cout << "Enter 1, 2, 3, 4, or 5: ";
	cin >> choice;
	while (choice < 1 || choice > 5)
	{
		cout << "Invalid Selection. Enter 1, 2, 3, 4, or 5: ";
		cin >> choice;
	}
	return choice;
}

//************************************************
// Definition of climbing function.              *
// This function calculates the charges for the  *
// Devil's Courthouse Adventure Weekend package. *
//************************************************

void climbing(void)
{
	int 	beginners,		// Those needing instruction
			advanced,		// Those not needing instruction
			needEquip;		// Those renting camping equipment
	float	baseCharges,	// Base charges
			charges,		// Total charges
			instruction,	// Cost of instruction
            equipment,		// Cost of equipment rental
			discount = 0,	// Discount
			deposit;		// Required deposit

	cout << "\nDevil's Courthouse Adventure Weekend\n";
	cout << "------------------------------------\n";
	cout << "How many will be going who need an instructor? ";
	cin >> beginners;
	cout << "How many advanced climbers will be going? ";
	cin >> advanced;
	cout << "How many will rent camping equipment? ";
   	cin >> needEquip; 
   	// Calculate base charges.
	baseCharges = (beginners + advanced) * climbRate;
   	charges = baseCharges;
	// Calculate 10% discount for 5 or more.
	if ((beginners + advanced) > 4)
   	{		discount = (charges * .1);
			charges -= discount;
   	}
	// Add cost of instruction.
	instruction = beginners * climbInstruct;
   	charges += instruction;
	// Add cost of camping equipment rental
	equipment = needEquip * dailyCampRental * 4;
   	charges += equipment;
	// Calculate required deposit.
	deposit = charges / 2.0;
	cout << "Number in party:  " << (beginners + advanced);
	cout <<  endl;
   	cout << "Base charges: $" << baseCharges << endl;
	cout << "Instruction cost: $" << instruction << endl;
   	cout << "Equipment Rental: $" << equipment << endl;
	cout << "Discount: $" << discount << endl;
	cout << "Total Charges: $" << charges << endl;
	cout << "Required Deposit: $" << deposit << endl << endl;
}

//****************************************************
// Definition of scuba function.                     *
// This function calculates the charges for the      *
// Scuba Bahama package.                             *
//****************************************************

void scuba(void)
{
	int 	beginners,		// Those needing instruction
			advanced;		// Those not needing instruction
	float   baseCharges,	// Base charges
			charges,		// Total charges
			instruction,	// Cost of instruction
			discount = 0,	// Discount
			deposit;		// Required deposit

	cout << "\nScuba Bahama\n";
	cout << "------------------------------------\n";
	cout << "How many will be going who need an instructor? ";
	cin >> beginners;
	cout << "How many advanced scuba divers will be going? ";
	cin >> advanced;
	// Calculate base charges.
	baseCharges = (beginners + advanced) * scubaRate;
    charges = baseCharges;
	// Calculate 10% discount for 5 or more.
	if ((beginners + advanced) > 4)
    {
		discount = (charges * .1);
		charges -= discount;
    }
	// Add cost of instruction.
	instruction = beginners * scubaInstruct;
    charges += instruction;
	// Calculate required deposit.
	deposit = charges / 2.0;
	cout << "Number in party:  " << (beginners + advanced);
	cout <<  endl;
	cout << "Base charges: $" << baseCharges << endl;
	cout << "Instruction cost: $" << instruction << endl;
	cout << "Discount: $" << discount << endl;
	cout << "Total Charges: $" << charges << endl;
	cout << "Required Deposit: $" << deposit << endl << endl;
}

//***********************************************
// Definition of Sky Dive function.             *
// This function calculates the charges for the *
// Sky Dive Colorado package.                   *
//***********************************************

void skyDive(void)
{
	int 	party,			// Number in party
			lodge1,			// Number at 1st lodging choice
            lodge2;			// Number at 2nd lodging choice
	float	baseCharges,	// Base charges
	 		charges,		// Total charges
			discount = 0,	// Discount
            lodging,		// Cost of lodging
			deposit;		// Required deposit

	cout << "\nSky Dive Colorado\n";
	cout << "------------------------------------\n";
	cout << "How many will be going? ";
	cin >> party;
	// Calculate base charges.
	baseCharges = party * skyDiveRate;
     	charges = baseCharges;
	// Calculate 10% discount for 5 or more.
	if (party > 4)
     	{
		discount = (charges * .1);
		charges -= discount;
	}
	// Calculate lodging costs.
	cout << "How may will stay at Wilderness Lodge? ";
	cin >> lodge1;
	cout << "How many will stay at Luxury Inn? ";
	cin >> lodge2;
	lodging = (lodge1 * dayLodge1) + (lodge2 * dayLodge2);
	// Calculate required deposit.
	deposit = charges / 2.0;
	cout << "Number in party:  " << party << endl;
	cout << "Base charges: $" << baseCharges << endl;
    cout << "Lodging: $" << lodging << endl;
	cout << "Discount: $" << discount << endl;
	cout << "Total Charges: $" << charges << endl;
	cout << "Required Deposit: $" << deposit << endl << endl;
}

//***************************************************
// Definition of spelunk function.                  *
// This function calculates the charges for the     *
// Barron Cliff Spelunk package.                    *
//***************************************************

void spelunk(void)
{
	int 	party,			// Number in party
			needEquip;		// Those renting camping equipment
	float	baseCharges,	// Base charges
 			charges,		// Total charges
			equipment,		// Cost of equipment rental
			discount = 0,	// Discount
			deposit;		// Required deposit

	cout << "\nBarron Cliff Spelunk Weekend\n";
	cout << "------------------------------------\n";
	cout << "How many will be going? ";
	cin >> party;
	cout << "How many will rent camping equipment? ";
    cin >> needEquip; 
    // Calculate base charges.
	baseCharges = party * caveRate;
    charges = baseCharges;
	// Calculate 10% discount for 5 or more.
	if (party > 4)
    {
		discount = (charges * .1);
		charges -= discount;
    }
	// Add cost of camping equipment rental
	equipment = needEquip * dailyCampRental * 4;
    charges += equipment;
	// Calculate required deposit.
	deposit = charges / 2.0;
	cout << "Number in party:  " << party << endl;
    cout << "Base charges: $" << baseCharges << endl;
	cout << "Equipment Rental: $" << equipment << endl;
	cout << "Discount: $" << discount << endl;
	cout << "Total Charges: $" << charges << endl;
	cout << "Required Deposit: $" << deposit << endl << endl;
}
