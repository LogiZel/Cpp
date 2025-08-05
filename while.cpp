#include <iostream>
using namespace std;
int main()
{
    int sum=0,val=10;
    while(val<=10)
    {
        sum+=val;
        ++val;
    }
    cout<<"The sum of 1 to 10 is "<<sum<<endl;
    return 0;
}