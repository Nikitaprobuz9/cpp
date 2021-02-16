/*
   A
  C C
 E E E  
G G G G
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern66
{
	public:
		int lines=4;
		int charcount=1;
		int spacecount=3;
		char value='A';
	void pat66()
	{
	   for(int i=1;i<=lines;i++)
	   {
	      for(int j=1;j<=spacecount;j++)
		  {
		     cout<<" ";	
		  }	
		  for(int k=1;k<=charcount;k++)
		  {
		  	cout<<value<<" ";
		  }
		  value=value+2;
		  cout<<endl;
		  spacecount--;
		  charcount++;
	   }	
	}	
};
int main()
{
	Pattern66 p66;
	p66.pat66();
}
