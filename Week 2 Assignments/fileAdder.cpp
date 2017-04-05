/***********************
 * Name: Tyler Cope
 * Date: 10/1/2016
 * Description: This program asks users to input the name of a file
 * and then reads the integers in it. The program then opens an output
 * file, sum.txt, and writes the sum of the integers there. If the input file
 * is not found or could not be opened, the program shows an error message.
 ***********************/




#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;


int main () {

  std::ifstream addFile;	//Declaring the variables for the input file
  std::string file;		//The variable to hold the name of the file
  std::ofstream sumFile;	//The variable for the output file

  int numberHolder,		//Integer variables to read in from the file
      total;			//and add them

  cout << "Enter the name of your file." << endl;
  cin >> file;
  
  addFile.open(file);

  if (addFile)
     {
	while (addFile >> numberHolder)
	   {
		total += numberHolder;
	   }
	addFile.close();
	
	sumFile.open("sum.txt");
	sumFile << total;
	sumFile.close();
     }

  else
     {
	cout << "Could not access file." << endl;
     }


   return 0;
}

