/******************************************
 * Name: Tyler Cope
 * Date: 11/13/16
 * Description: The class implementation file for the ValSet
 * class. It contains all the function definitions and includes
 * "ValSet.hpp" since that's where the functions are declared.
 *****************************************/

#include "ValSet.hpp"				
#include <vector>
#include <string>

/*
using namespace std;

int main()
{
  ValSet<char> mySet;
  mySet.add('A');
  mySet.add('j');
  mySet.add('&');
  mySet.remove('j');
  mySet.add('#');
  int size = mySet.size();

  ValSet<char> mySet2 = mySet;
  cout << mySet.contains('A') << endl;
  cout << mySet2.contains('A') << endl;

  mySet2.remove('A');
  cout << mySet2.contains('A') << endl;
  cout << mySet.contains('A') << endl;
}
*/

template <class T> ValSet<T>::ValSet()						                    //Constructor
{
  dyArray = new T[10];
  arraySize = 10;
  numValues = 0; 
}

template <class T> ValSet<T>::ValSet(const ValSet<T> &obj)		                //Copy Constructor
{
  arraySize = obj.arraySize;
  dyArray = new T[arraySize];
  for(int i = 0; i < arraySize; i++)
     {
       dyArray[i] = obj.dyArray[i];
     }
}

template <class T> ValSet<T>& ValSet<T>::operator=(const ValSet<T> &copySet)	//Overload = operator
{
  if (this != &copySet)
    {
      if (arraySize > 0)
        {
          delete [] dyArray;
        }
      arraySize = copySet.arraySize;
      dyArray = new T[arraySize];
      for (int index = 0; index < arraySize; index++)
         {
           dyArray[index] = copySet.dyArray[index];
         }
     }
   return *this;
}

template <class T> ValSet<T>::~ValSet()					    //Destructor
{
  delete [] dyArray;
  arraySize = 0;
  numValues = 0;
}

template <class T> int ValSet<T>::size()				    //Returns number of values in ValSet
{
  return numValues;
}

template <class T> bool ValSet<T>::isEmpty()				//Returns true if ValSet has no values and returns false otherwise
{
  if (numValues == 0)
    {
      return true;
    }

  else
    {
      return false;
    }
}

template <class T> bool ValSet<T>::contains(T value)			//Returns true if a particular value is in ValSet
{
  for (int i = 0; i < numValues; i++)
     {
       if (value == dyArray[i])
         {
           return true;
         }
      }
  return false;   
}

template <class T> void ValSet<T>::add(T newValue)			//Adds a value if it's not already in ValSet
{
  if (contains(newValue) == false)
    {
      if (arraySize == numValues)
        {
 	  T* newArray;
	  newArray = new T[arraySize * 2];
	  for (int i = 0; i < numValues; i++)
             {
               newArray[i] = dyArray[i];
             }
          delete [] dyArray;
          dyArray = newArray;
          }
      dyArray[numValues] = newValue;
      numValues++;
    }
}

template <class T> void ValSet<T>::remove(T value)			//Removes a value if it is in ValSet
{
  int place;
  if (contains(value) == true)
    {
      for (int i = 0; i < numValues; i++)
         {
           if (value == dyArray[i])
             {
               place = i;
               break;
             }
	 }
      for (int i = place; i < numValues; i++)
         {
            dyArray[i] = dyArray[i + 1];
         }
         
      numValues--;
    }
}

template <class T> std::vector<T> ValSet<T>::getAsVector()		//Returns a vector with the values in ValSet
{
  std::vector<T> holder; 
  for (int i = 0; i < arraySize; i++)
     {
       holder.push_back(dyArray[i]);
     }
}

template class ValSet<int>;
template class ValSet<char>;
template class ValSet<std::string>;




