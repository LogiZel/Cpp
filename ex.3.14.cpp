#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int v1;
    vector<int>v2;
    cout<<"Enter the number:"<<endl;
    while(cin>>v1)
    {
        v2.push_back(v1);
    }
    cout<<endl;
    cout<<"The vector is:"<<endl;
    for(int i:v2)
    {
        cout<<i<<" ";
    }
    return 0;
}