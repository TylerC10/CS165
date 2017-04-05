/*******************************************
 * Name: Tyler Cope
 * Date: 11/13/16
 * Description: The class specification file for the 
 * CustomerProject class. It has get and set methods
 * for the member variables as well as a pure virtual function.
 *******************************************/

#ifndef CUSTOMERPROJECT_HPP		//Include guard
#define CUSTOMERPROJECT_HPP

class CustomerProject
{
  protected:
   double hours;
   double materials;
   double transportation;

  public:		
   void setHours(double);							//Get and set methods for each member variable
   double getHours();
   void setMaterials(double);
   double getMaterials();
   void setTransportation(double);
   double getTransportation();
   CustomerProject(double hours, double materials, double transportation);	//Constructor
   virtual double billAmount() = 0;						//Pure virtual function
};
#endif 
