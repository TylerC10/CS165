/**********************************
 * Name: Tyler Cope
 * Date: 10/23/16
 * Description: This file defines a function, boxSort, that
 * takes an array of Boxes and the size of the array as the parameters.
 * It sorts the Boxes from greatest volume to least volume. It makes
 * use of the Box class that was used in a previous assignment. 
 *********************************/


#include "Box.hpp"			        //Needed to use the Box class


void boxSort(Box arr[], int size);	//Function prototype

/*
int main () 
{
  Box biggest(15.0, 20.0, 25.0);
  Box big(10.0, 15.0, 20.0);
  Box med (5.0, 10.0, 15.0);
  Box smaller (1.0, 5.0, 10.0);
  Box smallest;

  Box arr[5] = {big, smaller, med, biggest, smallest};

  for (int i = 0; i < 5; i++)
     {
       std::cout << arr[i].getVolume() << std::endl;
     }

  boxSort (arr, 5);

  for (int j = 0; j < 5; j++)
     {
       std::cout << arr[j].getVolume() << std::endl;
     }
  return 0;
}
*/

void boxSort(Box arr[], int size)
{
  Box temp;						                                     //Needed to temporarily hold and switch Box objects
  bool swap;						                                //Bool variable to keep the loop running

  do
   {swap = false;					                                //Will terminate the loop if the if statement doesn't run
     for (int count = 0; count < (size - 1); count++)
        {
          if (arr[count].getVolume() < arr[count + 1].getVolume())	//Used to test if the volume of one box is less than another
            {
              temp = arr[count + 1];					            //Logic to swap the Box objects if the condition is met
              arr[count + 1] = arr[count];
              arr[count] = temp;
              swap = true;						                    //Sets swap to true to let the loop run again
            }
        }
   } while(swap); 							                        //Loop runs as long as swap is true
}

