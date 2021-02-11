/*
  1
 123
12345
 123
  1   
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern26
{
	public:
		int lines=5;
		int numcount=1;
		int num=1;
		int spacecount=2;
		int mid=(lines+1)/2;
	void pat26()
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
		   if(i<mid)
		   {
		   	  spacecount--;
		   	  numcount=numcount+2;
		   }
		   else
		   {
		   	spacecount++;
		   	numcount=numcount-2;
		   }
		   
		}	
	}	
};
int main()
{
	Pattern26 p26;
	p26.pat26();
}
