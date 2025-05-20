#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

// Function to calculate magnitude of the force using Coulomb's law
double calcCoulombsLaw(double q1, double q2, double K, double d) {

	double force;
	force = K * ((q1 * q2) / (d * d)); // (ADD CODE) include the equation for Coulomb's law
	return force;
}

int main() {

	// Declaration and Initialization statements
	const double K = 8.9875517923E9;	// Coulomb's constant (N x m^2/C^2)
	double d_step = 0.1;				// step size for distance (meters)
	double d_min = 0.10;				// Minimum distance (meters)
	double d_max = 2.0;					// Maximum distance (meters)
	double d = 0.0; // (ADD CODE) declare variable d for distance (meters)
	double force = 0.0; // (ADD CODE) declare the variable force (Newtons)
	double q1 = 0.0; // (ADD CODE) declare the variable q1 (Coulombs)
	double q2 = 0.0; // (ADD CODE) declare the varialbe q2 (Coulombs)

	// User input for charges
	cout << "Enter Charge 1 (C): ";
	cin >> q1;
	cout << "Enter Charge 2 (C): ";
	cin >> q2;


	// Crerate a file for results
	ofstream outFile("output.csv");

	// Loop to calculate force for each distance
	for (d = d_min; d <= d_max; d += d_step) {
		force = calcCoulombsLaw(q1, q2, K, d);
		outFile << d << ", " << force << endl;
	}

	outFile.close();	// Close the file
	return 0;

}