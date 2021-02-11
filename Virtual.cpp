/*With virtual function*/
#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
	public:
		virtual void dis()
		{
			cout<<"Mai Employee huuu....."<<endl;
		}
		
};
class Trainer: public Employee
{
	public:
		void dis()
		{
			cout<<"Mai Trainer huuu...."<<endl;
		}
};
int main()
{
	Employee e1,*e1pt;
	e1pt=&e1;
	e1pt->dis();
	
	Trainer t1;
	e1pt=&t1;
	e1pt->dis();
	
}
