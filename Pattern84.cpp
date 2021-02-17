/*
*******
 *****
  ***
   *
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern84
{
	public:
		int lines=4;
		int starcount=7;
		int spacecount=0;
	void pat84()
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
			starcount=starcount-2;
			spacecount++;
		}
		}	
};
int main()
{
	Pattern84 p84;
	p84.pat84();
}
