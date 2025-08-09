#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;
main(){
    srand(time(0));               
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    cout << "=== Number Guessing Game ===" << endl;
    cout << "Guess the number (1 to 100): " << endl;
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;
            break;
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Too low! Try again." << endl;
        }
    }
}
