#pragma once
/*
// invalid highway number function



// classify highway number function
classifyHighway() {


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
*/