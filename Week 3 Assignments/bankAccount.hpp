/*********************
 * Name: Tyler Cope
 * Date: 10/9/2016
 * Description: This is the class specification file for Project 3.b. It
 * has an include guard at the top. It also needs to include string, since
 * two data members have the string type. The class, BankAccount, contains 
 * three private data members, a constructor with three paramters, get methods
 * for each data member, and methods to calculate withdrawals and deposits.
 *********************/


#ifndef BANKACCOUNT_HPP		//Include guard
#define BANKACCOUNT_HPP
#include <string>		    //Needed for strings




class BankAccount
{
  private:
   std::string customerName;	                    //Private data members
   std::string customerID;
   double customerBalance;

  public:
   BankAccount(std::string, std::string, double);	//Constructor
   std::string getCustomerName();			        //Get methods
   std::string getCustomerID();
   double getCustomerBalance();
   double withdraw(double);				            //Methods to calculate withdrawals and deposits
   double deposit(double);
};

#endif
