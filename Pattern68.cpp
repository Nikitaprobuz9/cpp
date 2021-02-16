/*
     1
   1 2 3
 1 2 3 4 5 
1 2 3 4 5 6 7
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern68
{
	public:
		int lines=4;
		int numcount=1;
		int spacecount=3;
		int num=1;
	void pat68()
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
		  	num++;
		  }
		  cout<<endl;
		  spacecount--;
		  numcount=numcount+2;
		  num=1;
	   }	
	}	
};
int main()
{
	Pattern68 p68;
	p68.pat68();
}
