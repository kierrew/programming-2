#ifndef DB_H
#define DB_H
#include "Node.h"
using namespace std;


class DB{
	private:
		Node* head;
		int count;
		Node* current;
		Node* temp;
		
	public:
		DB(int); 
		~DB(); 
		void insert(EMP&); 
		void remove(int); 
		void setSalaries(double);  
		void setRoles();
		int size(); 
		void displayEmployees(); 
		void displayEmployees(Role&);
		void setCount(int&);
};

#endif
