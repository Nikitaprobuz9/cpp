/*
  *
 * *  
*   *
 * *
  *

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern28
{
	public :
		int lines=5;
		int spacecount=2;
		int starcount=1;
		int mid=(lines+1)/2;
	void pat28()
	{
	  for(int i=1;i<=lines;i++)
	  {
	  	for(int j=1;j<=spacecount;j++)
	  	{
	  		cout<<" ";
		}
		for(int k=1;k<=starcount;k++)
		{
			if(k==1||k==starcount)
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
			starcount=starcount+2;
		}
		else
		{
			spacecount++;
			starcount=starcount-2;
		}
	  }	
	}	
};
int main()
{
	Pattern28 p28;
	p28.pat28();
}
