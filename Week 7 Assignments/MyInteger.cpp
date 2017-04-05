/*****************************************
 * Name: Tyler Cope
 * Date: 11/9/2016
 * Description: The class implementation file for the MyInteger
 * class. It contains all the function definitions and includes
 * "MyInteger.hpp" since that's where the functions are declared.
 *****************************************/

#include "MyInteger.hpp"
/*
int main() {
  MyInteger obj1(17);
  MyInteger obj2 = obj1;
  std::cout << obj1.getMyInt() << std::endl;
  std::cout << obj2.getMyInt() << std::endl;

  obj2.setMyInt(9);
  std::cout << obj1.getMyInt() << std::endl;
  std::cout << obj2.getMyInt() << std::endl;

  MyInteger obj3(42);
  obj2 = obj3;
  std::cout << obj2.getMyInt() << std::endl;
  std::cout << obj3.getMyInt() << std::endl;

  obj3.setMyInt(1); 
  std::cout << obj2.getMyInt() << std::endl;
  std::cout << obj3.getMyInt() << std::endl;
  return 0;
}
*/

MyInteger::MyInteger (int number)			        //Constructor that dynamically allocates memory for an int
{
  pInteger = new int;
  setMyInt(number);
}

MyInteger::~MyInteger()					            //Destructor that deallocates memory when the object is destroyed
{
  delete pInteger;
}

MyInteger::MyInteger (MyInteger &number)		    //Copy constructor is needed since we're using pointers
{
  pInteger = new int;
  *pInteger = number.getMyInt();
}

MyInteger MyInteger::operator= (MyInteger &number)	//Overload = operator so each of the two objects has its own 
{							                        //separate copy of the memory that its own pInteger points to
  *pInteger = number.getMyInt();
  return number;
}

int MyInteger::getMyInt()				            //Get method
{
  return *pInteger;
}

void MyInteger::setMyInt (int number)			    //Set method
{
  *pInteger = number;
}
