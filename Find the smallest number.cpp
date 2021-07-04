/*Find the smallest number
Dora is in first grade. Her brother Darwin wants her sister to participate in Math Olympiad. Darwin gives two numbers to Dora. She has to tell the smallest number among them. Can you create a program for the same.
Input should be two integers.*/


#include<iostream>
int main()
{
  int a,b;
  std::cin>>a>>b;
  if(a>b)
    std::cout<<b<<" is smallest number";
  else
    std::cout<<a<<" is smallest number";
}
