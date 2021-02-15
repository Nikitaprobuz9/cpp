/*
  1
 22
333
 44
  5
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern58
{
	public:
		int line=5;
		int numcount=1;
		int value=1;
		int spacecount=2;
		int mid=(line+1)/2;
	void pat58()
	{
	 
		for(int i=1;i<=line;i++)
		{
			for(int j=1;j<=spacecount;j++)
			{
				cout<<" ";
		            
			}
			for(int k=1;k<=numcount;k++)
			{
				cout<<value;
				
			}
			cout<<endl;
			value++;
			if(i<mid)
			{
				spacecount--;
				numcount++;
			}
			else
			{
				spacecount++;
				numcount--;
			}
			
		}
    
    
    }
	
};
int main()
{
	Pattern58 p58;
	p58.pat58();
}
