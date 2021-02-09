#include<iostream>
#include<conio.h>
using namespace std;
class Demo1
{
	public:
		int a=2;
		string name="Samba";
		void test()
		{
			cout<<"Demo1: "<<endl;
			cout<<"a: "<<a<<endl;
			cout<<"name: "<<name<<endl;
		}
};
class Demo2: public Demo1
{
	public:
		int id=4;
		double price=40000;
		void view()
		{
			cout<<"Demo2: "<<endl;
			cout<<"ID: "<<id<<endl;
			cout<<"Price: "<<price<<endl;
		}
};
class Demo3:public Demo2
{
	public:
		string brand="Electronices";
	void win()
	{
		cout<<"Demo 3: "<<endl;
		cout<<"Brand: "<<brand<<endl;
	}
};
int main()
{
	Demo1 d1;
	d1.test();
	cout<<"------------------"<<endl;
	Demo2 d2;
	d2.test();
	d2.view();
	cout<<"------------------"<<endl;
	cout<<"Multi-level inheritance start:"<<endl;
    Demo3 d3;
    d3.test();
    d3.view();
    d3.win();
}
