//********************************  Program Idenificartion  *************************************
//*                                                                                             *
//*  Program File Name: program5.cpp                            Assignment #: 5                 *
//*                                                                                             *
//*  Program Auther: __________________________________                                         *
//*                        Michael Lindvall                                                     *
//*                                                                                             *
//*                                                                                             *
//*  Course #: CSC 184 21                                       Due Date : Nov 3, 2006          *
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
#define score 4
#define text 14
#define Sentinel "No           "

//Function Prototype
void displayHeader(ofstream &);
int getData(ifstream &, char [][text], char [][text], float[][score]);
void printOutput(ofstream&, char [][text], char [][text], float [][score], int);
void printStudentName(ofstream &);
void getAvg(float [][score], float [],int);
void getLetterGrade(char[], float [], int);
void Sort(char [][text], char[][text], float [][score], int);
void printStudent(ofstream&);
void printOutput2(ofstream&, char [][text], char [][text], float [][score], float [], char[], int);
void LetterSort(char [][text], char[][text], float [][score], float[], char[], int);

void main(void)
{
	//Declare the Varibles to be used
	char Fname[count][text];
	char Lname[count][text];
	float TestScore[count][score] = {0};
	float Average[count] = {0};
	char LetterGrade[count];
	int code;

	ifstream Infile;
	ofstream Outfile;

	Infile.open("data5", ios::in);				//Open input file.
	Outfile.open("Output.txt",ios::out);		//Open output file.

	//Displays the programmer's name and assignment number
	displayHeader(Outfile);

	//Getting the data from the input data file
	code = getData(Infile, Fname, Lname, TestScore);
	
	
	//Print the data in the data fields to the output
	Outfile << "The original student data is:" << endl;  //tells us what has been
	printStudentName(Outfile);								//done to output
	printOutput(Outfile, Fname, Lname, TestScore, code);

	Sort(Fname, Lname, TestScore, code);
	//Print the data in the data fields to the output

	Outfile << "\n\nThe original student data sorted:" << endl;  //tells us what has been
	printStudentName(Outfile);								//done to output
	printOutput(Outfile, Fname, Lname, TestScore, code);

	getAvg(TestScore, Average, code);
	getLetterGrade(LetterGrade, Average, code);

	Outfile << "\n\nThe list of students with their test average and course grade is:" << endl;
	printStudent(Outfile);
	printOutput2(Outfile, Fname, Lname, TestScore, Average, LetterGrade, code);

	LetterSort(Fname, Lname, TestScore, Average, LetterGrade, code);

	Outfile << "\n\nThe list of students sorted by test average high to low:" << endl;
	printStudent(Outfile);
	printOutput2(Outfile, Fname, Lname, TestScore, Average, LetterGrade, code);

	Outfile << "\n\n-- END OF FILE --" << endl;  //so you know all the data has been looked at

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
	Outfile << setw(20) << "Assignment #4\n";
	Outfile << setw(35) << "-----------------------------------";
	Outfile << setw(35) << "-----------------------------------\n\n";
	return;
}
//*******************************  End of Function displayHeader  ********************************

//****************************** Function getData ***********************************************
//**********************************************************************************************
int getData(ifstream& In, char First[][text], char Second[][text], float Grade[][score])
{
				//Recieves - data from the input file
				//Task -  puts the input data into right array field
				//Returns -  arrays filled with data
	int RS, CS, code;
	RS=CS=0;
	In>>ws;
	
	for(RS=0; RS < count; RS++)
	{
		In.getline(First[RS], text);
		if (strcmp(First[RS], Sentinel) ==0)
			break;
		else;
		//code = RS;
		In.getline(Second[RS], text);
		for (CS=0; CS < score; CS++)
			In >> Grade[RS][CS];
		In>>ws;
	}
	code = RS;
	cout << Sentinel << endl;
	

	cout << "in getData" << endl;
	return code;
}
//*******************************  End of Function getData  *************************************

//********************************  Function printOutput  **************************************
//**********************************************************************************************
void printOutput(ofstream& Out, char str1[][text], char str2[][text], float data[][score], int code)
{
				//Recieves - the data to be printed to output file
				//Task - prints the data to the output file
				//Returns - the printed data on the output file
	int RS, CS;
	RS=CS=0;
	for (RS=0; RS < code; RS++)
	{
		Out << setw(text) << str1[RS];
		Out << setw(text) << str2[RS] ;
		for (CS=0; CS < score; CS++)
		{
			Out << setiosflags(ios::fixed | ios::showpoint);
			Out << setprecision(1);
			Out << setw(8) << data[RS][CS];
		}
		Out << endl;
	}
	return;
}
//********************************** End of Function printOutput ********************************

//********************************** Function printStudentName  *********************************
//***********************************************************************************************
void printStudentName(ofstream& Outfile)
{
				//Recieves - the output file
				//Task - prints the student header file
				//Returns - the printed data

		
	Outfile << "\tStudent Name" << endl;
	Outfile << "  First" << setw(text) << "Last" << setw(text);
	for (int i=0; i < score; i++)
		Outfile << "Test " << i+1 << setw(7);
	Outfile << endl;
	Outfile << "----------" << setw(text) << "----------" << setw(12);
	for ( i=0; i < score; i++)
		Outfile << "------" << setw(8);
	Outfile << endl;
	
	return;
}
//**********************  End of Function printStudentName  ************************************


//****************************  Function getAvg  **********************************************
//*********************************************************************************************
void getAvg(float data[][score], float avg[], int code)
{
				//Recieves - the test score data
				//Task - computes the average test score for each student
				//Returns - the average for each student through an array

	int CS, RS;
	float Temp=0;
	
	for (CS=0; CS < code; CS++)
	{
		Temp=0;
		for(RS=0; RS < score; RS++)
		{
			Temp += data[CS][RS];
		}
		avg[CS] = Temp/score;
		//cout << avg[CS] << endl;
	}

	return;
}
//***************************** End of Function getAvg  ******************************************

//**********************************  Function Get LetterGrade  **********************************
//************************************************************************************************
void getLetterGrade(char Grade[], float Avg[], int code)
{				
				//Recieves - the array of average test scores and row and column size
				//Task - figure out what letter grade each stundet should recieve based on
							//students average score
				//Returns the letter grade for each student in an array
	
	int i;

	for(i=0; i < code; i++)
	{
		// if state to see what grade each student should get
		if(Avg[i] >= 90)
			Grade[i] = 'A';
		if(Avg[i] < 90 && Avg[i]>=80)
			Grade[i] = 'B';
		if(Avg[i] < 80 && Avg[i]>=70)
			Grade[i] = 'C';
		if(Avg[i] < 70 && Avg[i]>=60)
			Grade[i] = 'D';
		if(Avg[i] < 60)
			Grade[i] = 'F';
	}
	return;
}


//********************************* Function Sort ***********************************************
//***********************************************************************************************
void Sort(char First[][text], char Second [][text], float Score[][score], int code)
{
				//Recieves - data arrays to be sorted
				//Tasks - sorts the data arrays in alphabetical order
				//Returns - the sorted data arrays 

	int IndexA, IndexB;
	char temp[text];
	char temp2[text];
	float temp3[score];

				// IndexA controls how many times we pass thru 
				// the array the array
	for ( IndexA = 0 ; IndexA < code-1; IndexA++)    
	  {
		            // IndexB controls at which end of the array we begin and
		            // which elements are compared and swapped if needed.
		 for ( IndexB = code-1; IndexB > IndexA ; IndexB--)    
		    if (strcmp(Second[IndexB], Second[IndexB-1]) < 0 )                
			{
				//Changes the string that was being compared
				strcpy(temp, Second[IndexB]);					//temp = Second[IndexB];
				strcpy(Second[IndexB], Second[IndexB-1]);		//Second[IndexB] = Second[IndexB-1];
				strcpy(Second[IndexB-1], temp);				//Second[IndexB-1] = temp;

				//Changes the other strings
				strcpy(temp2, First[IndexB]);					
				strcpy(First[IndexB], First[IndexB-1]);		
				strcpy(First[IndexB-1], temp2);	
				
				for(int i=0;i<score;i++)
				{
					temp3[i] = Score[IndexB][i];
					Score[IndexB][i] = Score[IndexB-1][i];
					Score[IndexB-1][i] = temp3[i];
				}

			}
		}  
	return;
}
//**************************** End of Function Sort ***************************************  

//********************************** Function printStudent  ************************************
//***********************************************************************************************
void printStudent(ofstream& Outfile)
{
				//Recieves - the output file
				//Task - prints the student header file
				//Returns - the printed data

		
	Outfile << "\tStudent Name" << endl;
	Outfile << "  First" << setw(text) << "Last" << setw(text);
	for (int i=0; i < score; i++)
		Outfile << "Test " << i+1 << setw(7);
	Outfile << " Avg " << setw(8) << " Grade";
	Outfile << endl;
	Outfile << "----------" << setw(text) << "----------" << setw(12);
	for ( i=0; i < score+2; i++)
		Outfile << "------" << setw(8);
	Outfile << endl;
	
	return;
}
//**********************  End of Function printStudent ***************************************


//********************************  Function printOutput2 **************************************
//**********************************************************************************************
void printOutput2(ofstream& Out, char str1[][text], char str2[][text], float data[][score],
				 float avg[], char letter [], int code)
{
				//Recieves - the data to be printed to output file
				//Task - prints the data to the output file
				//Returns - the printed data on the output file
	int RS, CS;
	RS=CS=0;
	for (RS=0; RS < code; RS++)
	{
		Out << setw(text) << str1[RS];
		Out << setw(text) << str2[RS] ;
		for (CS=0; CS < score; CS++)
		{
			Out << setiosflags(ios::fixed | ios::showpoint);
			Out << setprecision(1);
			Out << setw(8) << data[RS][CS];
		}
		Out << setw(8) << avg[RS] << setw(5) << letter[RS];
		
		Out << endl;
	}
	return;
}
//********************************** End of Function printOutput2 *******************************

//********************************* Function LetterSort *****************************************
//***********************************************************************************************
void LetterSort(char First[][text], char Second [][text], float Score[][score], float avg[],
		  char letter[], int code)
{
				//Recieves - data arrays to be sorted
				//Tasks - sorts the data arrays in alphabetical order
				//Returns - the sorted data arrays 

	int IndexA, IndexB;
	char temp[text];
	char temp2[text];
	float temp3[score];
	float temp4;		//for the test average
	char temp5;			//for the letter grade

				// IndexA controls how many times we pass thru 
				// the array the array
	for ( IndexA = 0 ; IndexA < code-1; IndexA++)    
	  {
		            // IndexB controls at which end of the array we begin and
		            // which elements are compared and swapped if needed.
		 for ( IndexB = code-1; IndexB > IndexA ; IndexB--)    
		    if (letter[IndexB] < letter[IndexB-1] )//(strcmp(letter[IndexB], letter[IndexB-1]) < 0 )                
			{
				//Changes the string being compared
				temp5 = letter[IndexB];//strcpy(temp5, letter[IndexB]);					
				letter[IndexB]= letter[IndexB-1];//strcpy(letter[IndexB], letter[IndexB-1]);		
				letter[IndexB-1] = temp5;//strcpy(letter[IndexB-1], temp5);	


				//Changes the last name
				strcpy(temp, Second[IndexB]);					//temp = Second[IndexB];
				strcpy(Second[IndexB], Second[IndexB-1]);	//Second[IndexB] = Second[IndexB-1];
				strcpy(Second[IndexB-1], temp);				//Second[IndexB-1] = temp;

				//Changes the other strings
				strcpy(temp2, First[IndexB]);					
				strcpy(First[IndexB], First[IndexB-1]);		
				strcpy(First[IndexB-1], temp2);	
				
				temp4 = avg[IndexB];
				avg[IndexB] = avg[IndexB-1];
				avg[IndexB-1] = temp4;
				
				for(int i=0;i<score;i++)
				{
					temp3[i] = Score[IndexB][i];
					Score[IndexB][i] = Score[IndexB-1][i];
					Score[IndexB-1][i] = temp3[i];
				}

				

			}
		}  
	return;
}
//**************************** End of Function LetterSort **********************************  




// PROGRAM IS NOT SORTING AVERAGES RIGHT, FIX IT!!!!!!!!!!!!!!