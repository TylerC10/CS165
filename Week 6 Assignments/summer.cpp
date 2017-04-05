/**********************************
 * Name: Tyler Cope
 * Date: 10/30/2016
 * Description: This program defines a recursive function, that
 * takes an array of doubles and the size of the array as parameters.
 * It returns the sum of the values in the array.
 **********************************/


double summer (double arr[], int size);		    //Function prototype

/*
int main(){

  double array[9] = {6.7, 1.8, 4.1, 3.2, 1.8, 9.4, 9.5, 5.0, 70.8};

  double totals;
  totals  = summer(array, 9);

  std::cout << totals << std::endl;  

  return 0;
}
*/

double summer (double arr[], int size)		    //Function definition
{
  if (size < 0)					                //Base case
    {
      return 0.0;				                //Doesn't change the value
    }
  else
    {
      return arr[size] + summer(arr, size - 1); //Recursive case that adds each value of the array
    }
}
