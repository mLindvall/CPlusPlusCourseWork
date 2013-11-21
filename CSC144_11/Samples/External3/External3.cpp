// This program uses the >> operator to read information from a file

// This program reads an external payroll file and calculates gross pay
// Fields in the file consits of id#s and

#include <iostream.h>
#include <fstream.h>


void main(void)

{
	ifstream CalcPay;
	ofstream outputFile;
	char id[5];
	float hours = 0.0;
	float rate = 0.0;
	float GrossPay;


	CalcPay.open ("PayRoll.txt");
	outputFile.open ("output.txt");
	cout << "Reading the Payroll File.\n\n";

	cout << "Id\tHours\tPay\Gross Pay" << endl;
	cout << "================================================" << endl;
	outputFile << "Id\tHours\tPay\Gross Pay" << endl;
	outputFile << "================================================" << endl;
	
	//for (int a = 0; a < 5; a++)
	while (!CalcPay.eof())
	{
		CalcPay >> id;
		CalcPay >> hours;
		CalcPay >> rate;
		GrossPay = hours * rate;
		cout << id << "\t" << hours << "\t" << rate << "\t" << GrossPay << endl;
		outputFile << id << "\t" << hours << "\t" << rate << "\t" << GrossPay << endl;
		
	
	}

	//Close File
	CalcPay.close();
	outputFile.close();
	cout << "\n\n\nThe End of File. \n";
}

