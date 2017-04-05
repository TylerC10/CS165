/***********************
 * Name: Tyler Cope
 * Date: 10/9/2016
 * Description: The class implementation file for the LineSegment
 * class. It contains the method definitions for all the prototypes
 * in LineSegment.hpp. It includes LineSegment.hpp to do this. 
 ***********************/


#include "LineSegment.hpp"

void LineSegment::setEnd1(Point setPoint1)  //Set methods that take a Point parameter
{
  firstPoint = setPoint1;
}

void LineSegment::setEnd2(Point setPoint2)
{
  secondPoint = setPoint2;
}

Point LineSegment::getEnd1()		        //Set methods
{
  return firstPoint;
}

Point LineSegment::getEnd2()
{
  return secondPoint;
}

LineSegment::LineSegment(Point cPoint1, Point cPoint2)	//Constructor that initializes members with the set methods
{
  setEnd1(cPoint1);
  setEnd2(cPoint2);
}

/**********************************************
 * Description: This method uses the distance *
 * formula used in the distanceTo method to   *
 * find the length of a LineSegment object.   *
 *********************************************/

double LineSegment::length()				
{							                
  return firstPoint.distanceTo(secondPoint);
}

/*********************************************
 * Description: This method calculates the   *
 * slope of a LineSegment object by finding  *
 * the x and y coordinates of its two Points,*
 * and using the fomula (x2 - x1)/(y2-y1).   *
 ********************************************/

double LineSegment::slope()				    
{
  double xCoordSub = (secondPoint.getXCoord() - firstPoint.getXCoord());
  double yCoordSub = (secondPoint.getYCoord() - firstPoint.getYCoord());
  return (yCoordSub / xCoordSub);
}
