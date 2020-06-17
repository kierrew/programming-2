#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <string>
#include "Employee.h"

using namespace std;


class HourlyEmployee : public Employee{
private:
    double payRate;
    int    hoursWorked;
    
public:
    HourlyEmployee();
    HourlyEmployee(string, string, int, string, double, Role, double, int);
    ~HourlyEmployee();
	HourlyEmployee& operator=(const Employee&);
    //add a getter and a setter below for each data field above and implement them in .cpp
    void setPayRate(HourlyEmployee*& p);
	void setPayRate(double);
	double getPayRate() const;
	
	void setHoursWorked(HourlyEmployee*& p);
	int getHoursWorked() const;
	
	void setHourlyEmployee(HourlyEmployee*& p);
	void setRolesH(HourlyEmployee*&);
	void setSSNH(HourlyEmployee*&);
	void setFNameH(HourlyEmployee*&);
	void setLNameH(HourlyEmployee*&);
	void setDepartmentH(HourlyEmployee*&);
};
#endif