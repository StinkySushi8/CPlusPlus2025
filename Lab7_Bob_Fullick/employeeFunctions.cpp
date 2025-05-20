#include "employeeFunctions.h"
#include <iostream>

using namespace std;

char GetAction() {
	char userInput;
	cout << endl << "Add, Delete, List, or eXit (a, d, l, x): " << flush;		// Prompts the user for their action('a' for add, 'd' for delete, 'l' for list, 'x' for exit).
	cin >> userInput;															// User choice is stored in a variable(to be returned)
	return userInput;															// Returns a character representing the action
}

void AddEmployees(Employee employees[], int& currentCount, const int MAX_EMPLOYEES) {

	// Adds a new employee record if space is available.Variable currentCount holds the total number of employee records.To add a record currentCount must be less than the maximum.
	if (currentCount < MAX_EMPLOYEES) {
		cout << endl << "Enter the name to add:" << endl;
		cin >> employees[currentCount].name;												// Enter the employee name into matrix employees on line currentCount
		cout << "Enter " << employees[currentCount].name << "'s department:" << endl;
		cin >> employees[currentCount].department;											// Enter the employee department into matrix employees on line currentCount
		cout << "Enter " << employees[currentCount].name << "'s title:" << endl;
		cin >> employees[currentCount].title;												// Enter the employee title into matrix employees on line currentCount
		cout << endl << employees[currentCount].name << "'s information has been added." << endl;
		currentCount++;
	}
	else {
		cout << endl << "List is at max employees." << endl;
	}
}

void ListEmployees(Employee employees[], int currentCount) {

	int i = 0;

	if (currentCount == 0) {											// No employees? Go back to prompt
		cout << endl << "No employees to list." << endl;
		return;
	}

	for (i = 0; i < currentCount; ++i) {								// Yes employees? Loop it out
		cout << i + 1 << ". Name: " << employees[i].name				// Retrieve i from matrix item employees[i],
			<< ", Department: " << employees[i].department				// each item is a struct Employee
			<< ", Title: " << employees[i].title << endl;				// each struct is name, department, title
	}
}

void DeleteEmployees(Employee employees[], int& currentCount) {

	if (currentCount == 0) {											// Does employees[] contain no employees? Go back to prompt
		cout << endl << "No Employees to delete. " << endl;
		return;
	}

	int deleted = 0;													// Which employee are we deleting?
	cout << endl << "Enter the employee number to delete: " << flush;
	cin >> deleted;

	deleted = deleted - 1;												// Reindex the item to delete (ie. employee 4 is employees[3])

	if (deleted < 0 || deleted >= currentCount) {						// If the item entered is not a valid employee number, go back to prompt
		cout << "Invalid employee number. " << endl;
		return;
	}

	for (int i = deleted; i < currentCount - 1; ++i) {					// Delete the employee by overwriting the next employee over the deleted,
		employees[i] = employees[i + 1];								// and the next over that one, and so on. For example, if we delete employee 6
	}																	// we put 7 over 6, then 8 over 7, then 9 over 8... until we get to currentCount - 1

	currentCount--;

	cout << endl << "Employee has been deleted. " << endl;

}