/************************
 * Name: Tyler Cope
 * Date: 9/21/16
 * Description: This program asks user for a number of
 * cents (integer), from 0-99, and outputs how many of
 * each type of coin would represent that amount with
 * the fewest total number of coins.
 ***********************/

#include <iostream>

int main() {
   int amount,
       quarters,
       dimes,
       nickels,
       pennies;

   std::cout << "Please enter an amount in cents less than a dollar." 
             <<  std::endl;
   std::cin >> amount;
   
   //Gets the number of quarters and updates the value of amount
   quarters = amount / 25;
   amount %= 25;

   //Gets the number of dimes and updates the value of amount
   dimes = amount / 10;
   amount %= 10;

   //Gets the number of nickels and updates the value of amount
   nickels = amount / 5;
   amount %= 5;

   //Gets the number of pennies
   //No need to update amount, as this is the last step
   pennies = amount / 1;

   std::cout << "Your change will be:" << std::endl;
   std::cout << "Q: " << quarters << std::endl;
   std::cout << "D: " << dimes << std::endl;
   std::cout << "N: " << nickels << std::endl;
   std::cout << "P: " << pennies << std::endl;
   return 0;
}
