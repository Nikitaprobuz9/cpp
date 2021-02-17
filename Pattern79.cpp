/*
PPPPPP
P    P
PPPPPP
PP
PPP
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern79
{
	public:
		int lines=5;
		int charcount=6;
		char value='P';
		int mid=(lines+1)/2;
	void pat79()
	{
	   for(int i=1;i<=lines;i++)
	   {
	      for(int j=1;j<=charcount;j++)
		  {
		     if(i==1||i==mid||j==1)
			 {
				   cout<<value;		 
			 }	
			 
			 else if(i==4)
			 {
			 	charcount=charcount-4;
			 	cout<<value;	
			 }
			 else if(i==5)
			 {
			 	charcount=6;
			 	charcount=charcount-3;
			 	cout<<value;
			 }
			 else if(j==6&&i<=mid)
			  {
			  	  cout<<"    P";
			  }
			  
			 
		  }
		  cout<<endl;	
	   }	
	   
	}	
};
int main()
{
	class Pattern79 p79;
	p79.pat79();
}
