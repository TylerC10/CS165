/***************************
 * Name: Tyler Cope
 * Date: 10/16/2016
 * Description: Class implementation file for the methods
 * getName, getScore, and the constructor listed in the header
 * file, Student.hpp. It includes Student.hpp header file.
 ***************************/
 

#include "Student.hpp"

std::string Student::getName()		//Method to get name
{
  return name;
}

double Student::getScore()		//Method to get score
{
  return score;
}

Student::Student(std::string studentName, double studentScore)	//Constructor to assign values to data members
{
  name = studentName;
  score = studentScore;
}
