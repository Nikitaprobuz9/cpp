/*
11111
2222
333
44
5
*/#include<iostream>
#include<conio.h>
using namespace std;
class Pattern16
{
	public:
		int lines=5;
		int numcount=5;
		int num=1;
	void pat16()
	{
	    for(int i=1;i<=lines;i++)
		{
		   for(int j=1;j<=numcount;j++)
		   {
		      cout<<num;   	
		   }	
		   cout<<endl;
		   numcount--;
		   num++;
		}	
	}	
};
int main()
{
	Pattern16 p16;
	p16.pat16();
}
