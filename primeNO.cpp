#include<iostream>
using namespace std;
int main()
{
    int n,i,m=0,flag=0;
    cout<<"enter a number to check prime:";
    cin>>n;
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%i==0)
        {
            cout<<"No is not prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"No is prime"<<endl;
    }

    return 0;
}
