/*
A b c D e
1 2 3 4 5  
A b c D e
1 2 3 4 5  
*/

#include<iostream>
#include<conio.h>
using namespace std;
class Pattern60
{
	public:
    	int line=5;
    	int numcount=5;
    	int value=1;
    void Pat60()
	{	
    	for(int i=1;i<=line;i++)
    	{
    	  for(int j=1;j<=numcount;j++)
    	   {
    	      if(i==2||i==4)
    	      {
    	        cout<<value; 
    	        value++;
    	      }   
    	   }
    	     if(i==1||i==3)
    	     {
    	     	cout<<"AbcDe";
			 }
    	     cout<<endl;
    	     value=1;
    	}
	}

};
int main()
{
	Pattern60 p60;
	p60.Pat60();
}



