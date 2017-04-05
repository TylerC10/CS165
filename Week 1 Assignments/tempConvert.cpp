/********************
 * Name: Tyler Cope
 * Date: 9/21/16
 * Description: This program asks users to input a
 * temperature in Celsius, and then converts that
 * temperature to Fahrenheit (and displays is).
 *******************/

#include <iostream>

int main () {
   double celsiusTemp,
          fahrenheitTemp;
   
   //Gets a Celsius temperature from the user
   std::cout << "Please enter a Celsius temperature." << std::endl;
   std::cin >> celsiusTemp;

   //Converts the inputted Celsius temperature to Fahrenheit
   fahrenheitTemp = ((9.0 / 5.0) * celsiusTemp) + 32;


   //Displays the converted result in Fahrenheit
   std::cout << "The equivalent Fahrenheit temperature is:" << std::endl;
   std::cout << fahrenheitTemp << std::endl;

   return 0;
}
