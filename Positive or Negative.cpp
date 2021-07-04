/*Positive or Negative
Elsa is new to concept of positive and negative numbers. Can you help her to check whether the given number is positive or negative.
Input consist of an integer.

[Hint : Consider zero as a positive integer]*/


#include<iostream>
int main()
{
  int a;
  std::cin>>a;
  if(a>=0)
    std::cout<<a<<" is a positive number.";
  else
    std::cout<<a<<" is a negative number.";
}
