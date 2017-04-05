/*************************************
 * Name: Tyler Cope
 * Date: 11/6/2016
 * Description: The class implementation file for the Rectangle
 * class. Here is where the function definitions are. It 
 * includes the Rectangle.hpp file to do this.
 *************************************/

#include "Rectangle.hpp"

void Rectangle::setLength(double l)			        //Set methods that take a double parameter
{
  length = l;
}

void Rectangle::setWidth(double w)
{
  width = w;
}

Rectangle::Rectangle(double sLength, double sWidth)	//Constructor that passes the parameters to the set methods
{
  setLength(sLength);
  setWidth(sWidth);
}

double Rectangle::getArea()				            //Method to calculate the area
{
  double area;
  area = length * width;
  return area;
}

double Rectangle::getPerimeter()			        //Method to calculate the perimeter
{
  double perimeter;
  perimeter = 2 * (length + width);
  return perimeter;
}
