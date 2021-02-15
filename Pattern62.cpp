/* fourth way of.... 
A b c D e
1 2 3 4 5  
A b c D e
1 2 3 4 5  
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern62
{
	public:
		char a1[6]={'A','b','c','D','e'};
		int a2[5]={1,2,3,4,5};
	void pat62()
	{
	    for(int i=0;i<=4;i++)
		{
		  cout<<a1[i];	
		}	
		cout<<endl;
		for(int j=0;j<=4;j++)
		{
			cout<<a2[j];
		}
		cout<<endl;
	}	
	
};
int main()
{
	Pattern62 p62;
	p62.pat62();
	p62.pat62();
}
