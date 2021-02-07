#include<iostream>
#include<conio.h>
using namespace std;
class one
{
	public:
		int a,b;
		public:
			void set(int x,int y);
			void add(one cob2);
			void disres();
};
void one::set(int x,int y)
{
	a=x;
	b=y;
}
void one::add(one cob2)
{
	int r=a+cob2.a;
	int s=b+cob2.b;
	cout<<r<<"\t"<<s<<endl;
}
void one::disres()
{
	
}
int main()
{
	one ob1,ob2;
	ob1.set(2,3);
	ob2.set(4,5);
    ob1.add(ob2);
	ob1.disres();	
}
