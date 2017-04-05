/************************
*Author: Tyler Cope
*Date: 9/21/16
*Description: A program that asks users to input their
*favorite animal, then displays that animal along with
*a sentence telling them what their favorite animal is.
*************************/






#include <iostream>
#include <string>

// a simple example program
int main()
{
   std::string faveAnimal;
   std::cout << "Please enter your favorite animal." << std::endl;
   std::cin >> faveAnimal;
   std::cout << "Your favorite animal is the " << faveAnimal;
   std::cout << "." << std::endl;

   return 0;
}
