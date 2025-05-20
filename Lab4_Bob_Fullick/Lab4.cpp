#include <iostream>

using namespace std;

/* This program finds solutions to two linear equations using a brute force method.
   This program can only find integer solutions to equations with integer coefficients.
   This program checks for colinearity in the system of equations. */

int main() {																	

	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, x = 0, y = 0;						// declare and initialize all int type values
	bool colinear = false, solution = false;										// boolean for colinearity, boolean for solution

	cout << "Enter 6 integer values separated by spaces:" << endl;					// Prompt
	cin >> a >> b >> c >> d >> e >> f;												// Input integer values

	if ((a * e == b * d) && (b * f == c * e) && (c * d == a * f)) {
		colinear = true;
	}
	else {
		for (x = -100; x <= 100 && !solution; x++) {								// Outer loop: (initialize x to -100; counter up to 100 or until solution == 1; increment)
			for (y = -100; y <= 100; y++) {												// Inside loop, increments y from -100 to 100
				if (((a * x) + (b * y) == c) && ((d * x) + (e * y) == f)) {				// Test if the system of equations are equivalently valued
					solution = true;													// Update solution to true to break out of outer loop
					break;															// break out of inner loop
					}
				}
			if (solution) break;													// break out of outer loop
		}
	}
	
	if (colinear) {																	// Condition for if equations are colinear
		cout << "The equations are colinear." << endl;
		cout << "All values of x and y are solutions" << endl;
	}
	else if (!solution) {															// Condition for if there is no solution found
		cout << "No Solution Found" << endl;
	}
	else {																			// Condition for if there is a solution found
		cout << "The solution is x = " << x << ", y = " << y << endl;
	}

	return 0;
}