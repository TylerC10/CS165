/******************************************
 * Name: Tyler Cope
 * Date: 11/13/16
 * Description: Class specification file for the
 * RegularProject class. It inherits from the 
 * CustomerProject class.
 *****************************************/

#ifndef REGULARPROJECT_HPP		    //Include guard
#define REGULARPROJECT_HPP
#include "CustomerProject.hpp"		//Needed to inherit from the CustomerProject class

class RegularProject : public CustomerProject
{
  public:
   RegularProject(double hours, double materials, double transportation);
   double billAmount();
};
#endif
