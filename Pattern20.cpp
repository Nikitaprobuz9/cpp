/*
  *
 ***
*****
 ***
  *
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern20
{
	public:
		int lines=5;
		int starcount=1;
		int spacecount=2;
		int mid=(lines+1)/2;
		void pat20()
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
				if(i<mid)   //mid=3
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
	Pattern20 p20;
	p20.pat20();
}
