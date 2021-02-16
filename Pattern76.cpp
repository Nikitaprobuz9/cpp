/*
12345
 1234
  123
   12
    1
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern76
{
	public:
		int lines=5;
		int numcount=5;
		int spacecount=0;
		int num=1;
	void pat76()
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
	  numcount--;
	  spacecount++;
	  num=1;  
     }
	}	
};
int main()
{
	Pattern76 p76;
	p76.pat76();
}
