/***********************************
 * Name: Tyler Cope
 * Date: 11/20/16
 * Description: The class specification file for the
 * StringList class. It has a struct in order to implement
 * a linked list. It also has methods to add to the list, 
 * find the position of a value in the list, and set the
 * value at a particular place in the list (if that place
 * in the list is smaller than the total nodes currently
 * in the list).
 ***********************************/

#ifndef STRINGLIST_HPP	    	        //Include guard
#define STRINGLIST_HPP
#include <string>		                //Needed for strings
#include <vector>		                //Needed for vectors

class StringList
{
  protected:
   struct ListNode		                //ListNode struct to implement a linked list
     {
       std::string value;
       ListNode* next;
       ListNode(std::string value1, ListNode *next1 = nullptr)
               {
                  value = value1;
                  next = next1;
               }
     };
   ListNode *head;		                //Pointer to the beginning of the linked list

  public:
   void add(std::string);
   int positionOf(std::string);
   bool setNodeVal(int, std::string);
   std::vector<std::string> getAsVector();
   StringList();
   StringList(StringList &list);
   ~StringList();   
};
#endif
