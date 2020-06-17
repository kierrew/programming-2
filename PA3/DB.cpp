#include "DB.h"
#include <iomanip>
#include <iostream>
using namespace std;

//constructor
DB::DB(int s){
	count = s;
	head = NULL;
	current = head;
	temp = head;
	
}

//destructor
DB::~DB(){
	current = head; 
        while(current != NULL) {
		temp = current-> next;
		delete current;
		current = temp;
	}
	head = NULL;
        current = NULL;
        temp = NULL;
}

//insterts employees int the database
void DB::insert(EMP& e){
	if(head == NULL){
		head = new Node;
		current = head;
		current->e = e;
	}
	else{
		temp = new Node;
		current->next = temp;
		current = temp;
		current->e = e;
	}
}

//delete the employees from the database
void DB::remove(int social){
	temp = head->next;
	current = head;
	int x;
	x = size();
	if(social == (head->e).SSN){
		delete head;
		head = temp;
		current = temp;
		x--;
		setCount(x);
	}
	else{
		while(current != NULL){
			temp = current->next;
			if(social ==  (current->e).SSN){
				current->next = temp->next;
				delete temp;
				temp = current->next;
			}
			current = temp;
		}
		x--;
		setCount(x);
	}
}

//display the info of the employees, average salary, number of each role, and database size
void DB::displayEmployees(){
	current = head;
	double sal = 0;
	int count = 0;
	int cp = 0;
	int cm = 0;
	int cd = 0;
	cout << "FIRST NAME   LAST NAME         SSN  DEPARTMENT        ROLE      SALARY    " << endl;
	cout << endl;
	current = head;
 	while(current != NULL) {
        cout << setprecision(2) << fixed;
		cout << setw(10) << (current->e).firstName; 
		cout << setw(12) << (current->e).lastName ;
		cout<< setw(12) << (current->e).SSN ;
		cout << setw(12) << (current->e).department;
		if ((current->e).role == 1){
			cout << setw(12) << "programmer";
			cp++;
		}
		if ((current->e).role == 2){
			cout << setw(12) << "manager";
			cm++;
		}
		if ((current->e).role == 3){
			cout << setw(12) << "director";
			cd++;
		}
		cout  << setw(12) << (current->e).salary << endl << endl;
        sal += (current->e).salary;
        count++;
		current = current->next;
	}
	cout << endl;
	cout << "The average salary = " << (sal/count) << endl << endl;
	cout << "The number of programmers is " << cp << endl;
	cout << "The number of managers is " << cm << endl;
	cout << "The number of directors is " << cd << endl;
	sal = 0;
	count = 0;
	cout << "the size of the data base  is " << size() << endl << endl;
	displayEmployees((head->e).role);
}

// same as above but only for programmers
void DB::displayEmployees(Role& p){
	current = head;
	double sal = 0;
	int count = 0;
	int cp = 0;
	cout << "FIRST NAME   LAST NAME         SSN  DEPARTMENT        ROLE      SALARY    " << endl;
	cout << endl;
	current = head;
    while(current != NULL) {
		if ((current->e).role == 1){
            cout << setprecision(2) << fixed;
            cout << setw(10) << (current->e).firstName; 
			cout << setw(12) << (current->e).lastName;
			cout << setw(12) << (current->e).SSN;
			cout << setw(12) << (current->e).department;
            if ((current->e).role == 1){
				cout << setw(12) << "programmer";
				cp++;
            }
            cout  << setw(12) << (current->e).salary << endl << endl;
            sal += (current->e).salary;
            count++;
		}
        current = current->next;	
		
	}
}

// get the size of the database
int DB::size(){
	return count;
}

//reassigns the salary of each employee
void DB::setSalaries(double percent){
	current = head;
	double pay;
	while(current != NULL){
		pay = (current->e).salary;
		pay = pay + (pay * percent);
		(current->e).salary = pay;
		if((current->e).salary < 45000){
			(current->e).salary = 45000;
		}
		temp = current->next;
		current = temp;
	}
}

//reassigns the role of each employee
void DB::setRoles(){
	current = head;
	Role x;
	while(current != NULL){
		int i = rand() % 3 +1;
		if (i == 1){
			x = programmer;
			(current->e).role = x;
		}
		if ( i == 2){
			x = manager;
			(current->e).role = x;
		}
		if ( i == 3){
			x = director;
			(current->e).role =  x;
		}
		temp = current->next;
		current = temp;
	}
}

//changes the sizes 
void DB::setCount(int& s){
	count = s;
}
