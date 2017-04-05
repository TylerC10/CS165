/********************
 * Name: Tyler Cope
 * Date: 10/9/2016
 * Description: This is the class specification file for Project 3.c.
 * It defines a class, Point. Point has two private data members, get
 * and set functions for both members, a constructor, a default constructor,
 * and a method that calculates the distance between two Point objects.
 ********************/

#ifndef POINT_HPP	//Include guard
#define POINT_HPP

class Point		
{
  private:
   double xCoordinate;	            //Private data members
   double yCoordinate;

  public:
   void setXCoord(double);	        //Set methods
   void setYCoord(double);
   double getXCoord() const;	    //Get methods
   double getYCoord() const;
   Point(double, double);		    //Constructor with two parameters
   Point();				            //Default constructor
   double distanceTo(const Point&);	//Method that calculates the distance 
};					                //Parameter is a const reference to another Point

#endif
