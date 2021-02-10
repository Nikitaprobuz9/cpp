/*Binary operator overloading*/
#include<iostream>
#include<conio.h>
using namespace std;
class bindemo
{
	public:
	int a,b;
	void set(int x,int y)
	{
		a=x;
		b=y;
	}
	void operator +(bindemo cob2)
	{
		int c=a+cob2.a;
		int d=b+cob2.b;
		cout<<c<<d;
	}
	void dis()
	{
		cout<<a<<b;
	}
};
int main()
{
	bindemo ob1,ob2;
	ob1.set(2,3);
	ob2.set(4,5);
	ob1+ob2;
}
