/***************************************
 * Name: Tyler Cope
 * Date: 11/30/16
 * Description: The class specification file for the TicTacToe class.
 * Has a board member to represent a game as well as a constructor
 * and a method to play the game.
****************************************/

#ifndef TICTACTOE_HPP			//Include guard
#define TICTACTOE_HPP

#include "Board.hpp"			//Needed because the class has a Board member

class TicTacToe
{
  protected:
   Board gameField;
   char turn;
   
  public:
   TicTacToe(char);
   void play();                 //Method to play the game
};
#endif
