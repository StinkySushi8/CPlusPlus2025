#include <iostream>							// only PPD needed is iostream

using namespace std;						

int main() {

	int t = 0;								// declare needed variables, initialize to 0
	int f = 0;
	int frame = 0;
	int frameScore[10];						// declare two matrices, one to record each throw value
	int throwValue[21];						// and one to record the score for each frame

	for (t = 0; t < 21; ++t) {				// input all frame score values in a game of bowling, up to 21
		cin >> throwValue[t];
	}

	t = 0;									// re-initialize t to 0

	for (f = 0; f < 9; ++f) {				// outer loop to execute 10 frames of bowling
		frame = 0;
		frame = throwValue[t];
		if (frame == 10) {					// loop to calculate value for a strike
			frame += throwValue[t + 1] + throwValue[t + 2];
		}
		else {
			t++;
			frame += throwValue[t];
			if (frame == 10) {				// loop to calculate value for a spare
				frame += throwValue[t + 1];
			}
		}
		t++;
		if (f > 0) {
			frame += frameScore[f - 1];
		}
		frameScore[f] = frame;				// record final value of that frame to array component frameScore[f]
	}
	frameScore[f] = frameScore[f - 1] + throwValue[t] + throwValue[t + 1] + throwValue[t + 2];		// running total of bowling score
	f = 0;
	
	// Print the output

	for (f = 0; f < 10; ++f)				// count through frameScore
	{
			cout << frameScore[f] << " ";	// format for output line
	}

	cout << endl;							// flush buffer
	return 0;								// exit program
}