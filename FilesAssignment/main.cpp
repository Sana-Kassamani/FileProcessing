
// read from and write to file
#include <iostream>
#include <iomanip>
using namespace std;
#include "Employee.h"

#include <fstream>

int main()
{
	
     // using sequential access file
	 cout << "Write and read from a sequential access file :" << endl << endl;

	ofstream outFile("Employee.txt", ios::out);
	ifstream inFile("Employee.txt", ios::in);

	if (!outFile || !inFile)
	{
		cerr << "One of the files could not be opened !" << endl;
		exit(1);
	}
	Employee emp1;
	
	cout << "Enter the first name, last name and age of each employee in this company: \n";

	
	while (cin >> emp1)
	{
		outFile << emp1;
	}
	
	cout << "\nThe employees in this company are :\n ";

	cout << setw(15) << "First Name" << setw(15) << "Last Name" << setw(8) << "Age" << endl;

	while (inFile >> emp1)
	{
		cout << emp1;
	}

	

}


