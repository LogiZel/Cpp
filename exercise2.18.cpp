#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int *p=&i;
    int *pi=p;
    cout<<*pi<<endl;
    return 0;
}