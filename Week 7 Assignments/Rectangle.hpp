/********************************
 *Name: Tyler Cope
 *Date: 11/6/2016
 *Description: This is the class specification file for the Rectangle
 *class. It has an include guard, set functions for length and width,
 *and functions to get the area and perimeter of the rectangle.
*********************************/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle
{
  protected:			        //Data members are protected so child classes can access them
   double length;
   double width;

  public:
   void setLength(double);
   void setWidth(double);
   Rectangle(double, double);	//Constructor to intialize data members
   double getArea();
   double getPerimeter();
};
#endif
