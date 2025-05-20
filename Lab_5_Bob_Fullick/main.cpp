/* This program is structured so 1) main.cpp has the big picture
	2) highway_functions.h has the header files (used to be declared between PPD and int main()
	3) highway_functions.cpp has the functions themselves*/

#include <iostream>								// Standard preprocessor directive
#include <fstream>								// Standard preprocessor directive
#include <string>								// Standard preprocessor directive (LEARNME)
#include "highway_functions.h"					// Header file (LEARNME)

using namespace std;							// Simplifies some code

int main() {

	ifstream inputFile("highway.txt");				// inputFile is my input stream variable

	if (!inputFile.is_open()) {						// Checks to see if inputFile opened successfully
		cout << "Error: Unable to open file highway.txt" << endl;
		return 1;									// return error message, error code, and exit program
	}

	int highwayNumber;								// int for highway number
	// int cardinalDirection;						// int to store value for cardinal direction (obsolete)
	// int highwayServes;							// int to store the highway that an auxiliary highway serves (obsolete)
	// bool valid;									// return for valid highway (obsolete)

	while (inputFile >> highwayNumber) {			// Does the work of calling the functions
		if (isValidHighway(highwayNumber)) {		// Function call, isValidHighway in highway_functions.cpp
			classifyHighway(highwayNumber);			// If it is valid, function call: classifyHighway in highway_functions.cpp
		}
	}

	inputFile.close();								// Close ifstream inputFile (LEARNME)
	return 0;										// Exit program
}

//Open highway.txt
	// !is_open.inputFile
	//		Error message and close
	// else continue

// While (inputFile >> highwayNum) { // Read numbers until EOF

	// isValidHighway()
		// Valid?
			// yes call classifyHighway()
				// classifyHighway() will call getDirection ()
		// Not Valid -> cout "invalid highway number
	// End of while loop


