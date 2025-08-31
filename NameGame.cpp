
//NameGame.cpp// A simple number guessing game//

#include <iostream>
#include <cstdlib>
#include <ctime>

//send the random number generator//

using namespace std;

int main() {
	int secretNumber = rand() % 100 + 1;  //Random number between 1 and 100//
	int guess = 2; //Player's guess//
	int attempts = 3; //counter for attempts//

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I am thinking of a number between 1 and 100." << endl;	
        cout << "You have 10 attempts to guess the number." << endl;
	
	//Game loop//
	while (guess != secretNumber && attempts > 0) {
		cout << "You have " << attempts << " attempts left. Enter your guess: ";
		cin >> guess;
		if (guess < secretNumber) {
			cout << "Too low!" << endl;
		}
		else if (guess > secretNumber) {
			cout << "Too high!" << endl;
		}
		else {
			cout << "Congratulations! You guessed the number You Win!" << endl;
			break;
		}
		attempts--;
	}
	return 0;	
}