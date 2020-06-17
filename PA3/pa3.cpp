/*Kierre Willoughby
10/05/19
CMSC 2613
this program creates a database of nodes that make up a signly linked 
list that holds the info of various employees*/

#include "DB.h"
#include "Employee.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	srand(time(0));
	// create the database
	DB d(10);
	int i = 1;
	//fille the data base with employees
	while(i <= d.size()){
		Employee e;
		Employee* p = &e;
        	e.getEmployee(p);
		d.insert(e);
		i++;
	}
	cout << endl;
	
	//display the info of the employees
	d.displayEmployees();

	//delete 3 employees
	for(int k = 0; k < 3; k++){
		int social = 0;
		cout << "enter the SSN of the employee to be deleted" << endl;
		cin >> social;
		d.remove(social);
	}
	//display the list of employees after deleting three
	d.displayEmployees();
	cout << endl;
	
	//reassign the valuse of salary and role for each employee
	d.setSalaries(0.25);
	d.setRoles();

	// display all employees after changing salaries and role
	d.displayEmployees();

	// memoery management
	d.~DB();

}
