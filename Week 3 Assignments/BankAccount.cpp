/***********************
 * Name: Tyler Cope
 * Date: 10/9/2016
 * Description: The class implementation file for the BankAccount
 * class. It has all the method definitions. It also includes the 
 * BankAccount.hpp header file
 **********************/


#include "BankAccount.hpp"

std::string BankAccount::getCustomerName()	//All the get functions
{
  return customerName;
}

std::string BankAccount::getCustomerID()
{
  return customerID;
}

double BankAccount::getCustomerBalance()
{
  return customerBalance;
}

BankAccount::BankAccount(std::string cName, std::string cID, double cBalance)	//Constructor for the class
{
  customerName = cName;
  customerID = cID;
  customerBalance = cBalance;
} 

/**********************************************
 * Description: This method calculates the    *
 * total balance by adding to customerBalance.*
 *********************************************/

double BankAccount::deposit(double d)	
{
  customerBalance += d;
  return customerBalance;
}

/***************************************************
 * Description: This method calculates the         *
 * total balance by subtracting to customerBalance.*
 **************************************************/

double BankAccount::withdraw(double w)	//Calculates withdrawals
{
  customerBalance -= w;
  return customerBalance;
}
