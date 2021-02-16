/*
55555
 4444
  333
   22
    1
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern77
{
	public:
		int lines=5;
		int numcount=5;
		int spacecount=0;
		int num=5;
	void pat77()
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
	    num--;
	  cout<<endl;
	  numcount--;
	  spacecount++;
	    
     }
	}	
};
int main()
{
	Pattern77 p77;
	p77.pat77();
}
