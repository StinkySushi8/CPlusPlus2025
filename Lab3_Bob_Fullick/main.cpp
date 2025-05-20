#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

// invalid highway number case
bool isValidHighway(hwnumber) 
	int hwnumber
	if ((highwayNumber <= 0) || (highwayNumber >= 1000) || ((highwayNumber % 100) == 0)) {
		return false;
}

int main()	{
	int highwayNumber;				// int for highway number
	int cardinalDirection;			// int to store value for cardinal direction
	int highwayServes;				// int to store the highway that an auxiliary highway serves
	bool valid;

	cout << "Enter a highway number: ";		// requests user to input a highway number
	cin >> highwayNumber;
	cout << endl << endl;					// create space for neatness

	valid = isValidHighway(highwayNumber);

	if (!valid) {
		cout << "Highway " << highwayNumber << " is not a valid highway" << endl;
	}

	// primary highway number case with two options E/W or N/S
	else if ((highwayNumber >= 1) && (highwayNumber <= 99)) {
		cardinalDirection = highwayNumber % 2;		// determines E/W or N/S

		if (cardinalDirection == 0) {	// case for E/W
			cout << "I-" << highwayNumber << " is primary, going east/west." << endl << endl;
		}

		else {							// case for N/S
			cout << "I-" << highwayNumber << " is primary, going north/south." << endl << endl;
		}
	}

	// auxiliary highway number case with primary highway servicing and two options for E/W or N/S
	else {
		highwayServes = highwayNumber % 100;		// determines highway servicing
		cardinalDirection = highwayServes % 2;		// determines highway E/W or N/S

		if (cardinalDirection == 0) {	// case for E/W
			cout << "I-" << highwayNumber << " is auxiliary, serving I-" << highwayServes << ", going east / west." << endl << endl;
		}

		else {							// case for N/S
			cout << "I-" << highwayNumber << " is auxiliary, serving I-" << highwayServes << ", going north/south." << endl << endl;
		}
	}

	return 0;
}