//Creating, writing and reading a file.
#include<bits/stdc++.h>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream obj1("D:/programming/oop/try1.txt");
    obj1<<"TEXT IS ENTERED.";
    obj1.close();

    string str;

    ifstream obj3("try1.txt");
    while(getline(obj3,str)){
        cout<<str;
    }
     cout<<"okk";
    obj3.close();
    return 0;
}