/*Will Lucy get the pass to Narnia?
Lucy has entered to Narnia through the wardrobe. Once she enters to Narnia, she is encountered with a genie. Genie takes care of Narnia from trespassers. As Genie finds Lucy to be genuine, Genie allows Lucy to enter Narnia if she answers his question. He gives Lucy two numbers and asks her to perform the basic arithmetic operation like addition, subtraction etc. She need to perform the same and tell the answer. If she tells right answer, she gets the pass to Narnia.
The input should consists of two integers and the operation to be performed which should be corresponding integer. Print the Menu as

Addition(+)
Subtraction(-)
Multiplication(*)
Division(/)
Remainder(%)
*/

#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a;
  cout<<"Enter first number :";
  cin>>b;
  cout<<" Enter second number :";
  cin>>c;
  cout<<" Menu"<<"\n";
  cout<<"1.Addition"<<"\n";
  cout<<"2.Subtraction"<<"\n";
  cout<<"3.Multiplication"<<"\n";
  cout<<"4.Division"<<"\n";
  cout<<"5.Remainder"<<"\n";
  switch(c)
  {
    case 1:
  	  {
  		cout<<a+b;
		break;
  	  }
	case 2:
      {
		cout<<a-b;
		break;
      }
	case 3:
      {
		cout<<a*b;
		break;
      }
	case 4:
      {
		cout<<a/b;
		break;
      }
	case 5:
      {
		cout<<a%b;
		break;
      }
	default:
      {
		cout<<"Invalid operation";
      }
  }
	return 0;
}
