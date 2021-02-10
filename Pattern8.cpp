/*
*
**
***
****
*/

#include<iostream>
#include<conio.h>
using namespace std;
class Pattern8
{
	public:
		int lines=4;
		int starcount=1;
		void pat8()
		{
			for(int i=1;i<=lines;i++)
			{
				for(int j=1;j<=starcount;j++)
				{
					cout<<"*";
				}
				cout<<endl;
				starcount++;
			}
		}
};
int main()
{
	Pattern8 p8;
	p8.pat8();
}

