/*
EDCBA
EDCBA
EDCBA
EDCBA
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern11
{
	public:
		int lines=4;
		int charcount=5;
		char value='E';
	void pat11()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=charcount;j++)
			{
				cout<<value;
				value--;
			}
			cout<<endl;
			value='E';
		}
	}
};
int main()
{
	Pattern11 p11;
	p11.pat11();
}
