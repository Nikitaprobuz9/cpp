/*
12345
12345
12345
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern2
{
	public:
		int lines=3;
		int numcount=5;
		int num=1;
		void pat2()
		{
			for(int i=1;i<=lines;i++)
			{
				for(int j=1;j<=numcount;j++)
				{
					cout<<num;
					num++;
				}
				cout<<endl;
				num=1;
			}
		}
};
int main()
{
	Pattern2 p2;
	p2.pat2();
}

