/*
  A
 BB
CCC

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern72
{
	public:
		int lines=3;
		int spacecount=2;
		int charcount=1;
		char value='A';
	void pat72()
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
		cout<<endl;
		value++;
		charcount++;
		spacecount--;
	  }	
	}	
};
int main()
{
	Pattern72 p72;
	p72.pat72();
}
