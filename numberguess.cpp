
#include <iostream>
using namespace std;

int main() {
    int secret = 25;
    int guess;
    int chances = 5;

    cout << "===== NUMBER GUESSING GAME =====" << endl;
    cout << "Guess a number between 1 and 50" << endl;

    while (chances > 0) {
        cout << "\nEnter your guess: ";
        cin >> guess;

        if (guess == secret) {
            cout << "Congratulations! You won!" << endl;
            return 0;
        }
        else if (guess > secret) {
            cout << "Too high!" << endl;
        }
        else {
            cout << "Too low!" << endl;
        }

        chances--;

        cout << "Chances left: " << chances << endl;
    }

    cout << "\nGame Over! The number was " << secret << endl;

    return 0;
}
