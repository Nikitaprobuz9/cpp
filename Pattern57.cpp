/*
  A
 A*A
A***A
 A*A
  A

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern57
{
	public:
		int lines=5;
		int charcount=1;
		char value='A';
		int mid=(lines+1)/2;
		int spacecount=2;
	void pat57()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=spacecount;j++)
			{
				cout<<" ";
			}
			for(int k=1;k<=charcount;k++)
			{
				if(k==1||k==charcount)
				{
				
				   cout<<value;
			    }
			    else
			    {
			    	cout<<"*";
				}
			}
			cout<<endl;
			if(i<mid)
			{
			  spacecount--;
			  charcount=charcount+2;	
			}
			else
			{
				spacecount++;
				charcount=charcount-2;
			}
		}
	}
};
int main()
{
	Pattern57 p57;
	p57.pat57();
}
