#include<iostream>
#include <fstream>
using namespace std;
    int main()
    {
        char str[2000];
        fstream file_op("F:\\cpp program\\Demo.cpp",ios::in);
        while(!file_op.eof()) 
        {
              file_op.getline(str,2000);
              cout <<str;
        }         file_op.close();
        cout <<endl;

        return 0;
    } 
