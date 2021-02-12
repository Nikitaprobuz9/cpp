 #include<iostream>
 #include <fstream>
 using namespace std;
    int main()
    {
        fstream file_op("F:\\cpp program\\Demo.cpp",ios::out);

        file_op<<"Test Write to file";
        file_op.close();
        return 0;
    }

