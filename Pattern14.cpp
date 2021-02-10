/*
A
AB
ABC
ABCD
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern14
{
	public:
		int lines=4;
		int charcount=1;
		char value='A';
	void pat14()
	{
	    for(int i=1;i<=lines;i++)
		{
		   for(int j=1;j<=charcount;j++)
		   {
		      cout<<value; 
			  value++;  	
		   }	
		   cout<<endl;
		   charcount++;
		   value='A';
		}	
	}	
};
int main()
{
	Pattern14 p14;
	p14.pat14();
}
