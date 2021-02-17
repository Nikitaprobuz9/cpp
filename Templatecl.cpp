#include<iostream>
#include<conio.h>
using namespace std;
template<class t>
class one
{
 public:
  t a,b,c;
  void set()
  {
  	cout<<"Enter the value of a and  b:"<<endl;
  	cin>>a>>b;
  }
  void add()
  {
    c=a+b;	
  }	
  void dis(char st[])
  {
  	cout<<st<<" "<<c;
  }
};
int main()
{
	one <int>ob;
	ob.set();
	ob.add();
	ob.dis("integer addtion");
	
	one <float>ob2;
	ob2.set();
	ob2.add();
	ob2.dis("float addtion");
}
