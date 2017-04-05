/****************************************
 * Name: Tyler Cope
 * Date: 11/30/16
 * Description: Class implementation file for the Customer
 * class. It has get methods for data members, a method
 * to check if a member is a premium member, a method to add
 * a product to a member's cart, and a method to empty the cart.
 ****************************************/


#include "Customer.hpp"


Customer::Customer(std::string sName, std::string sAccount, bool sPM) 	//Default constructor
{
  name = sName;
  accountID = sAccount;
  premiumMember = sPM;
}

std::string Customer::getAccountID()			//Get methods
{
  return accountID;
}

std::vector<std::string> Customer::getCart()
{
  return cart;
}

void Customer::addProductToCart(std::string pro)	//Adds products to the cart vector
{
  cart.push_back(pro);
}

bool Customer::isPremiumMember()			//Checks to see if a member is premium by returning the
{							//data member that defines it
  return premiumMember;
}

void Customer::emptyCart()				//Empties out the cart by erasing the vector
{
  cart.clear();
}
