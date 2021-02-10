/*
1
22
333
4444
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern13
{
	public:
		int lines=4;
		int numcount=1;
		int num=1;
	void pat13()
	{
	    for(int i=1;i<=lines;i++)
		{
		   for(int j=1;j<=numcount;j++)
		   {
		      cout<<num;   	
		   }	
		   cout<<endl;
		   numcount++;
		   num++;
		}	
	}	
};
int main()
{
	Pattern13 p13;
	p13.pat13();
}
