/************************
 * Name: Tyler Cope
 * Date: 10/1/2016
 * Description: This program is a quick number guessing game. It first
 * asks a user to input a number to guess. It then asks the user to enter
 * guesses for that number. If the guess is too high or too low, the 
 * program lets the user know. Finally, when the guess is correct, the
 * program displays how many guesses it took to get the correct number.
 ************************/




#include <iostream>


using std::cout;
using std::cin;
using std::endl;


void guessNum();

int main() {

guessNum();

}



void guessNum(){

	int startingNumber,		//Integer variable to hold the number to be guessed
	    guessCount,			//Integer variable that keeps track of the number of guesses
	    userGuess;			//Integer variable that allows the user to keep guessing

	cout << "Enter the number for the player to guess." << endl;
	cin >> startingNumber;
	cout << "Enter your guess." << endl;

	//Because the program is designed to ask users to input guesses, 
	//we want the program to run at least once (even if they guess
	//correctly the first time, it's still "one" guess). Therefore,
	//a do-while loop will work best here.

	do
	  {
		cin >> userGuess;

		if(userGuess > startingNumber)
		   {
			cout << "Too high - try again." << endl;
		   }

		if(userGuess < startingNumber)
		   {
			cout << "Too low - try again." << endl;
		   }

		guessCount++;

	  } while(userGuess != startingNumber);

	cout << "You guessed it in " << guessCount << " tries." << endl;

}
