/********************************************
 * Name: Tyler Cope
 * Date: 11/13/16
 * Description: Class specification file for the 
 * PreferredProject class. It inherits from the
 * CustomerProject class so it includes 
 * "CustomerProject.hpp"
 ********************************************/
	
#ifndef PREFERREDPROJECT_HPP			//Include guard
#define PREFERREDPROJECT_HPP
#include "CustomerProject.hpp"

class PreferredProject : public CustomerProject
{
  public:
   PreferredProject(double hours, double materials, double transportation);
   double billAmount();
};
#endif
