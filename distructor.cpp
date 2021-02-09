/*distructor call*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class one
{
	public:
		char *name;
		int len;
		one()
		{
		 len=0;
		 name=new char[len];
	    }    
	 one(char n[])
		{
			len=strlen(n);
			name=new char[len+1];
			strcpy(name,n);
		}
		void dis()
		{
			cout<<name<<" "<<len;
		}
		~one()
		{
			cout<<"distructor called";
		}
};
int main()
{
	one ob1("suresh"),ob2,ob3;
	ob1.dis();
}
