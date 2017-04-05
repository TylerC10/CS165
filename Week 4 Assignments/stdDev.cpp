/********************************
 * Name: Tyler Cope
 * Date: 10/16/2016
 * Description: The class implementation file for the stdDev
 * method. This method takes an array of pointers to Students
 * and the size of the array, and returns the standard deviation
 * for the student scores. It includes the cmath header file
 * because I needed the sqrt function.
 *******************************/

#include "Student.hpp"
#include <cmath>

double stdDev (Student *num[], int size);

/*

int main(){
  Student stu1("tyler", 80);
  Student stu2("george",50);
  Student stu3("mary",75);
  Student stu4("sophie", 40);
  Student *ptr1 = &stu1;
  Student *ptr2 = &stu2;
  Student *ptr3 = &stu3;
  Student *ptr4 = &stu4;

  Student *arr[4] = {ptr1, ptr2, ptr3, ptr4};

  double total = stdDev(arr, 4.0);

  cout << total << endl;

}
*/

double stdDev (Student *num[], int size)
{
    double total = 0.0,			    //I defined quite a few double variables so
           mean = 0.0,			    //the code for the standard deviation could be followed
           secondTotal = 0.0,		//step-by-step, rather than do all the calculations
           thirdTotal = 0.0,		//in a few lines.
           firstHolder = 0.0,
           secondHolder = 0.0,
           last = 0.0,
           dev = 0.0,
           finalHolder = 0.0;


    for (int i = 0; i < size; i++)	            //This loop iterates through the array and adds the scores
    {
        total += num[i] ->getScore();
    }
    mean = total/size;			                //Mean calculates the average of the scores

    for (int k = 0; k < size; k++)
    {
        secondTotal = (num[k] ->getScore());	//Placeholders for the scores
        thirdTotal = (num[k] -> getScore());
        firstHolder = secondTotal - mean;	    //Subtracting the mean
        secondHolder = thirdTotal - mean;
        last += (firstHolder * secondHolder);   //The final double that holds the totals of the
    }					                        //previous calculations

    dev = sqrt(last/size);		                //Last variable needed to get the standard deviation
    
    return dev;				    
}
