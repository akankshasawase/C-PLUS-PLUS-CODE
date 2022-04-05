#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter a no that you want to add:";
    cin>>n;
    while(n>0)
    {
        sum=sum+n;
        n--;
    }
    cout<<"sum is:"<<sum;
    return 0;
}
