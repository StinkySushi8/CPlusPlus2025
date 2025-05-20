#pragma once
#include <string> // Include the string PPD and namespace std


using namespace std;

struct Employee {						// struct type Employee with members
	string name;						// name
	string department;					// department
	string title;						// title
};

//Declare 4 function prototypes: GetAction, AddEmployee, DeleteEmployee, ListEmployees;
char GetAction();						// declare GetAction();

void AddEmployees(Employee employees[], int& currentCount, const int MAX_EMPLOYEES);			// declare AddEmployees();

void ListEmployees(Employee employees[], int currentCount);										// declare ListEmployees();

void DeleteEmployees(Employee employees[], int& currentCount);									// declare DeleteEmployees();