/********************************************
 * Name: Tyler Cope
 * Date: 11/30/16
 * Description: Class implementation file for the TicTactToe
 * class. Defines all the member functions of the class.
*********************************************/

#include "TicTacToe.hpp"		//Needed to define the functions
#include <iostream>

int main()				//Main method needed to start a new game
{
  char inputTurn;
  std::cout << "Who's going first? (X/O)?" << std::endl;
  std::cin >> inputTurn;

  TicTacToe newGame(inputTurn);
  newGame.play();
  return 0;
}

TicTacToe::TicTacToe(char startTurn)	//Constructor that initializes a new game
{
  turn = startTurn;

}

void TicTacToe::play()			//Method that actually plays the game
{

  int holder = gameField.gameState();	//Returns the proper value for the winner
  gameField.print();			//Prints the board for users to see

  int xcoord,				//Coordinates for players to enter their moves
      ycoord;

  do
   {
     std::cout << "Player " << turn << " please enter your move. ";
     std::cin >> xcoord >> ycoord;

     if(gameField.makeMove(xcoord, ycoord, turn) == true)	//Calls the makeMove method from Board and checks if it can work
       {
         gameField.makeMove(xcoord, ycoord, turn);
         gameField.print();
         holder = gameField.gameState();			//Update the holder

         if(turn == 'x')					//Swap turns
           {
             turn = 'o';
           }

         else
           {
             turn = 'x';
           }
        }

      else							//Displays error message if the space is taken
        {	
          std::cout << "That square is already taken." << std::endl;
        }

   }while(holder == PROGRESS);

  if(holder == X_WON)						//Use the integer value to return the proper result for x winning, o winning, or draw
    {
      std::cout << "Player X wins!" << std::endl;
    }

  else if(holder == O_WON)
    {
      std::cout << "Player O wins!" << std::endl;
    }

  else if(holder == DRAW)
    {
      std::cout << "It's a draw!" << std::endl;
    }
}
