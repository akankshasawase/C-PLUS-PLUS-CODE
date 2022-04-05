#include<iostream>
#include<cmath>
using namespace std;
int convertOtoD(int OctalNo);
int main()
{
    int OctalNo;;
    cout<<"Enter a octal number:";
    cin>>OctalNo;
    cout<<OctalNo<<" in octal = "<<convertOtoD(OctalNo)<<"in Decimal";
    return 0;
}
int convertOtoD(int OctalNo)
{
    int Decimal=0,i=0;
    for(;OctalNo!=0;)
    {
        Decimal=Decimal+(OctalNo%10)*pow(8,i);
        ++i;
        OctalNo=OctalNo/10;
    }
    i=1;
    return Decimal;
}
