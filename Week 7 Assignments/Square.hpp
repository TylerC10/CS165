/*************************************
 * Name: Tyler Cope
 * Date: 11/6/2016
 * Description: The class specification file for the Square
 * class. It inherits from the Rectangle class. It contains
 * an include guard and methods to override the base set methods.
 ************************************/

#ifndef SQUARE_HPP		    //Include guard
#define SQUARE_HPP
#include "Rectangle.hpp"

class Square : public Rectangle
{
  public:
   Square(double side);		//Constructor
   void setLength(double);	//Methods to override set functions in base class
   void setWidth(double);
};
#endif
