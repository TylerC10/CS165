/**********************
 * Name: Tyler Cope
 * Date: 10/1/2016
 * Description: This program creates a function called smallSort. This
 * function takes three int parameters by reference and sorts them into
 * ascending order (i.e. the first paramter has the lowest value, the
 * second has the middle value, and the third has the highest value.
 **********************/

void smallSort (int &num1, int &num2, int &num3);

/*
int main () {
  int a = 2;
  int b = 1;
  int c = 3;

  smallSort(a, b, c);


  return 0;
}
*/

//This function uses a combination of if/else
//for the different cases. It sorts them in 
//ascending order.

void smallSort (int &num1, int &num2, int &num3)
  {
   int temp1,           //Integers that will hold values
       temp2,           //temporarily so they can be switched
       temp3;

    if (num2 < num1 && num2 < num3)
	{
	  if (num1 < num3)
	    {
	      temp1 = num2;
	      temp2 = num1;
	      num1 = temp1;
	      num2 = temp2;
	    }
	  else
	    {
	      temp1 = num2;
	      temp2 = num3;
	      temp3 = num1;
	      num1 = temp1;
	      num2 = temp2;
	      num3 = temp3;
	    }	

	}

      if (num3 < num1 && num3 < num2)
	  {
	   if (num1 < num2)
	     {
	       temp1 = num1;
	       temp2 = num2;
	       temp3 = num3;
	       num1 = temp3;
	       num2 = temp1;
	       num3 = temp2;
	     }
	   else
	     {
	       temp1 = num1;
	       temp3 = num3;
	       num1 = temp3;
	       num3 = temp1;
	     }

	  }

      if (num1 < num2 && num1 < num3)
	 {
	   if(num3 < num2)
	     {
	       temp2 = num2;
	       num2 = num3;
	       num3 = temp2;
	     }
	 }

      if (num1 == num2)
	{
	  if (num1 > num3)
	   {
	     temp1 = num1;
	     num1 = num3;
	     num3 = temp1;
	   }
	}
      if (num2 == num3)
	{
	  if (num1 > num3)
	   {
	     temp1 = num1;
	     num1 = num3;
	     num3 = temp1;
	   }
	}
      if (num1 == num3)
	{
	  if (num2 > num3)
	   {
	     temp2 = num2;
	     num2 = num3;
	     num3 = temp2;
	   }

	}
}

