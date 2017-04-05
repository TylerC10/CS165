/*****************************
 * Author: Tyler Cope
 * Date: 9/21/16
 * Description: This program asks users to input five numbers,
 * then returns the average of those numbers.
 *****************************/

#include <iostream>

int main () {
   double firstNumber,
          secondNumber,
          thirdNumber,
          fourthNumber,
          fifthNumber,
	      result;

   //Asks users for five numbers that will be used
   //to calculate the average
   std::cout << "Please enter five numbers." << std::endl;
   std::cin >> firstNumber;
   std::cin >> secondNumber;
   std::cin >> thirdNumber;
   std::cin >> fourthNumber;
   std::cin >> fifthNumber;

   //Computes the average and stores it in result
   result = (firstNumber + secondNumber + thirdNumber
	     + fourthNumber + fifthNumber) / 5;

   std::cout << "The average of those numbers is:" << std::endl;
   std::cout << result << std::endl;

   return 0;
}
