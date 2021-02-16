/*
  1
 12
123

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern71
{
	public:
		int lines=3;
		int spacecount=2;
		int numcount=1;
		int num=1;
	void pat71()
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
			num++;
		}
		cout<<endl;
		num=1;
		numcount++;
		spacecount--;
	  }	
	}	
};
int main()
{
	Pattern71 p71;
	p71.pat71();
}
