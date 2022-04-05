
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    float num[100],sum=0.0,avg;
    cout<<"enter the no of elements:";
    cin>>n;
    while(n>100||n<1)
    {
        cout<<"error";
        cout<<"enter no again";
        cin>>n;
    }
    for(i=0;i<n;++i)
    {
        cout<<"enter number:" <<i+1<<endl;
        cin>>num[i];
        sum=sum+num[i];
    }
    avg=sum/n;
    cout<<"Average="<<avg;
    return 0;
}
