/*
A b c D e
1 2 3 4 5  
A b c D e
1 2 3 4 5  
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern59
{
	public:
	    int lines=4;
	    int n=1;
	    char v1='A';
	    char v2='b';
	void Pat59()
	{
	   for(int i=1;i<=2;i++)
	   {
	   	   cout<<v1;
	       for(int j=1;j<=5;j++)
		   { 
		     if(j<3)
		     {
		     	cout<<v2;
		     	v2++;
			 }
			 else
			 if(j<4)
			 {
			 	v1=v1+3;
			 	cout<<v1;
			 }
			 else if(j<5)
			 {
			 	v2++;
			 	cout<<v2;
			 }
		   }
		 cout<<endl;
		 for(int n=1;n<=5;n++)
		 {
		 	cout<<n;
		 }
		 v1='A';
		 v2='b';
		 n=1;	 
		  cout<<endl; 	
	   }	
	}    
};
int main()
{
	Pattern59 p59;
	p59.Pat59();
}
