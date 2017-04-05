/*********************************
 * Name: Tyler Cope
 * Date: 10/16/2016
 * Description: This is the class specification for Project 4.c.
 * It includes string because a data member has the string type.
 * The class, Student, contains two private data members, a 
 * constructor with two parameters, and methods to get the values
 * in the data members.
 ********************************/


#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>


class Student
{
  private:
   std::string name;
   double score;

  public:
   std::string getName();
   double getScore();
   Student (std::string, double);
      
};

#endif
