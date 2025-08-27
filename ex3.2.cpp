#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter the first string:"<<endl;
    cin>>s1;
    cout<<"Enter the second string:"<<endl;
    cin>>s2;
    if (s1.size()!=s2.size())
    {
        cout<<"The strings are unequal"<<endl;
    }
    if(s1.size()>s2.size())
    {
        cout<<"s1 is bigger than s2"<<endl;
    }
    else
    {
        cout<<"s1 is smaller than s2"<<endl;
    }
    return 0;
}