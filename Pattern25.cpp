/*
    1
   222
  33333
 4444444
555555555          
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern25
{
	public:
		int lines=5;
		int numcount=1;
		int spacecount=4;
		int num=1;
	void pat25()
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
		  }
		  cout<<endl;
		  spacecount--;
		  numcount=numcount+2;
		  num++;
	   }	
	}	
};
int main()
{
	Pattern25 p25;
	p25.pat25();
}
