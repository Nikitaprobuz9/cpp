/*Aaaaa
  Bbbbb
  Ccccc*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern7
{
	public:
		int lines=3;
		int charcount=4;
		char value1='A';
	    char value2='a';
		void pat7()
		{
			for(int i=1;i<=lines;i++)
			{
				cout<<value1;
				for(int j=1;j<=charcount;j++)
				{
					cout<<value2;
				}
				cout<<endl;
				value1++;
				value2++;
			}
		}
};
int main()
{
	Pattern7 p7;
	p7.pat7();
}

