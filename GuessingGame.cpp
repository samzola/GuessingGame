#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(void) {
  srand(time(NULL));
  bool stillPlaying = true; //variable that keeps track of if the player is playing
  while (stillPlaying == true) {
    int random = rand() % 100; //generates a number between 0 and 100
    int input = 0; //this is the input, or what the user types into the console
    int guesses = 0; //variable that keeps track of number of guesses
    char yn;
    //ask user to guess a number
    cout << "Welcome to the guessing game! Guess a number between 0 and 100!" << endl;
    cin >> input;
    while (input != random) {
      if (input > random) { //if input is higher than the random number...
	cout << "Your guess was higher than the random number!" << endl; //...tell user...
	guesses++; //...add a guess...
	cin >> input; //...and prompt another guess
      }
      else if (input < random) { //if input is lower than the random number...
	cout << "Your guess was lower than the random number!" << endl; //...tell user...
	guesses++; //... add a guess...
	cin >> input; //...and prompt another guess
      }
    }
    if (input == random) { //if input is the random number...
      guesses++; //... add a guess...
      cout << "You guessed the random number!" << endl; //...tell user they are correct...
      cout << "Number of guesses: " << guesses << endl; //...display number of guesses...
      //...ask if the user wants to play again
      cout << "Do you want to play again? If yes, type y, and if no, type n." << endl;
      cin >> yn;
    }
    if (yn == 'y' || yn == 'Y') { //if they want to play again, restart the game
      stillPlaying = true;
    }
    else if (yn == 'n' || yn == 'N') { //if they don't want to play again, stop the game
      stillPlaying = false;
    }
  }
}
