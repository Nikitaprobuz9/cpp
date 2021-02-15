/*
    *
   * *
  *   *
 *     *
*********

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern35
{
	public:
		int lines=5;
		int spacecount=4;
		int starcount=1;
	void pat35()
	{
	   for(int i=1;i<=lines;i++)
	   {
	   	for(int j=1;j<=spacecount;j++)
	   	{
	   		cout<<" ";
		}
		for(int k=1;k<=starcount;k++)
		{
			if(k==1||k==starcount||i==lines)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
		spacecount--;
		starcount=starcount+2;
		   }	
	}	
};
int main()
{
	Pattern35 p35;
	p35.pat35();
}
