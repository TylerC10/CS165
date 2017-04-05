/******************************************
 * Name: Tyler Cope
 * Date: 11/13/16
 * Description: The class specification file for the ValSet class.
 * It has a constructor, a destructor, and a copy constructor. It also
 * contains an overload method to overload the = operator.
 ******************************************/

#ifndef VALSET_HPP			//Include guards
#define VALSET_HPP
#include <vector>

template <class T> class ValSet
{
  protected:
   T* dyArray;
   int arraySize;
   int numValues;

  public:
   ValSet<T>();						//Default constructor
   ValSet<T>(const ValSet<T> &obj);			//Copy constructor
   ValSet<T>& operator=(const ValSet<T> &copySet);	//Overload = operator
   ~ValSet<T>();					//Destructor
   int size();						//Method to return the number of values in ValSet
   bool isEmpty();					//Two methods that check for values or a particular value and return a bool
   bool contains(T type);
   void add(T addT);					//Method to add a value
   void remove(T removeT);  				//Method to remove a value
   std::vector<T> getAsVector();			//Returns the values as a vector
};
#endif
