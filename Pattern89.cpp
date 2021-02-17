/*
ABCDEFG
 ABCDE
  ABC
   A
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern89
{
	public:
		int lines=4;
		int charcount=7;
		char value='A';
		int spacecount=0;
	void pat89()
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
			value='A';
			charcount=charcount-2;
			spacecount++;
		}
		}	
};
int main()
{
	Pattern89 p89;
	p89.pat89();
}
