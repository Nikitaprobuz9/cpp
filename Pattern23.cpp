/*
    1
   111
  11111
 1111111  
111111111
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern23
{
	public:
		int lines=5;
		int numcount=1;
		int num=1;
		int spacecount=4;
	void pat23()
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
		  spacecount--;
		  numcount=numcount+2;
	   }	
	}	
};
int main()
{
	Pattern23 p23;
	p23.pat23();
}
