/*The newspaper Agency
Each Sunday, a newspaper agency sells w copies of a special edition newspaper for Rs.x per copy. The cost to the agency of each newspaper is Rs.y. The agency pays a fixed cost for storage, delivery and so on of Rs.100 per Sunday. The newspaper agency wants to calculate the profit which it obtains only on Sundays. Can you please help them out by writing a program to compute the profit if w, x, and y are given.
INPUT FORMAT:

Input consists of 3 integers:

w, x, and y.

w is the number of copies sold, x is the cost per copy and y is the cost the agency spends per copy.

OUTPUT FORMAT:

The output consists of a single integer which corresponds to the profit obtained by the newspaper agency.*/


#include<iostream>
using namespace std;
  //Type your code here.
int main()
{
 int n,w,x,y,z=100;
 cin>>w>>x>>y;
 n=(w*x)-(w*y)-100;
 cout<<n;
}
