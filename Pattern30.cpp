/*
*  *
** **
* ** *
** **
*  *

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern30
{
	public:
		int lines=5;
		int starcount=1;
		int spacecount=2;
		int mid=(lines+1)/2;
	void pat30()
	{
	    for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=starcount;j++)
			{
				if(j==1||j==starcount)
				{
				  cout<<"*";
			    }
			    else
			    {
			    	cout<<" ";
				}
			}
			for(int k=1;k<=spacecount;k++)
			{
				cout<<" ";
			}
			for(int l=1;l<=starcount;l++)
			{
				if(l==1||l==starcount)
				{
					cout<<"*";
				}
				else
				{
					cout<<" ";
				}
			}
			cout<<endl;
			if(i<mid)
			{
				spacecount--;
				starcount++;
			}
			else
			{
				spacecount++;
				starcount--;
			}
			}	
	}	
};
int main()
{
	Pattern30 p30;
	p30.pat30();
}
