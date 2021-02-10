/*
AAAAA
BBBBB
CCCCC
DDDDD
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern4
{
	public:
		int lines=4;
		int charcount=5;
		char value='A';
		void pat4()
		{
			for(int i=1;i<=lines;i++)
			{
				for(int j=1;j<=charcount;j++)
				{
					cout<<value;
				}
				cout<<endl;
				value++;
			}
		}
};
int main()
{
	Pattern4 p4;
	p4.pat4();
}

