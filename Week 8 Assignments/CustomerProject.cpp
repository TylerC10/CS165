/***************************************
 * Name: Tyler Cope
 * Date: 11/13/16
 * Description: The class implementation file for the
 * CustomerProject class. It defines all the get and set
 * methods, as well as the constructor.
 **************************************/

#include "CustomerProject.hpp"			//Need to include the class specification file

double CustomerProject::getHours()
{
  return hours;
}

void CustomerProject::setHours(double sHours)
{
  hours = sHours;
}

double CustomerProject::getMaterials()
{
  return materials;
}

void CustomerProject::setMaterials(double sMaterials)
{
  materials = sMaterials;
}

double CustomerProject::getTransportation()
{
  return transportation;
}

void CustomerProject::setTransportation(double sTransportation)
{
  transportation = sTransportation;
}

CustomerProject::CustomerProject(double h, double m, double t)
{
  setHours(h);
  setMaterials(m);
  setTransportation(t);
}
