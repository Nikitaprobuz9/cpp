/*
*****
****
***
**
*
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern15
{
	public:
		int lines=5;
		int starcount=5;
	void pat15()
	{
	    for(int i=1;i<=lines;i++)
		{
		   for(int j=1;j<=starcount;j++)
		   {
		      cout<<"*";   	
		   }	
		   cout<<endl;
		   starcount--;
		}	
	}	
};
int main()
{
	Pattern15 p15;
	p15.pat15();
}
