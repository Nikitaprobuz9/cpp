 #include<iostream>
 #include<fstream>
 using namespace std;
    int main()
    {
        char str[2000];
        fstream file_op("F:\\cpp program\\Demo.cpp",ios::in);  //ios::in->read permission
        while(file_op >> str)
             cout<< str ;        

            file_op.close();

        return 0;
    }
