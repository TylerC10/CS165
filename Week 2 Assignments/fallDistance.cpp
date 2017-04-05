/*************************
 * Name: Tyler Cope
 * Date: 10/1/2016
 * Description: This program creates a function, fallDistance,
 * that returns the distance an object has fallen. The function
 * takes the falling time as an argument
 *************************/


double fallDistance(double time);

/*
int main() {
   fallDistance(3.0);

return 0;
}
*/


//This function returns the total distance an object has
//fallen. It takes the time fallen as an argument.

double fallDistance (double time)
	{

	  double distance;
	  const double GRAVITY = 9.8;
	  time *= time;
	  distance = (1.0/2) * GRAVITY * time;  //Distance the objcet has fallen in meters
	   
	  return distance;
        }
