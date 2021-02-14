/*
*  *
** **
******
** **
*  *
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern29
{
	public:
		int lines=5;
		int starcount=1;
		int spacecount=2;
		int mid=(lines+1)/2;
	void pat29()
	{
	    for(int i=1;i<=lines;i++)
		{
		  for(int j=1;j<=starcount;j++)
	      {
	      	cout<<"*";
		  }
		  for(int k=1;k<=spacecount;k++)
		  {
		  	cout<<" ";
		  }
		  for(int l=1;l<=starcount;l++)
		  {
		  	cout<<"*";
		  }
	      cout<<endl;
	      if(i<mid)
	      {
	      	starcount++;
	      	spacecount--;
		  }
		  else
		  {
		  	starcount--;
		  	spacecount++;
		  }
		}	
	}	
};
int main()
{
	Pattern29 p29;
	p29.pat29();
}
