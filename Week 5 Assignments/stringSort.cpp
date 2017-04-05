/********************************
 * Name: Tyler Cope
 * Date: 10/23/16
 * Description: This file defines a function called stringSort. 
 * It uses selection sort to sort an array of strings alphabetically.
 * It also makes  use of the toupper function in order to make the sorting funcction
 * case-insensitive (because ASCII capital letters come before lower-
 * case letters). 
*********************************/

#include <string>					                //Needed to use strings

void stringSort (std::string arr[], int size);		//Function prototype

/*
int main ()
{

std::string strings[7] = {"echo", "alpha", "bravo", "Lima", "Yankee", "Charlie", "foxtrot"};

stringSort(strings, 7);

for (int i = 0; i < 7; i++)
{
   std::cout << strings[i] << std::endl;

}

return 0;
}
*/

void stringSort (std::string arr[], int size)
{
   int 		startScan,						    //Loop control variable for outer loop
       		minIndex;						    //Holds the index of the smallest element
   std::string  minValue;						//Holds the value to check against

   for (startScan = 0; startScan < (size - 1); startScan++)
      {
        minIndex = startScan;
        minValue = arr[startScan];
      
        for (int index = startScan + 1; index < size; index++)
           {
	      if (toupper(arr[index][0]) < toupper(minValue[0]))	//Makes use of toupper function to make
                {							                    //comparison case-insensitive
                  minValue = arr[index];				        //If the condition is met, minValue is set to arr[index]
                  minIndex = index;					            //Update to hold index of smallest element
                }

           }
         arr[minIndex] = arr[startScan];				
	 arr[startScan] = minValue;
	}

}

