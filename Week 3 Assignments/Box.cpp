/*******************
 * Name: Tyler Cope
 * Date: 10/9/2016
 * Description: This is the class implementation file. It contains
 * all the method definitions for the Box class. It includes the Box
 * header file since that's where the Box class was created.
*******************/


#include "Box.hpp"

void Box::setHeight (double h)	//Set methods to set the private data members
{
  height = h;
}

void Box::setWidth (double w)
{
  width = w;
}

void Box::setLength (double l)
{
  length = l;
}

Box::Box (double cHeight, double cWidth, double cLength)	//Constructor that uses the
{								                            //set methods to initialize
  setHeight(cHeight);					                	//data members
  setWidth(cWidth);
  setLength(cLength);
}

Box::Box ()		                //Default constructor
{
  setHeight(1);
  setWidth(1);
  setLength(1);
}

/*********************************************
 * Description: This method calculates the   *
 * volume of a Box by multiplying the length *
 * times the width times the height.         *
 ********************************************/

double Box::getVolume()		    
{
  double volume;  
  volume = length * width * height;
  return volume;
}

/*******************************************
 * Description: This method calculates the *
 * surface area of a Box.                  *
 ******************************************/
 
 
double Box::getSurfaceArea()	//Calculates and returns the surface area for a Box object
{
  double surfaceArea;
  surfaceArea = (2.0 * ((length * width) + (length * height) + (width * height)));
  return surfaceArea;
}
