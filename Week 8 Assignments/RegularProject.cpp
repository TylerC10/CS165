/**************************************
 * Name: Tyler Cope
 * Date: 11/13/16
 * Description: The class implementation file
 * for the RegularProject class. It defines the 
 * pure virtual function and calls the constructor
 * of the parent class.
 *************************************/

#include "RegularProject.hpp"

/*
using namespace std;

int main() {
  RegularProject r1(4.0, 5.0, 6.0);
  
  cout << r1.getHours() << endl;
  cout << r1.billAmount() << endl;
  return 0;
}
*/



RegularProject::RegularProject(double rHours, double rMaterials, double rTransportation) : 
				CustomerProject(rHours, rMaterials, rTransportation)
{
}

double RegularProject::billAmount()			//Defines the virtual function
{
  return materials + transportation + (hours * 80);
}

