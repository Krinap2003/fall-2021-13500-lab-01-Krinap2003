/*
  Author: Krina Patel
  Course: CSCI: 135
  Instructor: Proffesor Mike
  Assignment: Lab1 part 1
 */
#include <iostream>
//using namespace std;
int main()
{
  int num1;
  std::cout<<"Enter the first number: ";
  std::cin>>num1;
  std::cout<<"Enter the second number: ";
  int num2;
  std::cin>>num2;
  if(num1 < num2)
    {
      std::cout<<"The smaller of the two is: "<<num1<<std::endl;
    }
  else
    {
      std::cout<<"The smaller of the two is: "<<num2<<std::endl;
    }
  return 0;
}
