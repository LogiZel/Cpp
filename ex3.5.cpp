#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter the string s1:"<<endl;
    cin>>s1;
    cout<<"Enter the string s2:"<<endl;
    cin>>s2;
    string s3=s1+s2;
    string s4=s1+" "+s2;
    cout<<"The concatenated string is: "<<s3<<endl;
    cout<<"The concatenated string with space is: "<<s4<<endl;
    return 0;
}