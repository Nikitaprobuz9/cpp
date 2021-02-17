/*

*
**
***
****
***
**
*

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern90
{
	public:
		int lines=7;
		int starcount=1;
		int mid=(lines+1)/2;
	void pat90()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=starcount;j++)
			{
				cout<<"*";
			}
			cout<<endl;
			if(i<mid)
			{
				starcount++;
			}
			else
			{
				starcount--;
			}
			
		}
	}
	
};
int main()
{
	Pattern90 p90;
	p90.pat90();
}
