/********************************
 * Name: Tyler Cope
 * Date: 11/20/16
 * Description: Class specification file for the
 * StringList class. This is where all the member functions
 * are declared. It includes "StringList.hpp" since that's
 * where the functions are declared.
 ********************************/

#include "StringList.hpp"		//Needed in order to define the class functions
#include <string>

/*
int main()
{

StringList strings;

strings.add("alpha");
strings.add("bravo");
strings.add("delta");
strings.add("echo");

StringList strings2 = strings;

strings.setNodeVal(2, "charlie");
strings.add("apple");
strings2.setNodeVal(3, "HELLO");

std::vector<std::string> test = strings.getAsVector();

std::cout << "The strings in the first vector are: " << std::endl;

for (int i =0; i < test.size(); i++)
{
std::cout << test[i] << std::endl;
}

std::cout << "The strings in the second vector are: " << std::endl;

std::vector<std::string> test2 = strings2.getAsVector();

for (int i =0; i < test2.size(); i++)
{
std::cout << test2[i] << std::endl;
}

std::cout << strings.positionOf("echo") << std::endl;

return 0;
}
*/

void StringList::add(std::string str)		//This function adds a value to the list
{
   ListNode *nodePtr = head;			    //Temporary pointer that points to the beginning of the linked list

   if(nodePtr == nullptr)
     {
       head = new ListNode(str);		    //If the list is empty, it adds a new node with the string
       return;
     }

   else
      {
       while(nodePtr->next != nullptr)		//Iteration over the list
            {
              nodePtr = nodePtr->next;
            }

        nodePtr->next = new ListNode(str);	//Adds the string when it gets to the end of the list
       }
}

int StringList::positionOf(std::string str)	//This function returns the index position of a value in the list
{

   ListNode* nodePtr = head;			    //Temp pointer used for iteration
   int position = 0;				        //An integer needed to store the index of the position of the value

   if(nodePtr == nullptr)			        //Returns -1 if the list is empty
     {
       return -1;
     }

   else
      {
       while(nodePtr -> next != nullptr)	//Stops once it's at the end of the list
            {
             if(nodePtr -> value == str)	//If the value is equal to the string being checked, it will return the position
                {
                  return position;
                }
              position++;			        //Increases the index each time
              nodePtr = nodePtr -> next;	//Iteration over the list
             }
        return -1;				            //Returns -1 if the valus isn't found
       }
}

bool StringList::setNodeVal(int position, std::string str)	//This is a function that returns true if a value is set
{								                            //inside the list and false otherwise
   ListNode* nodePtr = head;
   int number = 0;

   if(position < 0)						                    //Can't have negative number of nodes in the list
    {
      return false;
    }

   while(number != position)					            //Exits once the integer value is equal to the position parameter
        {
         if(nodePtr->next == nullptr)
           {
             return false;					                //Returns false if it gets to the end and can't set the value
           }
         number += 1;
         nodePtr = nodePtr -> next;				            //Iteration over the list
        }

   nodePtr -> value = str;					                //Sets the value of the node to the value being checked
   return true;
}


std::vector<std::string> StringList::getAsVector()
{
    ListNode *nodePtr = head;					            //Pointer used for iteration
    std::vector<std::string> holder;				        //Vector that gets returned

    while(nodePtr != nullptr)					
         {
           holder.push_back(nodePtr -> value);			    //Pushes each value into the vector until it reaches the end
           nodePtr = nodePtr -> next;
         }
    return holder;
}


StringList::StringList(StringList& list)			        //Copy constructor
{
   std::vector<std::string> holder = list.getAsVector();	//Vector used to copy values
   head = nullptr;

   if(holder.size() != 0)
     {
       for(int i = 0; i < holder.size(); i++)
          {
            if(i == 0)
              {
                head = new ListNode(holder[i]);			    //Creates a new list
              }
            else
              {
                add(holder[i]);					            //Copies the values into the list
              }
           }
      }
}

StringList::StringList()					                //Constructor
{
   head = nullptr;
}

StringList::~StringList()					                //Destructor
{
   ListNode *nodePtr = head;
   ListNode* garbage;

   if(nodePtr != nullptr)
     {
      while(nodePtr -> next != nullptr)
           {
             garbage = nodePtr -> next;
             delete nodePtr;
             nodePtr = garbage;
           }
     }      
   delete nodePtr;
}

