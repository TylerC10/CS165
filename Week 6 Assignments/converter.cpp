/*********************************
 * Name: Tyler Cope
 * Date: 10/30/2016
 * Description: This program defines two recursive functions. The
 * first function takes a positive integer parameter and converts it to its
 * binary representation. The second function takes a string and an integer
 * as its parameters and returns its decimal representation (the string must
 * be 1s and 0s). It uses a helper function that takes a string as a parameter.
 * The helper function calls the recursive function and passes the parameter to
 * the recursive function.
***********************************/

#include <string>			                //Needed for strings
#include <cmath>			                //Needed for pow function


int binToDec (std::string binary);		    //Function prototypes
int binToDec (std::string, int position);
std::string decToBin (int decimal);

/*
int main() {

  int answer = binToDec("011010101001");
  std::cout << answer << std::endl;

  return 0;
}
*/

std::string decToBin (int decimal) 		    //Function to convert binary to decimal
{
  if (decimal == 0)				            //Base cases
    {
      return "0";
    }

  else if (decimal == 1)
    {
      return "1";
    }
  else
    {
      return decToBin (decimal / 2) + decToBin (decimal % 2);	//Recursive case that gets the integer to the base cases and 
    }								                            //concatenates a string of 1s and 0s
}

int binToDec (std::string binary)				                //Helper function to convert a string of 1s and 0s to an integer
{
    return binToDec (binary, 0);
}

int binToDec (std::string binary, int position = 0)		        //Recursive function to convert a string of 1s and 0s to an integer
{
  if (binary[position] == '\0')					                //Base case
    {
      return 0;
    }

  if (binary[position] == '1')					                //Recursive case
    {

      return pow(2.0, binary.length() - 1 - position) + binToDec (binary, position + 1);	//Logic that adds up the powers of 2 in the correct order
    }
  else
    {
      return binToDec (binary, position + 1);
    }
}

