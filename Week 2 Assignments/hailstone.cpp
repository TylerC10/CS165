/***********************
 * Name: Tyler Cope
 * Date: 10/1/2016
 * Description: This program takes a starting integer, then 
 * returns the number of steps it takes to reach 1 using a
 * hailstone sequence.
 **********************/


int hailstone (int startingNum);

/*
int main () {
   int testNum;
   cin >> testNum;
   hailstone(testNum);

   return 0;
}
*/


//The function returns how many steps it takes
//to get to 1. Therefore, we want to use a while
//loop to make sure the starting number is not equal to
//1. If it is, the function will return 0.

int hailstone (int startingNum)
   {
	int count;	   

	while(startingNum != 1)
	   {
		if (startingNum != 1)
	          {

		   if(startingNum % 2 == 0)
			{
			   startingNum /= 2;
			   
			}
			
		   else
			{
			   startingNum *= 3;
			   startingNum += 1;
		
			}
		  } 

	  count++;
	  }

	return count;

   }




