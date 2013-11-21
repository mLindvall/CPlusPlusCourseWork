//********************************  Program Idenificartion  *************************************
//*                                                                                             *
//*  Program File Name: program6.cpp                            Assignment #: 6                 *
//*                                                                                             *
//*  Program Auther: __________________________________                                         *
//*                        Michael Lindvall                                                     *
//*                                                                                             *
//*                                                                                             *
//*  Course #: CSC 184 21                                       Due Date : Nov 22, 2006         *
//*                                                                                             *
//***********************************************************************************************

//*******************************  Program Description  *****************************************
//*                                                                                             *
//*  Process:  
//*                                                                                             *
//*  User Defined Modules                                                                       *
//*                                                                                             *
//*       displayHeader - This function place programmer's name, date, class, and assignment    *
//***********************************************************************************************

#include <iostream.h>
#include <iomanip.h>
#include <math.h>
#include <fstream.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define count 50
#define Sentinel "Q"

	//Define the structures that are going to be used in program
struct CustomerType
{
	char code;
	char Lname[12];
	char Fname[12];
	char StAdrs[20];
	char City[12];
	char State[1];
	char Zip[4];
};

//Function Prototype
void displayHeader(ofstream &);
void printStars(ofstream&);
void addCustomer(ifstream&, CustomerType[], int&);
int deleteCustomer(CustomerType[]);

void main(void)
{
	//Define Variables
	CustomerType Customer[count];
	int EU = 0;
	char ltrCode;

	ifstream Infile;
	ofstream Outfile;

	Infile.open("data6", ios::in);				//Open input file.
	Outfile.open("Output.txt",ios::out);		//Open output file.

	//Displays the programmer's name and assignment number
	displayHeader(Outfile);

	infile >> ws;
	infile >> ltrCode;
	while(ltrCode != 'Q')
	{
		switch(ltrCode)
		{
		case 'A'://a new member will be added to the database
			intFlag=Scan(infile, Customer, EU);
			if (intFlag == 1)
			{	//there was a match in the database
				outfile << "ERROR! Attempt to add a duplicate record."
					<< "Attempt failed!" << endl;
			else
			{	//the new member will be added to database
				addCustomer(infile, Customer, EU);
				outfile << "New customer " << Customer[EU].Fname << " "
				<< Customer[EU].Lname << " successfully added to the database!"
				<< endl;
			}
			break;
		case 'D':
			intFlag=Scan(infile, Customer, EU);
			if (intFlag == 1)
			{	//there was a match found and will be deleted
				deleteCustomer(Customer);
				outfile << "Customer " << Customer[EU].Fname <<" "<< Customer[EU].Lname
				<< " successfully removed from database!" << endl;
			}
			else
			{
				outfile << "ERROR! Attempt to delete non-existent record."
				<<"Attempt failed!" << endl;
			}
			break;
		case 'C'://change information about a member
			intFlag=Scan(infile, Customer, EU);
			if (intFlag == 1)
			{	//there was a match found in the database and changes will be made to match
				updateCustomer(Customer, EU);
				outfile << "Customer " << Customer[EU].Fname <<" "<< Customer[EU].Lname
					<< " successfully updated!" << endl;
			}
			else
			{
				outfile << "ERROR!"
					>>"Attempt to change a non-existent record. Attempt failed!"<<endl;
			}
			break;
		case 'P':
			{
				infile >> ws;
				infile >> ltrCode;
				case 'E'://print the entire database
					printDB(outfile, Customer, EU);
					break;
				case 'S'://print a single member from the databas
					intFlag=Scan(infile, Customer, EU);
					if(intFlag == 1)
					{//print the requested member's information
						printSingleMember(outfile, Customer, EU




		}
	}






getData(Infile, Customer, EU);
	
	for(int i = 0; i < EU; i++)
	{
		Outfile << Customer[i].Lname;
		Outfile << Customer[i].Fname;
		Outfile << Customer[i].StAdrs;
		Outfile << Customer[i].City;
		Outfile << Customer[i].State;
		Outfile << Customer[i].Zip;
		Outfile << endl;
	}


	Outfile.close();					//Close the output file
	Infile.close();						//Close the input file


}




//*******************************  Function displayHeader  **************************************
//***********************************************************************************************
void displayHeader(ofstream& Outfile)
{
				//Recieves - the output file
				//Task - Print the output preamble
				//Returns - Nothing
	Outfile << setw(30) << "Michael Lindvall";
	Outfile << setw(17) << "CSC 184";
	Outfile << setw(15) << "Section 21\n";
	Outfile << setw(30) << "Fall 2006";
	Outfile << setw(20) << "Assignment #6\n";
	Outfile << setw(35) << "-----------------------------------";
	Outfile << setw(35) << "-----------------------------------\n\n";
	return;
}
//*******************************  End of Function displayHeader  ********************************




//******************************* FUCNTION printSTARS ****************************************
void printStars(ofstream &out);
{
			//Recieves - the output file
			//Tasks - prints 50 starts on the page
			//Returns - the printed starts on the page
	int i;
	for (i=0;i<50;i++)
		out << "*";
	out << endl;
	return;
}
//****************************** END OF FUNCTION printSTARS *********************************





//******************************** FUNCTION SCAN ***************************************
int Scan(ifstream &in, CustomerType C[], int &eu)
{
			//Recieves - the input file and the customer type array
			//Tasks - scans the CustomerType array to make sure the string
					//is in the is or isn't in the array
			//Returns - returns an integer that sets off a flag that will start
					//the next step
	int i;
	char str1[12], str2[12];

	in << ws;
	in.getline(str1, 12);
	in.getline(str2, 12);

	for (i=0; i<eu; i++)
	{
		if(strcmp(str2, C[i].Lname) == 0)
			if(strcmp(str1, C[i].Fname) ==0)
				return 1;//means there is a match in the database
	}
	return 0;  //means there is not a match in the database
}
//******************************** END FUNCTION SCAN ************************************














//****************************** Function getData **********************************************
//**********************************************************************************************
void getData(ifstream& in, CustomerType C[], int &eu)
{
				//Recieves  - the file with the data
				//Tasks - gets the data and then it figues out what funciton to do with
								//it according to the input code
				//Returns - the data printed on the output file
	char ltrCode;
	
	
	in >> ws;
	//in >> C[eu].code;
	in >> ltrCode;

	
	cout << "the letter code is " << C[eu].code << endl;
	cout << "the sentinel is " << Sentinel << endl;

	while (ltrCode != 'Q')
	{
		switch(C[eu].code)
		{
		case 'A':
			in >> C[eu].Fname;
			in >> C[eu].Lname;
			in >> C[eu].StAdrs;
			in >> C[eu].State;
			in >> C[eu++].Zip;
			break;
		case 'D':


	for (int i=0; i < count; i++)
	{
		if (C[eu].code == 'A')
		{
			cout << "adding the recode to the list" << endl;
			in >> C[eu].Fname;
			in >> C[eu].Lname;
			in >> C[eu].StAdrs;
			in >> C[eu].State;
			in >> C[eu++].Zip;
			in >> ws;
		}
		else if(C[eu].code == 'D')
		{
			cout << "delete the recode from the field" << endl;
		}
		in >> ws;
		in >> C[eu].code;
	}


	return;
}

//******************************  FUNCTION ADDCUSTOMER *********************************
void addCustomer(ifstream &in, CustomerType c[], int &e)
{
				//Recieves  - the file with the data
				//Tasks - adds the member to the a customertype array
				//Returns - date in the customerType array
	in >> ws;
	in >> c[e].Fname;
	in >> c[e].Lname;
	in >> c[e].StAdrs;
	in >> c[e].State;
	in >> c[e].Zip;

	return;
}
//**************************  END OF FUNCTION ADDCUSTOMER ******************************