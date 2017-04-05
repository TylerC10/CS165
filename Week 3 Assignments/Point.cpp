/***********************
 * Name: Tyler Cope
 * Date: 10/9/2016
 * Description: Class implementation file for Project 3.c. It
 * includes Point.hpp. It defines all the methods declared in Point.hpp/
 * It also includes cmath, since that's where the sqrt and pow functions
 * are located.
 **********************/


#include "Point.hpp"
#include <cmath>

void Point::setXCoord(double x)		//Set methods
{
  xCoordinate = x;
}

void Point::setYCoord(double y)
{
  yCoordinate = y;
}

double Point::getXCoord() const		//Get methods
{
  return xCoordinate;
}

double Point::getYCoord() const
{
  return yCoordinate;
}

Point::Point(double firstCoord, double secondCoord)	//Constructor with two double parameters
{
  setXCoord(firstCoord);
  setYCoord(secondCoord);
}

Point::Point()						//Default constructor
{
  setXCoord(0);
  setYCoord(0);
}

/*************************************************
 * Description: This method calculates the       *
 * distance between Points by using the distance *
 * formula. It uses sqrt and pow functions.      *
 ************************************************/

double Point::distanceTo(const Point& secondPoint)	
{
  double xCoord1 = xCoordinate;
  double yCoord1 = yCoordinate;
  double xCoord2 = secondPoint.getXCoord();
  double yCoord2 = secondPoint.getYCoord();
  double xDistance = xCoord2 - xCoord1;
  double yDistance = yCoord2 - yCoord1;
  double distance = sqrt((pow(xDistance, 2)) + ((pow(yDistance, 2))));
  return distance;

} 
