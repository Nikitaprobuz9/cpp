/*
   1
  3 3 
 5 5 5  
7 7 7 7
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern67
{
	public:
		int lines=4;
		int numcount=1;
		int spacecount=3;
		int num=1;
	void pat67()
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
		  num=num+2;
		  cout<<endl;
		  spacecount--;
		  numcount++;
	   }	
	}	
};
int main()
{
	Pattern67 p67;
	p67.pat67();
}
