/*
  1
 22
333

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern70
{
	public:
		int lines=3;
		int spacecount=2;
		int numcount=1;
		int num=1;
	void pat70()
	{
	  for(int i=1;i<=lines;i++)
	  {
	  	for(int j=1;j<=spacecount;j++)
	  	{
	  		cout<<" ";
		}
		for(int k=1;k<=numcount;k++)
		{
			cout<<num;
		}
		cout<<endl;
		num++;
		numcount++;
		spacecount--;
	  }	
	}	
};
int main()
{
	Pattern70 p70;
	p70.pat70();
}
