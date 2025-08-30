#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string v1;
    vector<string>v2;
    cout<<"Enter the strings:"<<endl;
    while(cin>>v1)
    {
        v2.push_back(v1);
    }
    cout<<endl;
    cout<<"The vector is:"<<endl;
    for(auto i:v2)
    {
        cout<<i<<" ";
    }
    return 0;
}