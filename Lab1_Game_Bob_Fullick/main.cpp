#include<iostream> // for inputs and outputs to console
#include<random> // for random number generator

using namespace std; // to use std naming

int main() {
	int number; // creates an integer type variable named number
	int guess;  // creates an integer named guess
	int tries;  // creates an integer named int
	random_device rd;
	default_random_engine engine(rd());
	uniform_int_distribution<int> uniform_dist(1, 100);

	number = uniform_dist(engine);

	cout << "Let's play a game!" << endl; // sends the statement to the console
	cout << "I will think of a number 1-100. Try to guess it." << endl;
	cout << endl;

	tries = 0; // initaializes variable tries to the value of 0
	do {
		cout << "Guess a number: ";
		cin >> guess;         // puts the value from the console in guess
		tries++;              // increments varialbe tries up by 1
		if (guess == number)  // if true, executes the next section of code
		{
			cout << endl;
			cout << "You guessed it!" << endl;
			cout << "and it only took you: " << tries << endl;
		}
		else if ((guess < number) && (guess >= 1))
		{
			cout << "Higher" << endl;
		}
		else if ((guess > number) && (guess <= 100))
		{
			cout << "Lower" << endl;
		}
		else
			cout << "Your guess is not in the range!" << endl;
	} while (guess != number);   // loop continues until condition is false

	cout << endl;
	cout << "<enter> to terminate: " << endl;

	return 0;
}