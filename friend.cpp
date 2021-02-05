#include <iostream>  
 #include<conio.h> 
using namespace std;  
class A  
{  
    int x =5;  
    friend class B;           // friend class.  
};  
class B  
{  
  public:  
    void display(A &obja)  
    {  
        cout<<"value of x is : "<<obja.x;  
    }  
};  
int main()  
{  
    A obja;  
    B objb;  
    objb.display(obja);  
    return 0;  
}
