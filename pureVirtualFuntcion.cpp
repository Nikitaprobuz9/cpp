#include<iostream>
using namespace std;
class virtue
{
    public:
    int a;
     virtual void fun()=0;
    int getX() 
    {
         return a; 
    } 
}; 
class Derived: public virtue 
{ 
    int y; 
    public: 
    void fun() 
    {
         cout << "fun() called";
    } 
}; 
  
int main(void) 
{ 
    Derived d; 
    d.fun();
    
} 
    
