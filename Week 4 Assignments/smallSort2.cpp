/**********************
 * Name: Tyler Cope
 * Date: 10/16/2016
 * Description: This program creates a function called smallSort2. This
 * function takes three int parameters by address and sorts them into
 * ascending order (i.e. the first paramter has the lowest value, the
 * second has the middle value, and the third has the highest value).
 **********************/

void smallSort2 (int *ptr1, int *ptr2, int *ptr3);

/*
int main () {
  int a = 5;
  int b = 11;
  int c = 2;


  smallSort2(&a, &b, &c);

  std::cout << a << " " << b << " " << c << std::endl;
  return 0;
}
*/

//This function uses a combination of if/else
//for the different cases. It sorts them in 
//ascending order.

void smallSort2 (int *firstPoint, int *secondPoint, int *thirdPoint)
{
  int temp1,           //Integers that will hold values
      temp2,           //temporarily so they can be switched
      temp3;

  if (*secondPoint < *firstPoint && *secondPoint < *thirdPoint)  //This executes if the second value is the lowest
	{
	  if (*firstPoint < *thirdPoint)
	    {
	      temp1 = *secondPoint;
	      temp2 = *firstPoint;
	      *firstPoint = temp1;
	      *secondPoint = temp2;
	    }
	  else
	    {
	      temp1 = *secondPoint;
	      temp2 = *thirdPoint;
	      temp3 = *firstPoint;
	      *firstPoint = temp1;
	      *secondPoint = temp2;
	      *thirdPoint = temp3;
	    }	

	}

    if (*thirdPoint < *firstPoint && *thirdPoint < *secondPoint)	//This executes if the third value is lowest
	  {
	   if (*firstPoint < *secondPoint)
	     {
	       temp1 = *firstPoint;
	       temp2 = *secondPoint;
	       temp3 = *thirdPoint;
	       *firstPoint = temp3;
	       *secondPoint = temp1;
	       *thirdPoint = temp2;
	     }
	   else
	     {
	       temp1 = *firstPoint;
	       temp3 = *thirdPoint;
	       *firstPoint = temp3;
	       *thirdPoint = temp1;
	     }

	  }

    if (*firstPoint < *secondPoint && *firstPoint < *thirdPoint)	//This is needed to make sure the second and third values
	 {								                                //are checked if the first value is the lowest
	   if(*thirdPoint < *secondPoint)
	     {
	       temp2 = *secondPoint;
	       *secondPoint = *thirdPoint;
	       *thirdPoint = temp2;
	     }
	 }

    if (*firstPoint == *secondPoint)					            //The next three if statements are contingencies
	{								                                //in case some values are equal to each other
	  if (*firstPoint > *thirdPoint)
	   {
	     temp1 = *firstPoint;
	     *firstPoint = *thirdPoint;
	     *thirdPoint = temp1;
	   }
	}
    if (*secondPoint == *thirdPoint)
	{
	  if (*firstPoint > *thirdPoint)
	   {
	     temp1 = *firstPoint;
	     *firstPoint = *thirdPoint;
	     *thirdPoint = temp1;
	   }
	}
    if (*firstPoint == *thirdPoint)
	{
	  if (*secondPoint > *thirdPoint)
	   {
	     temp2 = *secondPoint;
	     *secondPoint = *thirdPoint;
	     *thirdPoint = temp2;
	   }

	}
}

