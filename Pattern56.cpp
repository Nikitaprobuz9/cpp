/*
ABCDE
*****
*****
*****
ABCDE
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern56
{
	public:
		int line=5;
		int charcount=5;
		char value='A';
	void pat56()
	{
	   for(int i=1;i<=line;i++)
    	{
    	  for(int j=1;j<=charcount;j++)
    	   {
    	      if(i==1||i==line)
    	      {
    	         cout<<value; 
    	      }
    	      else
    	      {
    	    	  
    	    	  cout<<"*";
    	      }
    	      value++;
    	   }
    	  cout<<endl;
    	  value='A';
    	}
	    cout<<endl;	
	}	
};
int main()
{
	Pattern56 p56;
	p56.pat56();
}
