/*

3
32
321
3210
321
32
3

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern91
{
	public:
		int lines=7;
		int numcount=1;
		int num=3;
		int mid=(lines+1)/2;
	void pat91()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=numcount;j++)
			{
				cout<<num;
				num--;
			}
			cout<<endl;
			num=3;
			if(i<mid)
			{
				numcount++;
			}
			else
			{
				numcount--;
			}
			
		}
	}
	
};
int main()
{
	Pattern91 p91;
	p91.pat91();
}
