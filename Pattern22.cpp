/*

*
**
* *
**
*
  */
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern22
{
	public:
		int lines=5;
		int starcount=1;
		int mid=(lines+1)/2;
		void pat22()
		{
			for(int i=1;i<=lines;i++)
			{
				for(int j=1;j<=starcount;j++)
				{
					if(j==1||j==starcount)
					{
						cout<<"*";
					}
					else
					{
						cout<<" ";
					}
				}
				cout<<endl;
				if(i<mid)
				{
					starcount++;
				}
				else
				{
					starcount--;
				}
			}
		}
};
int main()
{
	Pattern22 p22;
	p22.pat22();
}
