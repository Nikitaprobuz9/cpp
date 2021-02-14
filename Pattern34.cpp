/*
12345
*****
*****
*****
12345
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern34
{
	public:
		int lines=5;
		int numcount=5;
		int num=1;
	void pat34()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=numcount;j++)
			{
				if(i==1||i==lines)
				{
					cout<<num;
					num++;
				}
				else
				{
					cout<<"*";
				}
			}
			num=1;
			cout<<endl;
		}
	}
	
};
int main()
{
	Pattern34 p34;
	p34.pat34();
}
