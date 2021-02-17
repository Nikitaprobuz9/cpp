/*
DDDDDDD
 CCCCC
  BBB
   A
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern87
{
	public:
		int lines=4;
		int charcount=7;
		char value='D';
		int spacecount=0;
	void pat87()
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
			value--;
			charcount=charcount-2;
			spacecount++;
		}
		}	
};
int main()
{
	Pattern87 p87;
	p87.pat87();
}
