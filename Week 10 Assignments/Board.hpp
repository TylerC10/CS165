/**********************************************
 * Name: Tyler Cope
 * Date: 11/30/16
 * Description: Class specification file for the Board class.
 * it uses an ENUM to define a result for a Tic-Tac-Toe game.
 * It also has methods to make a move in the game, print the game,
 * and a method to get the result of the game.
**********************************************/

#ifndef BOARD_HPP				//Include guard
#define BOARD_HPP


enum Result{X_WON, O_WON, DRAW, PROGRESS};	//Enum for the result

class Board
{
  public:
   char board[3][3];				//Holds the game board
   int turns;  					//Keeps track of the total number of turns for the result
 
  public:
   Board();					//Default constructor
   bool makeMove(int, int, char);		//Method to make a move
   int gameState();				//Gets the result
   void print();				//Displays the game board
};
#endif
