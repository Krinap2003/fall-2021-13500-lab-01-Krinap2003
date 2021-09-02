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

  int num3;
  std:: cout<<"Enter the thirst number: ";
  std:: cin>>num3;

  if(num1 < num2 && num1 < num3)
    {
      std::cout<< "The smalller of the three is: "<< num1;
    }
  else if(num2 < num1 && num2 < num3)
    {
      std::cout<< "The smalller of the three is: "<< num2;
    }
  else
    {
      std::cout<< "The smalller of the three is: "<< num3;
    }
  return 0;
}
