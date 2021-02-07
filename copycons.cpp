/*WAP using copy constructor*/
#include<iostream>
#include<conio.h>
using namespace std;
class Example 
{
   int a, b;
   public:
   Example(int x, int y)
   {
      a = x;
      b = y;
      cout << "Constructor:"<<endl;
   }
   Example(const Example &obj)
   {
   	a=obj.a;
   	b=obj.b;
   	cout<<"copy constructor"<<endl;
   }
   void Display()
   {
      cout<<"value:"<<a<<"\t"<<b<<endl;	
   }
};

int main() 
{           
   //Normal Constructor Invoked
   Example Object(10, 20);

   //Copy Constructor Invoked - M1
   Example Object2(Object);

   //Copy Constructor Invoked - Method 2
   Example Object3 = Object;

   Object.Display();
   Object2.Display();
   Object3.Display();
   getch();
   return 0;
} 
