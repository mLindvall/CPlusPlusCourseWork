//********************************  Program Idenificartion  *************************************
//*                                                                                             *
//*  Program File Name: program4.cpp                            Assignment #: 4                 *
//*                                                                                             *
//*  Program Auther: __________________________________                                         *
//*                        Michael Lindvall                                                     *
//*                                                                                             *
//*                                                                                             *
//*  Course #: CSC 184 21                                       Due Date : Oct 20, 2006         *
//*                                                                                             *
//***********************************************************************************************

//*******************************  Program Description  *****************************************
//*                                                                                             *
//*  Process:  
//*                                                                                             *
//*  User Defined Modules                                                                       *
//*                                                                                             *
//*       displayHeader - This function place programmer's name, date, class, and assignment    *
//*       ToUpper		- Changes the input string to all uppercase letters                     *
//*       ToLower		- Changes the input string to all lowercase letters                     *
//*       UpperCheck	- Checks to see if the input character is an upper case character       *
//*       LowerCheck	- Checks to see if the input character is a lower case character        *
//*       CharCheck		- Checks to see if the input charachter is a character                  *
//*       DigitCheck	- Checks to see if the input charachter is a digit                      *
//*       LengthCheck	- Counts the characters of string to determine the lenght of string     *
//*       ConcatStr		- Takes two different strings and combines them together                *
//*       StrCopy		- Takes two different strings and copies the second string to the the   *
//*                            first string.                                                    *
//*       StrCompare	- Takes two strings and then compares the characters in the strings     *
//*       starPring		- Puts the stars on the output
//***********************************************************************************************

#include <iostream.h>
#include <iomanip.h>
#include <math.h>
#include <fstream.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define count 50

//Function Prototype
void displayHeader(ofstream &);
void ToUpper(ofstream &, char[]);
void ToLower(ofstream &, char[]);
void UpperCheck(ofstream &, char[]);
void LowerCheck(ofstream &, char[]);
void CharCheck(ofstream &, char[]);
void DigitCheck(ofstream &, char[]);
void LengthCheck(ofstream &, char[]);
void ConcatStr(ofstream &, char[], char[]);
void StrCopy(ofstream &, char[], char[]);
void StrCompare(ofstream &, char[], char[]);
void starPrint(ofstream &);

void main(void)
{
	//Declaring the Variables
	char Line[count], Line2[count];
	int code = 0;

	ifstream Infile;
	ofstream Outfile;

	Infile.open("data4", ios::in);				//Open input file.
	Outfile.open("Output.txt",ios::out);		//Open output file.

	//Print the header to output
	displayHeader(Outfile);
	
	do
	{
		Infile.getline(Line, count+1, '\n');
		//cout << Line << endl;
		code = atoi(Line);
		//finds out what function to use on input
		if (code != -99)
		{
			Infile.getline(Line, count+1, '\n');			
			if (code == 0)						//change everything to upper
			{											//case letters
				Outfile << "This does a converstion to all uppercase" << endl;
				ToUpper(Outfile, Line);
			}
			else if(code == 1)					//change everything to lower
			{											//case letters
				Outfile << "This does a conversion to all lowercase" << endl;
				ToLower(Outfile, Line);
			}
			else if(code == 2)					//see if the character is a
			{									//uppercase letter
				Outfile << "Check to see if the character is uppercase" << endl;
				UpperCheck(Outfile, Line);
			}
			else if(code == 3)					//see if the character is a
			{									//lowercase letter
				Outfile << "Check to see if the character is lowercase" << endl;
				LowerCheck(Outfile, Line);
			}
			else if (code == 4)					//see if the input character is
			{									//a letter and not a number
				Outfile << "Check to see if the character is a letter" << endl;
				CharCheck(Outfile, Line);
			}
			else if (code == 5)					//see if the inpute character is
			{									//a digit and not a letter
				Outfile << "Check to see if the charater is a digit" << endl;
				DigitCheck(Outfile, Line);
			}
			else if (code == 6)					//find out what the lenght of the 
			{										//string is
				Outfile << "Determine the length of the string" << endl;
				LengthCheck(Outfile, Line);
			}
			else if (code == 7)					//join two strings together
			{
				Outfile << "Concatenate the two strings" << endl;
				Infile.getline(Line2, count+1, '\n');
				ConcatStr(Outfile, Line, Line2);
			}
			else if (code == 8)					//copy one string over another
			{										//string
				Outfile << "Perform a string copy operation" << endl;
				Infile.getline(Line2, count+1, '\n');
				StrCopy(Outfile,Line, Line2);
			}
			else if (code == 9)					//compare strings to see which one
			{									//would be listed first
				Outfile << "Compare the two strings" << endl;
				Infile.getline(Line2, count+1, '\n');
				StrCompare(Outfile, Line, Line2);
			}
			starPrint(Outfile);				//puts stars on the output
		}
	}while (code > -1);

	Outfile << "-- END OF FILE --" << endl;  //so you know all the data has been looked at

	Outfile.close();					//Close the output file
	Infile.close();						//Close the input file
}


//*******************************  Function Header  *********************************************
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
	Outfile << setw(20) << "Assignment #4\n";
	Outfile << setw(35) << "-----------------------------------";
	Outfile << setw(35) << "-----------------------------------\n\n";
	return;
}
//*******************************  End of Function Header  *************************************

//*******************************  Function starPrint  ******************************************
//***********************************************************************************************
void starPrint(ofstream & Output)
{
				//Recieves - the output file
				//Task - Prints stars
				//Returns - Nothing
	int i;
	for(i=0; i < 40; i++)
	{
		Output << "*";
	}
	Output << endl;
	return;
}
//******************************  End of Function starPrint  ************************************

//********************************  Function ToUpper  *******************************************
//***********************************************************************************************
void ToUpper(ofstream& Out, char String[])
{
				//Recieves - the output file and a character string
				//Task - changes the string to all upper case letters
							//and prints to output
				//Returns - Nothing
	char Temp[count], String2[count];
	int i = 0;
	
	Out << String << endl;
	while (i < count)
	{
		Temp[i] = toupper(String[i]);
		String2[i] = Temp[i++];
		//in.get(ch);
	}
	Out << String2 << endl;
	return;
}
//*******************************  End of Function ToUpper  *************************************

//********************************  Function ToLower  *******************************************
//***********************************************************************************************
void ToLower(ofstream& Out, char String[])
{
				//Recieves - the output file and a character string
				//Task - changes the string to all lowercase letters
							//then prints it to the output
				//Returns - Nothing
	char Temp[count], String2[count];
	int i = 0;

	Out << String << endl;
	while (i < count)
	{
		Temp[i] = tolower(String[i]);
		String2[i] = Temp[i++];
		//in.get(ch);
	}
	Out << String2 << endl;
	return;
}
//*********************************  End of Function ToLower  *************************************

//*********************************  Function UpperCheck  ****************************************
//***********************************************************************************************
void UpperCheck(ofstream& Out, char String[])
{
				//Recieves - the output file and a character string
				//Task - checks to see if the character string is in upper case letters
				//Returns - Nothing
	char ch;
	Out << String << endl;
	ch = String[0];
	if (isupper(ch))
		Out << "This character is in uppercase" << endl;
	else
		Out << "This character is not in uppercase" << endl;
	return;
}
//*********************************  End of Function UpperCheck  *********************************

//********************************  Function LowerCheck  *****************************************
//***********************************************************************************************
void LowerCheck(ofstream& Out, char String[])
{
				//Recieves - the output file and a character string
				//Task - checks to see if the character string is in lower case letters
				//Returns - Nothing
	char ch;
	Out << String << endl;
	ch = String[0];
	if (islower(ch))
		Out << "This character is in lowercase" << endl;
	else
		Out << "This character is not in lowercase" << endl;
	return;
}
//*****************************  End of Function LowerCheck  ************************************

//*****************************  Function CharCheck  ********************************************
//***********************************************************************************************
void CharCheck(ofstream& Out, char String[])
{
				//Recieves - the output file and a character string
				//Task - checks to see if the character string is a character and not a digit
				//Returns - Nothing
	char ch;
	Out << String << endl;
	ch = String[0];
	
	if (isalpha(ch))
		Out << "This character is a letter" << endl;
	else
		Out << "This character is not a letter" << endl;
	return;
}
//*****************************  End of Function CharCheck  ***************************************

//*****************************  Function DigitCheck  *********************************************
//***********************************************************************************************
void DigitCheck(ofstream& Out, char String[])
{
				//Recieves - the output file and a character string
				//Task - checks to see if the character string is a digit and not a character
				//Returns - Nothing
	char ch;
	Out << String << endl;
	ch = String[0];
	
	if (isdigit(ch))
		Out << "This character is a digit" << endl;
	else
		Out << "This character is not a digit" << endl;
	return;
}
//*********************************  End of Function DigitCheck  *********************************

//******************************* Function LengthCheck  *****************************************
//***********************************************************************************************
void LengthCheck(ofstream& Out, char String[])
{
				//Recieves - the output file and a character string
				//Task - counts the number of characters in the string
				//Returns - Nothing
	int length;
	length = strlen(String);
	Out << String << endl;
	Out << "\tThe string has a length of " << length << endl;
	return;
}
//********************************  End of Function LengthCheck  ********************************

//*********************************  Function ConcatStr  ****************************************
//***********************************************************************************************
void ConcatStr(ofstream& Out, char String1[], char String2[])
{
				//Recieves - the output file and two character strings
				//Task - recieves two strings and then combines string2 to string1
				//Returns - Nothing
	Out << String1 << endl;
	Out << String2 << endl;
	strcat(String1, String2);
	Out << String1 << endl;
	return;
}
//**********************************  End of Function ConcatStr  ********************************

//*********************************  Function StrCopy  ****************************************
//***********************************************************************************************
void StrCopy(ofstream& Out, char String1[], char String2[])
{
				//Recieves - the output file and two character strings
				//Task - copies the second string to the first string
				//Returns - Nothing
	Out << "String one is:  " << String1 << endl;
	Out << "String two is:  " << String2 << endl;
	strcpy(String1, String2);
	Out << "String one is now:  " << String1 << endl;
	Out << "String two is now:  " << String2 << endl;
	return;
}
//*********************************  End of Function StrCopy  *********************************

//******************************  Function StrCompare  *****************************************
//***********************************************************************************************
void StrCompare(ofstream& Out, char line1[], char line2[])
{
				//Recieves - the output file  and two character strings
				//Task - Compares the two strings and determines which string would come first
				//Returns - Nothing
	Out << line1 << endl;
	Out << line2 << endl;
	if ( strcmp(line1, line2) == 0 )
		Out << "The strings are the same" << endl;
    else if (strcmp(line1, line2) > 0 )
		Out << "The first string comes after the second string" << endl;
	else
		Out << "The second string comes after the first string" << endl;
	return;
}
//*******************************  End of Function StrCompare  **********************************
