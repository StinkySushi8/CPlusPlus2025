#include <iostream>

using namespace std;

int main() {
    int rolls[21] = { 0 }; // Maximum possible rolls in a game
    int frames[10] = { 0 }; // Stores the score per frame
    int rollIndex = 0;

    // Input all rolls
    for (int i = 0; i < 21; i++) {
        if (!(cin >> rolls[i])) {
            break; // Stop if input ends
        }
    }

    int score = 0;
    int roll = 0;

    // Calculate score frame by frame
    for (int frame = 0; frame < 10; frame++) {
        if (rolls[roll] == 10) { // Strike
            frames[frame] = 10 + rolls[roll + 1] + rolls[roll + 2];
            roll += 1;
        }
        else if (rolls[roll] + rolls[roll + 1] == 10) { // Spare
            frames[frame] = 10 + rolls[roll + 2];
            roll += 2;
        }
        else { // Open frame
            frames[frame] = rolls[roll] + rolls[roll + 1];
            roll += 2;
        }
        score += frames[frame];
    }

    cout << score << endl;
    return 0;
}
