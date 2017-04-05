/********************************
 * Name: Tyler Cope
 * Date: 10/1/2016
 * Description: This program creates a function called minmax. This function 
 * asks users how many integers they want to input, then returns the minimum
 * and maximum of those integers. The function is called in main().
 * ******************************/




#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void minmax ();



int main() {

minmax();

return 0;
}


//This function asks users for integer(s) and returns the minimum and maximum of them
void minmax()
{

   int min = 2147483647,         //Set the minimum amount to the highest value of an integer
       max = -2147483648,        //Set the maximum amount to the lowest value of an integer
       currentNum,               //Integer holder when users are entering their integers
       numCount;                 //The total number of integers the user wants to enter
      
       
       

   cout << "How many integers would you like to enter?" << endl;
   cin >> numCount;

   cout << "Please enter " << numCount << " integers." << endl;

   //The loop runs as long as numCount is true (nonzero)
   //Since the 2.a instructions say the number of integers will
   //always be >= 1, numCount will always be intialized
   //to true.

   while (numCount)
	{
	  cin >> currentNum;
	 	  
	  if(currentNum >=  max)
		{
		  max = currentNum;
		}

	  if(currentNum <= min)
		{
		  min = currentNum;
		}
	
	 	  
	   numCount--;

	}
   cout << "min: " << min << endl;
   cout << "max: " << max << endl;

}




