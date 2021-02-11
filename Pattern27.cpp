/*
A
AB
ABC
AB
A
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern27
{
	public:
		int lines=5;
		int charcount=1;
		char value='A';
		int mid=(lines+1)/2;
	void pat27()
	{
        for(int i=1;i<=lines;i++)
		{
	        for(int j=1;j<=charcount;j++)
			{
				cout<<value;
				value++;
			}
			cout<<endl;
			value='A';
		    if(i<mid)
			{
	            charcount++;			
			}			
			else
			{
				charcount--;
			}
		}		
    }	 
};
int main()
{
	Pattern27 p27;
	p27.pat27();
}
