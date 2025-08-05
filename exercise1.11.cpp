#include<iostream>
using namespace std;
int main()
{
    int n1=0,n2=0;
    cout<<"Enter two numbers: "<<endl;
    cin>>n1;
    cin>>n2;
    int val=n1,i=n2;
    if(n1>n2)
    {   cout<<"The range is: "<<endl;
        while(i<=n1)
        {
            cout<<i<<endl;
            ++i;
        }
    }
    else
        {   
            cout<<"The range is: "<<endl;
            while (val<=n2)
            {
                cout<<val<<endl;
                ++val;
            }
            
        }
    return 0;
}