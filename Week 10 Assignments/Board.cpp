/*****************************************
 * Name: Tyler Cope
 * Date: 11/30/16
 * Description: Class implementation file for the Board class.
 * It draws a board, allows players to make moves, and gets the 
 * result of the game.
 *****************************************/

#include "Board.hpp"			//Need to include Board.hpp
#include <iostream>			//Needed to display the board

Board::Board()				//Default constructor that initializes a board
{					// with periods to indicate unoccupied spaces
    turns = 0;

    for(int i = 0; i < 3; i++)
       {
         for(int j = 0; j < 3; j++)
            {
              board[i][j] = '.';
            }
       }
}

bool Board::makeMove(int xcoord, int ycoord, char turn)		//Allows players to make moves

{
    if(board[xcoord][ycoord] == '.')				//If a space has a period, then a player has yet to move
    {								//there.
        board[xcoord][ycoord] = turn;
        return true;
    }

    else
    {
        return false;
    }
}

int Board::gameState()						//Logic to keep track of the winner
{

    turns++;							//Increments turns to enable draws
    char holder = '.';						//Temporary char to check who won

    if ((board[0][0] == 'x' || board[0][0] == 'o') && (board[0][0] == board[0][1]) && (board[0][1] == board[0][2]))	//Logic for winning by three across

    {

        holder = board[0][2];

    }
    else if ((board[1][0] == 'x' || board[1][0] == 'o') && (board[1][0] == board[1][1]) && (board[1][1] == board[1][2]))

    {

        holder = board[1][2];

    }

    else if ((board[2][0] == 'x' || board[2][0] == 'o') && (board[2][0] == board[2][1]) && (board[2][1] == board[2][2]))

    {

        holder = board[2][2];

    }

    else if ((board[0][0] == 'x' || board[0][0] == 'o') && (board[0][0] == board[1][0]) && (board[1][0] == board[2][0]))	//Logic to win if columns are filled

    {

        holder = board[2][0];

    }

    else if ((board[0][1] == 'x' || board[0][1] == 'o') && (board[0][1] == board[1][1]) && (board[1][1] == board[2][1]))

    {

        holder = board[2][1];

    }

    else if ((board[0][2] == 'x' || board[0][2] == 'o') && (board[0][2] == board[1][2]) && (board[1][2] == board[2][2]))

    {

        holder = board[2][2];

    }

    else if ((board[0][0] == 'x' || board[0][0] == 'o') && (board[0][0] == board[1][1]) && (board[1][1] == board[2][2]))	//Logic to win diagonally

    {

        holder = board[2][2];

    }

    else if ((board[2][2] == 'x' || board[2][2] == 'o') && (board[0][2] == board[1][1]) && (board[1][1] == board[2][0]))

    {

        holder = board[2][2];

    }


    if (turns > 9)	//Returns draw if turns is maxed out

    {

        return DRAW;

    }

    if (holder == 'x')	//Returns the proper value if x or o won. Keeps going if there isn't a winner yet

    {

        return X_WON;

    }

    else if (holder == 'o')

    {

        return O_WON;

    }

    else
    {
        return PROGRESS;
    }

}

void Board::print()		//Method to print the game board

{
    std::cout << std::endl << " " << "0" << " " << "1" << " " << "2" << std::endl;
    std::cout << "0" << board[0][0] << " " << board[0][1] << " " << board[0][2] << std::endl;
    std::cout << "1" << board[1][0] << " " << board[1][1] << " " << board[1][2] << std::endl;
    std::cout << "2" << board[2][0] << " " << board[2][1] << " " << board[2][2] << std::endl;

}
