/*

*    *
**  **
* ** *
**  **
*    *

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern21
{
	public:
		int lines=5;
		int starcount=1;
		int spacecount=4;
		int mid=(lines+1)/2;
	void pat21()
	{
	   for(int i=1;i<=lines;i++)
	   {
	     for(int j=1;j<=starcount;j++)
		 {
		    cout<<"*";	
		 }	
		 for(int k=1;k<=spacecount;k++)
		 {
		 	cout<<" ";
		 }
		 for(int l=1;l<=starcount;l++)
		 {
		 	cout<<"*";
		 }
		 cout<<endl;
		 if(i<mid)
		 {
		 	spacecount=spacecount-2;
		 	starcount++;
		 }
		 else
		 {
		 	spacecount=spacecount+2;
		 	starcount--;
		 }
		 
	   }	
	}			
};
int main()
{
	Pattern21 p21;
	p21.pat21();
}
