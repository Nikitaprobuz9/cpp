#include<iostream>
#include<conio.h>
using namespace std;
class one
{
	public:
		int a,b;
		public:
			void set(int x,int y);
			one add(one cob2);
			void disres();
};
void one::set(int x,int y)
{
	a=x;
	b=y;
}
one one::add(one cob2)
{
	one tob;
    tob.a=a+cob2.a;
	tob.b=b+cob2.b;
	return(tob);
}
void one::disres()
{
	cout<<"value of a is:"<<a<<"\t"<<"value of b is:"<<b<<endl;
}
int main()
{
	one ob1,ob2,ob3;
	ob1.set(2,3);
	ob2.set(4,5);
	ob1.disres();
	ob2.disres();
    ob3=ob1.add(ob2);
	ob1.disres();	
}
