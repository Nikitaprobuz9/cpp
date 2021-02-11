/*
    1
   123
  12345
 1234567
123456789          
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern24
{
	public:
		int lines=5;
		int numcount=1;
		int spacecount=4;
		int num=1;
	void pat24()
	{
	   for(int i=1;i<=lines;i++)
	   {
	      for(int j=1;j<=spacecount;j++)
		  {
		      cout<<" ";  	
		  }	
		  for(int k=1;k<=numcount;k++)
		  {
		  	cout<<num;
		  	num++;
		  }
		  cout<<endl;
		  spacecount--;
		  numcount=numcount+2;
		  num=1;
	   }	
	}	
};
int main()
{
	Pattern24 p24;
	p24.pat24();
}
