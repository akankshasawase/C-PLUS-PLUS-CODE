#include<iostream>
#include<cmath>
using namespace std;
long long convert(int);
int main()
{
    int n,bin;
    cout<<"Enter a decimal number:";
    cin>>n;
    bin=convert(n);
    cout<<n<<" in decimal = "<<bin<< "in decimal";
    return 0;
}
long long convert(int n)
{
    long long bin=0;
    int i=1,rem;
    for( ;n!=0;)
    {
        rem=n%2;
        n=n/2;
        bin=bin+rem*i;
        i=i*10;
    }
    return bin;
}

