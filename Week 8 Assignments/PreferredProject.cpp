/********************************************
 * Name: Tyler Cope
 * Date: 11/13/16
 * Description: Class implementation file for the
 * PreferredProject class. It defines the virtual
 * member function and calls the constructor
 * of the parent class.
 *******************************************/

#include "PreferredProject.hpp"


/*
using namespace std;

int main() {
  PreferredProject p1 (101.0, 100, 100);
  cout << p1.billAmount() << endl;

  return 0;
}
*/

PreferredProject::PreferredProject (double pHours, double pMaterials, double pTransportation) 
:
				   CustomerProject(pHours, pMaterials, pTransportation)
{
}

double PreferredProject::billAmount()				//Defines the virtual member function
{
  if (hours <= 100)
    {
      return (.85 * materials) + (.90 * transportation) + (80 * hours);
    }

  else
    {
      return (.85 * materials) + (.90 * transportation) + 80000;
    }
}
