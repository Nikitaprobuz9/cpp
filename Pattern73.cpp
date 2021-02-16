/*
  *
 **
***

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern73
{
	public:
		int lines=3;
		int spacecount=2;
		int starcount=1;
		
	void pat73()
	{
	  for(int i=1;i<=lines;i++)
	  {
	  	for(int j=1;j<=spacecount;j++)
	  	{
	  		cout<<" ";
		}
		for(int k=1;k<=starcount;k++)
		{
			cout<<"*";
		}
		cout<<endl;
		starcount++;
		spacecount--;
	  }	
	}	
};
int main()
{
	Pattern73 p73;
	p73.pat73();
}
