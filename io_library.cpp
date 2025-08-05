#include<iostream>
using namespace std;
int main() //functiuon name
{/*begining of the main function body*/                                  
    cout<<"Enter two numbers:"<<endl;//asking input
    float v1=0,v2=0;
    cin>>v1;//taking in input
    cin>>v2;
    int sum =v1+v2;
    cout<<"The sum of "<<v1<<" and "<<v2<<" is "<<sum;
    int diff=v1-v2;
    cout<<"The difference between "<<v1<<" and "<<v2<<" is "<<diff<<endl;
    int prod=v1*v2;
    cout<<"The product of "<<v1<<" and "<<v2<<" is "<<prod<<endl;
    float qout=v1/v2;
    cout<<"The qoutient of "<<v1<<" and "<<v2<<" is "<<qout<<endl;
    return 0;
}