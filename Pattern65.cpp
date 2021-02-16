/*
   A
  B B
 C C C  
D D D D
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern65
{
	public:
		int lines=4;
		int charcount=1;
		int spacecount=3;
		char value='A';
	void pat65()
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
		  value++;
		  cout<<endl;
		  spacecount--;
		  charcount++;
	   }	
	}	
};
int main()
{
	Pattern65 p65;
	p65.pat65();
}
