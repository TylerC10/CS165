/*********************
 * Name: Tyler Cope
 * Date: 10/9/2016
 * Description: This is the class specification file for the LineSegment
 * class. It contains an include guard. It also includes Point.hpp, since
 * the data members, constructor, and set methods all use the Point type.
 *********************/


#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

class LineSegment
{
  private:
   Point firstPoint;            //Private data members
   Point secondPoint;

  public:
   void setEnd1(Point);         //Set methods
   void setEnd2(Point);
   Point getEnd1();             //Get methods
   Point getEnd2();
   LineSegment(Point, Point);   //Constructor
   double length();             //Method to calculate length
   double slope();              //Method to calculate slope
};

#endif
