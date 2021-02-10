/*
EEEEE
DDDDD
CCCCC
BBBBB
AAAAA
*/

#include<iostream>
#include<conio.h>
using namespace std;
class Pattern12
{
	public:
		int lines=5;
		int charcount=5;
		char value='E';
	void pat12()
	{
		for(int i=1;i<=lines;i++)
		{
			for(int j=1;j<=charcount;j++)
			{
				cout<<value;
			}
			cout<<endl;
			value--;
		}
	}
};
int main()
{
	Pattern12 p12;
	p12.pat12();
}
