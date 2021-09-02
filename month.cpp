/*                                                                                                                     Author: Krina Patel                                                                                                    Course: CSCI: 135                                                                                                      Instructor: Proffesor Mike                                                                                             Assignment: Lab1 part 1                                                                                                */                                                                                                                     #include <iostream>                                                                                                    //using namespace std
int main()
{
  int year;
  std::cout<<"Enter year: ";
  std::cin>>year;
  int month;
  std::cout<<"Enter month: ";
  std::cin>>month;
  if(month == 2)
    {
      if(year % 4 != 0)                                                                                                         {                                                                                                                         std::cout <<"28 days "<<std::endl;                                                                                 }                                                                                                                     else if(year % 100 != 0)                                                                                                  {                                                                                                                         std::cout<<"29 days"<<std::endl;                                                                                    }                                                                                                                     else if(year % 400 != 0)                                                                                                  {                                                                                                                         std::cout<<"28 days"<< std::endl;                                                                                 }                                                                                                                     else                                                                                                                      {                                                                                                                         std::cout<< "29 days"<<std::endl;                                                                                   }   
    }
  else if(month % 2 == 0)
    {
      std::cout<<"30 days";
    }
  else if(month % 2 != 0)
    {
      std::cout<<"31 dyas";
    }
  return 0;
}
