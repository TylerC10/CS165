/******************************************
 * Name: Tyler Cope
 * Date: 10/16/2016
 * Description: This program defines a function called findMode. This
 * function takes an array of integers and the size of the array as 
 * parameters. It returns the mode of the array. If multiple values
 * tie for maximum frequency, it returns all values in ascending order.
 ******************************************/

#include <vector>		    //Needed for vectors
#include <algorithm>		//Needed to use the sorting functions


std::vector<int> findMode(int arr[], int size);		//Function prototype for findMode

/*
int main (){
  int myArr[] = {3,1,1,3,2,1,3,-5,100,-34,1};
  std::vector<int> myNums = findMode(myArr, 11);
  int number = myNums.size();
  
  for (int l = 0; l < number; l++)
     {std::cout << myNums[l] << std::endl;}
  

  return 0;
}
*/


std::vector<int> findMode(int num[], int sizes)
{
  std::sort(num, num + sizes);
  int counter = 1;		           //A variable to keep track of how many times a value appears
  int tempCounter = 1;		      //A variable to keep track of value frequency in the loop
  int numCheck = num[0];  	     //A number to check against when iterating through the loop
  std::vector<int> modeHolder;  //The vector that will be returned with the mode(s)



  //This is the first loop, it checks for the maximum
  //frequency of all the values
  for (int i = 1; i < sizes; i++)
    {
      if (numCheck == num[i])		//If the next value is equal to the previous
	  {				                //value, then it will increase the counter.
	  tempCounter++;
      }
      else				            //If the next value is different, it changes
	  {				                //the number to be checked
	  numCheck = num[i];
          if(tempCounter > counter)	//If the loop counter is higher than the overall
	   { 				            //counter, it sets the overall counter to the loop counter
	     counter = tempCounter;
	     tempCounter = 1;		    //Resets the temporary counter
	   }
          tempCounter = 1;		    //Resets the temporary counter in case tempCounter is not
      }				                //greater than counter
    }
  if (tempCounter > counter)		//This is a contingency in case all values in the array are
    {					            //the same. It sets the overall counter to the value of the
      counter = tempCounter;		//counter in the previous loop.
    }
  
  tempCounter = 1;			        //Reset the loop counter
  numCheck = num[0];			    //Reset the value back to the first number of the array



  for (int k =0; k < sizes; k++)	//This loop runs if the overall counter is set to 1.
    {					            //Without this, the next for loop wouldn't capture the
      if (counter == 1)			    //values and the program wouldn't work.
        {
          modeHolder.push_back(num[k]);
        }
    }


  for (int j = 1; j < sizes; j++)	//This iterates through the loop again and adds the mode(s)
    {					            //to the vector being returned.
      if (numCheck == num[j])
        {
          tempCounter++;
          if (tempCounter == counter)
            {
              modeHolder.push_back(num[j]);
            }
        }
      else
        {
          numCheck = num[j];
          tempCounter = 1;
        } 
    }

return modeHolder;
   
}
