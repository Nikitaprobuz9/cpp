/*
GGGGGGG
 EEEEE
  CCC
   A
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern88
{
	public:
		int lines=4;
		int charcount=7;
		char value='G';
		int spacecount=0;
	void pat88()
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
			value=value-2;
			charcount=charcount-2;
			spacecount++;
		}
		}	
};
int main()
{
	Pattern88 p88;
	p88.pat88();
}
