
#include <iostream>
#include <iomanip>
using namespace std;
#include "Employee.h"


Employee::Employee(string fname, string lname, int a) {

	setfirstName(fname);
	setlastName(lname);
	setAge(a);
	
}
void Employee::setfirstName(string sf) { firstName = sf; }


void Employee::setlastName(string sl) { lastName = sl; }


void Employee::setAge(int a) { Age =( a > 15 ? a : 16); }


ostream& operator<<(ostream& output, const Employee& e) {
	output << setw(15) << e.firstName << setw(15) << e.lastName << setw(8) << e.Age << endl;
	return output;
}

istream& operator>>(istream& input, Employee& e){
	int a;
	string s1, s2;
	input >> setw(15) >> s1 >> setw(15) >> s2 >> setw(8) >> a;
	e.setfirstName(s1);
	e.setlastName(s2);
    e.setAge(a);
	return input;
}