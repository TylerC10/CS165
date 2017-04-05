/*******************************
 * Name: Tyler Cope
 * Date: 11/30/16
 * Description: Class implementation file for the Store class.
 * Allows searches for products and members, members to checkout, and
 * allows products and members to be added to a store.
 *******************************/

#include "Store.hpp"
#include "Customer.hpp"
#include "Product.hpp"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

void Store::addProduct(Product *pro)			//Adds products to a store
{
  inventory.push_back(pro);
}

void Store::addMember(Customer *mem)			//Adds customers to members
{
  members.push_back(mem);
}

Product* Store::getProductFromID(std::string pID)	//Retuns product with that ID, returns NULL if not found
{
  for(int i = 0; i < inventory.size(); i++)
     {
       if(pID == inventory[i] -> getIdCode())
         {
           return inventory[i];
         }
     }
  return NULL;
}

Customer* Store::getMemberFromID(std::string memID)	//Returns customer with that ID, returns NULL if not found
{
  for(int i = 0; i < members.size(); i++)
     {
       if(memID == members[i] -> getAccountID())
         {
           return members[i];
         }
     }
  return NULL;
}

void Store::productSearch(std::string data)		//Method that allows users to search for products. First letter is case insensitive
{
  bool dataFound = false;				//Flag so the program knows if it needs to print something (true if the search finds a product)
  for(int i = 0; i < inventory.size(); i++)
     {
       if(inventory[i] -> getDescription().find(data) != std::string::npos)	//Searches the description until it hits the end of the string
         {
           dataFound = true;
         }

       else if(inventory[i] -> getTitle().find(data) != std::string::npos)	//Searches the title until it hits the end of the string
         {
           dataFound = true;
         }

       if(data[0] < 'a')			//Logic to change the case of the first character by manipulating the ASCII value.
         {					//This is what makes the search case insensitive
           data[0] += 32;
         }

       else
         {
           data[0] -= 32;
         }

       if(inventory[i] -> getDescription().find(data) != std::string::npos)	//Does the searches for description and title again
         {
           dataFound = true;
         }

       else if(inventory[i] -> getTitle().find(data) != std::string::npos)
         {
           dataFound = true;
         }

       if(dataFound == true)							//Prints out the values of the product if the search finds what is being searched
         {
           std::cout << "Title: " << inventory[i] -> getTitle() << std::endl;
           std::cout << "ID code: " <<  inventory[i] -> getIdCode() << std::endl;
           std::cout << "Price: $" << inventory[i] -> getPrice() << std::endl;
           std::cout << inventory[i] -> getDescription() << std::endl;
           dataFound = false;
         }
     }
}

void Store::addProductToMemberCart(std::string pID, std::string mID)		//Adds a product to a member's cart
{
   Product *pro = getProductFromID(pID);					//Holder variables to access the methods in Product and Customer
   Customer *mem = Store::getMemberFromID(mID);

   if(pro == NULL)								//If the product doesn't exist, it tells the user and immediately stops the program
     {
       std::cout << "Product #" << pID << " not found." << std::endl;
       return;
    }

   if(mem == NULL)								//Same as when a product doesn't exist
     {
       std::cout<< "Member #" << mID <<" not found." << std::endl;
       return;
     }

   if(pro -> getQuantityAvailable() > 0)					//Checks if a product is available. Adds to the cart if it is
     {
       mem -> addProductToCart(pID);
     }
   else										//Tells users the product isn't there otherwise
     {
       std::cout << "Sorry, product # "<< pID << " is currently out of stock." << std::endl;
     }
}

void Store::checkOutMember(std::string mID)		//Allows customers to check out
{
  double subTotal = 0;					//Doubles to hold shipping costs, subtotal, and total
  double shipping = 0;
  double total = 0;

  Customer *mem = getMemberFromID(mID);			//Holder to access Customer methods

  if(mem == NULL)					//If Customer doesn't exist, program tells the user and stops running
    {
      std::cout << "Member # " << mID << " not found." << std::endl;
      return;
    }

  else							//If Customer does exist, it prints out the price of each item in the cart, adds it
    {							//to the subtotal, and decreases the quantity avaiable of the product.
      for(int i = 0; i < mem -> getCart().size(); i++)
         {
           Product *pro = getProductFromID(mem -> getCart()[i]);
           if(pro -> getQuantityAvailable() > 0)
             {
               std::cout << pro -> getTitle() << " - " << "$" << pro -> getPrice() << std::endl;
               subTotal += pro -> getPrice();
               pro -> decreaseQuantity();
             }
           else						//Lets the user know if a particular product is out of stock
             {
               std::cout << "Sorry, product # " << pro -> getIdCode() << ", " << pro -> getTitle() << " is no longer available." << std::endl;
             }
         }
    }

  if(mem -> getCart().size() <= 0)			//If the cart is empty, the program tells the user and ends
    {
      std::cout << "There are no items in the cart." << std::endl;
      return;
    }

  if(mem -> isPremiumMember() == false)			//Premium members get free shipping, otherwise the shipping cost is 7% of the cart
    {
      shipping = (subTotal * 0.07);
    }
  else
    {
      shipping = 0;
    }

  total = subTotal + shipping;				//Adds shipping to the subtotal, prints out what each is, then prints out the total

  std::cout << "Subtotal: $" << subTotal << std::endl;
  std::cout << "Shipping cost: $" << shipping << std::endl;
  std::cout << "Total: $" << total << std::endl;
}
