#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

enum Role {programmer = 1, manager = 2, director = 3};
    
struct Employee{
	string firstName;
    string lastName;
    int SSN;
    string department;
    Role role;
    double salary;

	void setSalary(Employee*& p);
	void setRoles(Employee*& p);
	void setSSN(Employee*& p);
	void setFName(Employee*& p);
	void setLName(Employee*& p);
	void setDepartment(Employee*& p);
	void getEmployee(Employee*& p);
};
#endif
