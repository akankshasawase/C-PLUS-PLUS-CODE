#include<iostream>
using namespace std;
int checkprime(int);
int main()
{
    int n1,n2;
    bool flag;
    cout<<"Enter two positive integers:";
    cin>>n1>>n2;
    if(n1>n2)
    {
        n2=n1+n2;
        n1=n2-n1;
        n2=n2-n1;
    }
    cout<<"prime numbers between"<<n1<<" and "<<n2<<"are:\n";
    for(int i=n1+1;i<n2;++i)
    {
        flag=checkprime(i);
        if(flag)
            cout<<i<<",";
    }
    return 0;
}
int checkprime(int n)
{
    bool prime=true;
    if(n==0||n==1)
        {
            prime=false;

        }
        for(int i=2;i<=n/2;++i)
        {
            if(n%i==0)
            {
                prime=false;
               break;

            }
        }


}

