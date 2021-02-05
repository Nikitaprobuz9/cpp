#include<iostream>
using namespace std;
#include<conio.h>
class Employee
{
	public:
		float a,s;
		string n_name,d;
	void exp()
	{
	   cin>>a;	
    }
    void name()
    {
    	cin>>n_name;
	}
	void salary()
	{
		cin>>s;
	}
	void des()
	{
		cin>>d;
	}
	void display()
	{
		cout<<"employee name:"<<n_name<<endl;
		cout<<"employee salary:"<<s<<endl;
		cout<<"employee experiance:"<<a<<endl;
		cout<<"employee desgination:"<<d<<endl;
		cout<<"------------------------";
	}
};
int main()
{
	Employee e[100];
	for(int i=0;i<1;i++)
	{
		cout<<"enter employee name:"<<endl;
		e[i].name();
		cout<<"enter employee salary:"<<endl;
		e[i].salary();
		cout<<"enter employee experience:"<<endl;
		e[i].exp();
		cout<<"enter employee desgination:"<<endl;
		e[i].des();
		cout<<"------------------------"<<endl;
	}
	for(int i=0;i<1;i++)
	{
		cout<<"employee id:"<<0+1+i<<endl;
		e[i].display();
	}
	cout<<" "<<endl;
	return 0;
}
