#include<iostream>
using namespace std;
long int Facto(int n);
int main()
{
    int n;
    cout<<"enter a positive integer:";
    cin>>n;
    cout<<"factorial of "<<n<<"="<<Facto(n);
    return 0;

}
long int Facto(int n)
{
    if(n>=1)
        return n*Facto(n-1);
    else
        return 1;
}
