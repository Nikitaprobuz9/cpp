/*
   *
  * *
 * * * 
* * * *
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern69
{
	public:
		int lines=4;
		int starcount=1;
		int spacecount=3;
	void pat69()
	{
	   for(int i=1;i<=lines;i++)
	   {
	      for(int j=1;j<=spacecount;j++)
		  {
		     cout<<" ";	
		  }	
		  for(int k=1;k<=starcount;k++)
		  {
		  	cout<<"*"<<" ";
		  }
		  cout<<endl;
		  spacecount--;
		  starcount++;
	   }	
	}	
};
int main()
{
	Pattern69 p69;
	p69.pat69();
}
