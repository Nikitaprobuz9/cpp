/*
   A
  ABC
 ABCDE  
ABCDEFG

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern82
{
	public:
		int lines=4;
		int charcount=1;
		char value='A';
	    int spacecount=3;
	void pat82()
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
				value++;
			}
			cout<<endl;
			charcount=charcount+2;
			spacecount--;
			value='A';
		}	
	}		
};
int main()
{
	Pattern82 p82;
	p82.pat82();
}
