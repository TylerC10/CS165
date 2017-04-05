/*********************
 * Name: Tyler Cope
 * Date: 10/23/2016
 * Description: This is the class specification file. It definese a class, Box,
 * and declares its data members and methods. It has three private data members.
 * It also has set and get methods, since the data members are private. There
 * are also methods to get the volume and area of a Box object. Finally, the Box
 * class has a constructor that takes three double parameters, and a default constructor.
 ********************/


#ifndef BOX_HPP
#define BOX_HPP

class Box
{
  private:
   double height;	                //These data members are private
   double width;	                //because it is good programming practice.
   double length;

  public:
   void setHeight(double);	        //Methods to set data members
   void setWidth(double);
   void setLength(double);
   double getVolume();		        //Methods to get the volume and area
   double getSurfaceArea();
   Box (double, double, double);	//Constructor to intialize data members
   Box();				            //Default constructor
};

#endif
