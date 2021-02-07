/*WAP addtion of a two numbers in two diffrent class using friend function*/
#include<iostream>
#include<conio.h>
using namespace std;
class Two;
class One
{
	private:
		int a;
	public:
	    void read_A()
		{
	        a=50;		
		}	
		friend int sum(One o,Two t);
};
class Two
{
	private:
		int b;
	public:
	    void read_B()
		{
			b=40;
	    }
	    friend int sum(One o,Two t);
};
int sum(One o,Two t)
{
	return(o.a+t.b);
}
int main()
{
	One obj1;
	Two obj2;
	obj1.read_A();
	obj2.read_B();
	cout<<"sum is:"<<sum(obj1,obj2);
	return 0;
}
