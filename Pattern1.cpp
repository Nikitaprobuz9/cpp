/*
*****
*****
*****
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern1
{
	public:
		int lines=3;
		int starcount=5;
		void pat()
		{
			for(int i=1;i<=lines;i++)
			{
				for(int j=1;j<=starcount;j++)
				{
					cout<<"*";
				}
				cout<<endl;
			}
		}
};
int main()
{
	Pattern1 p1;
	p1.pat();
}

