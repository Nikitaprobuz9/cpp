/*
1234567
 12345
  123
   1
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern86
{
	public:
		int lines=4;
		int numcount=7;
		int num=1;
		int spacecount=0;
	void pat86()
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
			num=1;
			numcount=numcount-2;
			spacecount++;
		}
		}	
};
int main()
{
	Pattern86 p86;
	p86.pat86();
}
