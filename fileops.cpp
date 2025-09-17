#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream file("hello");
    if(!file.is_open())
    {
        cout<<"Could not create the file"<<endl;
    }
    file<<"This is my first Wikipedia-like article.\n";
    file<<"This is fun\n";
    file<<"This is interesting\n";
    file.close();
    cout<<"The file is created and written"<<endl;
    return 0;
}
