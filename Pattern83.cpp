/*
4444444
 33333
  222
   1
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern83
{
	public:
		int lines=4;
		int numcount=7;
		int num=4;
		int spacecount=0;
	void pat83()
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
			cout<<endl;
			num--;
			numcount=numcount-2;
			spacecount++;
		}
		}	
};
int main()
{
	Pattern83 p83;
	p83.pat83();
}
