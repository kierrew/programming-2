#include "Employee.h"
#include <ctime>

//sets the salary of each employee
void Employee::setSalary(Employee*& p){
	p->salary = rand() % (65000 - 45000) + 45000;
}

void Employee::setRoles(Employee*& p){
	int i = rand() % 3 +1;
	if (i == 1){
		p->role = programmer;
	}
	if ( i == 2){
		p->role = manager;
	}
	if ( i == 3){
		p->role =  director;
	}
}

//sets the salary of the employee
void Employee::setSSN(Employee*& p){
	p->SSN = rand() % (900000000 - 100000000) + 100000000;
}

//sets the first name of each employee
void Employee::setFName(Employee*& p){
	string Name[6] = {"Matt", "Steven", "Jessica", "Amy", "Robert", "Kim"};
	int i = rand() % 6;
	p->firstName = Name[i];
}

//set the last name of each employee
void Employee::setLName(Employee*& p){
	 string Name[6] = {"Brown", "Smith", "Maker", "Schumer", "Lopez", "Alvarez"};
        int i = rand() % 6;
        p->lastName = Name[i];
}

// sets the department of each employee
void Employee::setDepartment(Employee*& p){
	string Dept[5] = {"IT", "Sales", "HR", "Logistics", "Analyitics"};
    int i = rand() % 5;
    p->department = Dept[i];
}

//uses previous functions to assing all employee variables at once		
void Employee::getEmployee(Employee*& p){
	setRoles(p);
	setSSN(p);
	setFName(p);
	setLName(p);
	setDepartment(p);
	setSalary(p);
}
