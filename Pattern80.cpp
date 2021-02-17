/*
   1
  123
 12345  
1234567

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern80
{
	public:
		int lines=4;
		int numcount=1;
		int num=1;
	    int spacecount=3;
	void pat80()
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
			numcount=numcount+2;
			spacecount--;
			num=1;
		}	
	}		
};
int main()
{
	Pattern80 p80;
	p80.pat80();
}
