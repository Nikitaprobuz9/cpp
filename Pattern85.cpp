/*
7777777
 55555
  333
   1
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern85
{
	public:
		int lines=4;
		int numcount=7;
		int num=7;
		int spacecount=0;
	void pat85()
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
			num=num-2;
			numcount=numcount-2;
			spacecount++;
		}
		}	
};
int main()
{
	Pattern85 p85;
	p85.pat85();
}
