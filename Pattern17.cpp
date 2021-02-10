/*
12345
1234
123
12
1
*/#include<iostream>
#include<conio.h>
using namespace std;
class Pattern17
{
	public:
		int lines=5;
		int numcount=5;
		int num=1;
	void pat17()
	{
	    for(int i=1;i<=lines;i++)
		{
		   for(int j=1;j<=numcount;j++)
		   {
		      cout<<num;
			  num++;   	
		   }	
		   cout<<endl;
		   numcount--;
		   num=1;
		}	
	}	
};
int main()
{
	Pattern17 p17;
	p17.pat17();
}
