/* third way of.... 
A b c D e
1 2 3 4 5  
A b c D e
1 2 3 4 5  
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Pattern61
{
	public:
		char v1=65;
		char v2=98;
		char v3=99;
		char v4=68;
		char v5=101;
		int line=2;
		int charcount=5;
		int numcount=5;
		int num=1;
	void pat61()
	{
	   for(int i=1;i<=line;i++)
	   {
	      cout<<v1;
		  for(int j=1;j<=1;j++)
		  {
		  	cout<<v2;
		  	cout<<v3;
		  	cout<<v4;
		  	cout<<v5;
		  }
		  cout<<endl;
		  for(int k=1;k<=numcount;k++)
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
	Pattern61 p61;
	p61.pat61();
}
