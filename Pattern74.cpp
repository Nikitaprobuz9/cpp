/*
EEEEE
 DDDD
  CCC
   BB
    A
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern74
{
	public:
		int lines=5;
		int charcount=5;
		int spacecount=0;
		char value='E';
	void pat74()
	{
	  for(int i=1;i<=lines;i++)
	  {
	  	for(int j=1;j<=spacecount;j++)
	  	{
	  		cout<<" ";
	    }
	  	for(int k=1;k<=charcount;k++)
	  	{
		    cout<<value;
		}
	  
	  value--;
	  cout<<endl;
	  charcount--;
	  spacecount++;
     }
	}	
};
int main()
{
	Pattern74 p74;
	p74.pat74();
}
