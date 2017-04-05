/**************************************
 * Name: Tyler Cope
 * Date: 11/20/16
 * Description: This program defines a function called
 * postfixEval that allows arithmetic operations to be done
 * in postfix notation. It uses a stack to do it.
 **************************************/


#include <stack>			        //Needed to use stacks


double postfixEval(char *string);	//Function prototype

/*
int main()
{
   char test[] = "25 12 7 - 2 * /";
   std::cout << postfixEval(test) << std::endl;
}
*/

double postfixEval(char *string)	//Takes a C-style string as an argument
{
   std::stack<double> holder;		//Stack to hold all the characters
   char *s = string;			    //Pointer to the paramter for iteration

   while(*s != '\0')			    //Loop runs until the end of the C-style string
    {
       if(*s >= '0' && *s <= '9')	//Checks if a char is a number, if it is, it pushes it onto the stack
         {
           int value = 0;		    //Integer that will be updated and pushed onto the stack
           while(*s >= '0' && *s <= '9' && *s != '\0')
                {
                   value *= 10;		    //Code to get the proper value to push onto the stack (to get the correct place)
                   value += *s - '0';   //Need to add the iterator minus the 0 character since the iterator is a pointer to the string
                   s++;			    //Increases the iterator 
                 }
           holder.push(value);		//Number that is pushed onto the stack
         }

       if(*s == '*' || *s == '/' || *s == '-' || *s == '+')	//Code to handle each operator
         {
            double firstVal,					            //Two doubles that hold the popped numbers stored in the stack
                   secondVal;

            firstVal = holder.top();				        //Sets the value of the first value to the top of the stack
            holder.pop();                                   //Then there is code to pop that number off the stack to gain access to the second number
            secondVal = holder.top();                       //Now set the second value to the top of the stack
            holder.pop();                                   //Pop that number off of it since it is no longer needed

            if(*s == '*')
              {
                holder.push(secondVal * firstVal);		    //Pushes the multiplication of the doubles onto the stack
              }

            if(*s == '/')
              {
                holder.push(secondVal / firstVal);		    //Pushes the division of the doubles onto the stack
              }

            if(*s == '-')
              {
                holder.push(secondVal - firstVal);		    //Pushes the subtraction of the doubles onto the stack
              }

            if(*s == '+')
              {
                holder.push(secondVal + firstVal);		    //Pushes the addition of the doubles onto the stack
              }
          }	
       s++;							                        //Still need to increase the iterator for the characters
   }
   return holder.top();						                //Returns the final value which is the number on the stack
}
