#include <iostream>
#include <string>
#include "employeeFunctions.h"

using namespace std;

int main() {

	// Declare variables

	const int MAX_EMPLOYEES = 10;					// Initialized to 10
	int currentCount = 0;							// Variable to track the number of employee records entered 
	char userInput;									// Variable to hold the user input

	Employee employees[MAX_EMPLOYEES];				// Define an array named employees of struct type Employee of size MAX_EMPLOYEES

	do {											// Use a do-while loop to prompt for user input (a, d, l, x)
		userInput = GetAction();					// Call GetAction() function for user input

		switch (userInput) {						// Call functions using switch / case / break

		case 'a':									// Input 'a' runs AddEmployees() function
			AddEmployees(employees, currentCount, MAX_EMPLOYEES);
			break;
		
		case 'd':									// Input 'd' runs DeleteEmployees() function
			DeleteEmployees(employees, currentCount);
			break;

		case 'l':									// Input 'l' runs ListEmployees() function
			ListEmployees(employees, currentCount);
			break;
		}
	} while (userInput == 'a' || userInput == 'd' || userInput == 'l');		// While condition (continue if a, d, or l; exit for any other entry)

	return 0;										// Exit the program

}