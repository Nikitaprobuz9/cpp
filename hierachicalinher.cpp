#include<iostream>
#include<conio.h>
using namespace std;
class Demo1
{
	public:
	int a=10;
	int b=20;
};
class Demo2: public Demo1
{
	public:
		void add()
		{
			cout<<(a+b)<<endl;
			a=25;
			b=30;
		}
		void sub()
		{
			cout<<(a-b)<<endl;
		}
};
class Demo5:public Demo1
{
	public:
		void mul()
		{
			cout<<(a*b)<<endl;
		}
};
class Demo3: public Demo1
{
	public:
		void add()
		{
			cout<<(a+b)<<endl;
			cout<<"a: "<<a<<endl;
			cout<<"b: "<<b<<endl;
			cout<<(a+++b)<<endl; //(a+++b)=a++  +b a will be increment by 1 i.e  value of a is 11
		}
};
class Demo4:public Demo1
{
	
};
int main()
{
	Demo1 d1;
	cout<<d1.a<<endl; //10
	cout<<d1.b<<endl; //20
	cout<<"--------------------"<<endl;
	Demo2 d2; 
	cout<<d2.a<<endl; //10
	cout<<d2.b<<endl; //20
	d2.add(); //30
	cout<<d2.a<<endl; //25
	cout<<d2.b<<endl; //30
	d2.sub(); //-5
	cout<<"-------------------"<<endl;
	Demo5 d5;
	cout<<d5.a<<endl; //10
	cout<<d5.b<<endl; //20
	d5.mul(); //200
	//d5.sub();
	//d5.add();
	cout<<d5.a<<endl; //10
	cout<<d5.b<<endl; //20
	cout<<"-------------------"<<endl;
	Demo3 d3;
	cout<<d3.a<<endl; //10
	cout<<d3.b<<endl; //20
	d3.add(); 
	cout<<d3.a<<endl; //a:11
	cout<<d3.b<<endl; //b:20
	cout<<"-------------------"<<endl;
	Demo4 d4;
	cout<<d4.a<<endl; //10
	cout<<d4.b<<endl; //20
}
