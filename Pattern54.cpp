/*
A   E
A   E
A   E
A   E
A   E
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern54
{
	public:
		int lines=5;
		int charcount=1;
		int spacecount=3;
		char v1='A';
		char v2='E';
	void pat54()
	{
	    for(int i=1;i<=lines;i++)
		{
			cout<<v1;
	       for(int j=1;j<=spacecount;j++)
		   {
				cout<<" ";
		   }
		   for(int k=1;k<=charcount;k++)
		   {
			   cout<<v2;  		
		   }
		   
		   cout<<endl;		
	    } 	
	}	 
};
int main()
{
	Pattern54 p54;
	p54.pat54();
}
