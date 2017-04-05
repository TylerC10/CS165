/**************************************
 * Name: Tyler Cope
 * Date: 11/6/2016
 * Description: This is the class implementation file
 * for the Square class. It includes both Square.hpp
 * and Rectangle.hpp (since Square inherits from Rectangle).
 *************************************/

#include "Rectangle.hpp"
#include "Square.hpp"

Square::Square(double side) : Rectangle(side, side)	//Constructor that takes one double paramter and passes it to 
{							                        //the base class constructor
}

void Square::setLength(double side)			        //Methods to override base set methods. These methods call the base class
{							                        //methods
  Rectangle::setLength(side);
  Rectangle::setWidth(side);
}

void Square::setWidth(double side)
{
  Rectangle::setLength(side);
  Rectangle::setWidth(side);
}
