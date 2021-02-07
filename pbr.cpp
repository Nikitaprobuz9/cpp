#include<iostream>
#include<conio.h>
using namespace std;
class one
{
	public:
		int a,b;
		public:
			void set(int x,int y);
			void add(one &cob2);
			void disres();
};
void one::set(int x,int y)
{
	a=x;
	b=y;
}
void one::add(one &cob2)
{
	cob2.a=12;
	cob2.b=13;
	
}
void one::disres()
{
	cout<<"value of a is:"<<a<<"\t"<<"value of b is:"<<b<<endl;
}
int main()
{
	one ob1,ob2;
	ob1.set(2,3);
	//ob2.set(4,5);
	ob1.disres();
    ob1.add(ob1);
	ob1.disres();	
}
