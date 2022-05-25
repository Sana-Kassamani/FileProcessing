#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee {
	friend ostream& operator<<(ostream&, const Employee&);
	friend istream& operator>>(istream&, Employee&);

private :

	string firstName;
	string lastName;
	int Age;


public :

	Employee(string = "", string = "", int = 16 );
	void setfirstName(string);
	void setlastName(string);
	void setAge(int);

	


};





#endif
