/* WAP to print area of circle using function with no argumnet and no return type*/

#include<iostream>
using namespace std;
#include<conio.h>
void fun();
int r=4;
float pi=3.14;
int main()
{
	fun();
	return 0;
}
void fun()
{
	float area=pi*r*r;
	cout<<area<<endl;
}
