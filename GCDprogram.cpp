#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return a;
    if(a>b)
        return gcd(a-b,b);
    return gcd(a,b-a);
}
int main()
{
    //int x,y;
    //int a,b;
   // cout<<"enter a numbers to calculate GCD:";
    //cin>>x>>y;
    int a=36,b=60;
    cout<<"GCD of "<< a << "and" << b <<"is "<<gcd(a,b);

    return 0;
}
