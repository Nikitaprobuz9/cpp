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
class Pattern31
{
	public:
		int lines=5;
		int spacecount=2;
		int starcount=1;
		int mid=(lines+1)/2;
	void pat31()
	{
	   for(int i=1;i<=lines;i++)
	   {
	       for(int j=1;j<=spacecount;j++)
		   {
		   	cout<<" ";
		   }
		   for(int k=1;k<=starcount;k++)
		   {
		   	 if(k==1||k==starcount)
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
		      spacecount--;
			  starcount++;   	
			} 	
			else
			{
				spacecount++;
				starcount--;
			}
	   }	
	}	
};
int main()
{
	Pattern31 p31;
	p31.pat31();
}
