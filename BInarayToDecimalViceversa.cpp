#include<iostream>
#include<cmath>
using namespace std;
int convert(long long);
int main()
{
    long long n;
    cout<<"Enter a binary number:";
    cin>>n;
    cout<<n<<" in binary = "<<convert(n)<<"in decimal";
    return 0;
}
int convert(long long n)
{
    int dec=0,i=0,rem;
    for( ;n!=0;++i)
    {
        rem=n%10;
        n=n/10;
        dec=dec+rem*pow(2,i);
    }
    return dec;
}
