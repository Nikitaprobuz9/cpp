#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class One
{
	public:
		char name[100];
		void set(char n[])
		{
			strcpy(name,n);
		}
		void add(One ob,One ob2)
		{
			strcpy(name,ob.name);
			strcat(name,ob2.name);
		}
		void display()
		{
			cout<<name;
		}
};
int main()
{
	One ob,ob2,ob3;
	ob.set("Dinga");
	ob2.set("Dingi");
	ob3.add(ob,ob2);
	ob3.display();
	
}
