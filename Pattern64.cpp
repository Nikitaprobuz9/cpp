/*
    1
  2 2
3 3 3 

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern64
{
	public:
		int lines=4;
		int numcount=1;
		int spacecount=3;
		int num=1;
	void pat64()
	{
	   for(int i=1;i<=lines;i++)
	   {
	      for(int j=1;j<=spacecount;j++)
		  {
		     cout<<" ";	
		  }	
		  for(int k=1;k<=numcount;k++)
		  {
		  	cout<<num<<" ";
		  }
		  num++;
		  cout<<endl;
		  spacecount--;
		  numcount++;
	   }	
	}	
};
int main()
{
	Pattern64 p64;
	p64.pat64();
}
