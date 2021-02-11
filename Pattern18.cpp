/*different way of 
Aaaaa
Bbbbb
Ccccc*/
#include<iostream>
#include<conio.h>
void Pattern18()
{	
		int i,j;
		char x=65;
		char y=96;
		
		for(i=0;i<3;i++)
		{
			std::cout<<x;
			y+=1;  //y++
			x+=1;  //x++
			for(j=0;j<3;j++)
			{
				std::cout<<y;
			}
			std::cout<<"\n";
		}
	
}
int main()
{
	Pattern18();
	
}
