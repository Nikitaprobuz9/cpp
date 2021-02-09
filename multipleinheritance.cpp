#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public:
	int p=10;
	int q=5;
	void div()
		{
			cout<<(p/q)<<endl;
		}
};
class B
{
	public:
		int x=10;
		int y=20;
		void mul()
		{
			cout<<(x*y)<<endl;
		}
		void mod()
		{
			x=85;
			y=60;
			cout<<(x%y)<<endl;
		}
};
class C:public A,public B
{
	public:
		void sub()
		{
			p=50;
			q=30;
			cout<<(p-q)<<endl;
		}
};
int main()
{
	C c1,c2;
	c1.div(); //2
	c1.mul(); //200
	c1.mod(); //25
	c1.sub(); //20
}
