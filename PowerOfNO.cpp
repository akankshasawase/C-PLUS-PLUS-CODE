#include<iostream>
using namespace std;
int main()
{
    int base,exponent;
    long value=1;
    cout<<"enter a value for base:";
    cin>>base;
    cout<<"enter a value for exponent:";
    cin>>exponent;
    while(exponent!=0)
          {
              value=value*base;
              --exponent;
          }
          cout<<"Power is:"<<value;

    return 0;
}
