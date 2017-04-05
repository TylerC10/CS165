/************************************
 * Name: Tyler Cope
 * Date: 11/30/16
 * Description: Class implementation file for the Product class.
 * Uses a constructor to initialize data members, has get methods for all of them,
 * and a method to decrease quantity of a product.
 ************************************/

#include "Product.hpp"

Product::Product(std::string id, std::string t, std::string d, double p, int qa)	//Default constructor
{
  idCode = id;
  title = t;
  description = d;
  price = p;
  quantityAvailable = qa;
}

std::string Product::getIdCode()	//Get methods for data members
{
  return idCode;
}

std::string Product::getTitle()
{
  return title;
}

std::string Product::getDescription()
{
  return description;
}

double Product::getPrice()
{
  return price;
}

int Product::getQuantityAvailable()
{
  return quantityAvailable;
}

void Product::decreaseQuantity()	//Method to decrease quantity
{
  quantityAvailable -= 1;
}
