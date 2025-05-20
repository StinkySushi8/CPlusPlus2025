#include "highway_functions.h"													// Functions are contained in a .cpp file
																				// Is it standard to name the .cpp the same as the .h?
using namespace std;

bool isValidHighway(int highwayNum) {											// Valid highway function, returns a bool to main.cpp
	if (highwayNum < 1 || highwayNum > 999 || highwayNum % 100 == 0) {			// Three cases from Lab_3
		cout << "Invalid highway number: " << highwayNum << endl;
		return false;
	}
	return true;
}

void classifyHighway(int highwayNum) {											// void. cout to console, no return values
	if (highwayNum >= 1 && highwayNum <= 99) {									// Primary highway function
		cout << highwayNum << " - Primary Highway, direction: " 
			<< getDirection(highwayNum) << endl;								// getDirection() for NSEW
	}
	else if (highwayNum > 100 && highwayNum <= 999) {							// Auxilary highway function
		int primaryHighway = highwayNum % 100;
		cout << highwayNum << " - Auxiliary Highway, serves primary highway " 
			<< primaryHighway << ", direction: " 
			<< getDirection(highwayNum) << endl;								// getDirection() for NSEW
	}
}

string getDirection(int highwayNum) {											// Definition: NSEW. Returns a value to classifyHighway()
	return (highwayNum % 2 == 0) ? "east/west" : "north/south";					// Ternary operator (P223)
}
/*
string getDirection(int highwayNum) {											// N/S/E/W return function
	if (highwayNum % 2 == 0) {
		return "east/west";														// True: Returns E/W
	}
	else {
		return "north/south";													// False: Returns N/S
	}
} */