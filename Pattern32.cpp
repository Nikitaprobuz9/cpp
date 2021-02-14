/*
1****5         
1****5
1****5
1****5
1****5
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern32
{
	public:
		int lines=5;
		int numcount=1;
		int starcount=4;
		int v1=1;
		int v2=5;
	void pat32()
	{
	   for(int i=1;i<=lines;i++)
	   {
	   	for(int j=1;j<=numcount;j++)
	   	{
	   		cout<<v1;
	   		for(int k=1;k<=starcount;k++)
	   		{
	   		   cout<<"*"; 
		    }
		    cout<<v2;
		}
		cout<<endl;
	   }	
	}	
};
int main()
{
	Pattern32 p32;
	p32.pat32();
}
