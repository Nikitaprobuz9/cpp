/*
1111
2222
3333
4444
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern10
{
	public:
		int lines=4;
		int numcount=4;
		int num=1;
		void pat10()
		{
			for(int i=1;i<=lines;i++)
			{
				for(int j=1;j<=numcount;j++)
				{
					cout<<num;
				}
				cout<<endl;
				num++;
			}
		}
};
int main()
{
	Pattern10 p10;
	p10.pat10();
}
