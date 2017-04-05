/**********************************
 * Name: Tyler Cope
 * Date: 11/6/2016
 * Description: This is the class specification file for the
 * MyInteger class. It has a constructor that takes an int value
 * as a paremeter. It also has a destructor and a copy constructor.
 * Finally, it contains an overload method to overload the = operator.
 * The overload method has a return type of MyInteger.
 **********************************/

#ifndef MYINTEGER_HPP			            //Include guard
#define MYINTEGER_HPP

class MyInteger
{
  private:
   int* pInteger;			                //Data member that's a pointer to an int

  public:
   MyInteger(int number);			        //Constructor
   ~MyInteger();				            //Destructor
   MyInteger(MyInteger &number);		    //Copy constructor
   MyInteger operator=(MyInteger &number);	//Overload = opertor
   int getMyInt();				            //Get method
   void setMyInt(int number);			    //Set method
};
#endif
