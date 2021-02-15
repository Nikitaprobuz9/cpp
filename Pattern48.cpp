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
class Pattern48
{
	public:
		int lines=5;
		int starcount=1;
		int spacecount=4;
	void pat48()
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
	Pattern48 p48;
	p48.pat48();
}
