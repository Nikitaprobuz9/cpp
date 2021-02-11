/*
*****
 **** 
  ***
   **
    *
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern19
{
	public:
		int lines=5;
		int starcount=5;
		int spacecount=0;
		void pat19()
		{
			for(int i=0;i<=lines;i++)
			{
				for(int j=1;j<=spacecount;j++)
				{
					cout<<" ";
				}
				for(int k=1;k<=starcount;k++)
				{
					cout<<"*";
				}
				cout<<endl;
				starcount--;
				spacecount++;
			}
		}
};
int main()
{
	Pattern19 p19;
	p19.pat19();
}
