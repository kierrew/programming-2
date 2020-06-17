#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Employee.h"
using namespace std;

double setSalaries();
Role setRoles();
int setSSN();


int main(){
	int i;
	double k = 0;
	//create the struct array 
	Employee* p;
	p = new Employee[5];
	//fill in the names in the array
	p[0].firstName = "Ryan";
	p[0].lastName = "Lucas";
	p[1].firstName = "Jason";
 	p[1].lastName = "Hunt";
	p[2].firstName = "Mike";
	p[2].lastName = "Brown";
	p[3].firstName = "Steven";
	p[3].lastName = "Scott";
	p[4].firstName = "George";
	p[4].lastName = "Mills";
	// fill in department
	p[0].department = "logistics";
	p[1].department = "sales";
	p[2].department = "sales";
	p[3].department = "logistics";
	p[4].department = "sales";
	// fill in salaries, roles, and SSN
	for (i = 0; i < 5; i++){
		p[i].salary = setSalaries();
		p[i].role = setRoles();
		p[i].SSN = setSSN();
	}
	// make table for employee info 
	cout << "FIRST NAME   LAST NAME         SSN  DEPARTMENT        ROLE      SALARY    " << endl;
	cout << endl;

	for (i = 0; i < 5; i++){
		cout << setprecision(2) << fixed;
		cout << setw(10) << p[i].firstName << setw(12) << p[i].lastName << setw(12) << p[i].SSN<< setw(12) << p[i].department;
		if (p[i].role == 1){
			cout << setw(12) << "programmer";
		}
		if (p[i].role == 2){
			cout << setw(12) << "manager";
		}
		if (p[i].role > 2){
			cout << setw(12) << "director";
		}
		cout  << setw(12) << p[i].salary << endl << endl;
    	}
	// average salary for employees
	for (i = 0; i < 5; i++){
		k += p[i].salary;
	}
	cout << "The average salary for the employees = " << k / (5) << endl << endl;
	
	// make table for programmer info 
	cout << "FIRST NAME   LAST NAME         SSN  DEPARTMENT        ROLE      SALARY    " << endl;
	cout << endl;

	for (i = 0; i < 5; i++){
		if (p[i].role == 1){
			cout << setprecision(2) << fixed;
			cout << setw(10) << p[i].firstName << setw(12) << p[i].lastName << setw(12) << p[i].SSN<< setw(12) << p[i].department;
			if (p[i].role == 1){
				cout << setw(12) << "programmer";
			}
			if (p[i].role == 2){
				cout << setw(12) << "manager";
			}	
			if (p[i].role > 2){
				cout << setw(12) << "director";
			}	
			cout  << setw(12) << p[i].salary << endl << endl;
    		}
	}
	// memeory management
	p = NULL;	
	delete[] p;
}

double setSalaries(){
	double y = rand() % (65000 - 45000) + 45000;
	return y;
}

Role setRoles(){
	int y = rand() % 3 +1;
	
	if (y == 1){
		return programmer;
	}
	if ( y == 2){
		return manager;
	}
	else{
		return director;
	}
	
}

int setSSN(){
	int y = rand() % (900000000 - 100000000) + 100000000;
	return y;
} 
