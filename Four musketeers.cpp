/*
Four musketeers
'Artagnan joined the group of 3 Musketeers and now their group is called four Musketeers. Meanwhile, d'Artagnan also moved to a new house in the same locality nearby to the other three. Currently, the houses of Athos, Porthos and Aramis are located in the shape of a triangle. When the three musketeers asked d'Artagnan about the location of his house, he said that his house is equidistant from the houses of the other 3. Can you please help them find out the location of the house? Given the 3 locations {(x1,y1), (x2,y2) and (x3,y3)} of a triangle, write a program to determine the point which is equidistant from all the 3 points.
INPUT FORMAT:

Input consists of 6 integers.

The first integer corresponds to x1.

The second integer corresponds to y1.

The third and fourth integers correspond to x2 and y2 respectively.

The fifth and sixth integers correspond to x3 and y3 respectively.

OUTPUT FORMAT:

The output consists of two floating point numbers which correspond to the location of the house.*/


#include<iostream>
using namespace std;
int main()
{
 float x1,x2,x3,y1,y2,y3,x,y;
cin>>x1;
cin>>y1;
cin>>x2;
cin>>y2;
cin>>x3;
cin>>y3;
x=(x1 + x2 + x3)/3;
y=(y1 + y2 + y3)/3;
cout<<x<<"\n"<< y;
return 0;
}
