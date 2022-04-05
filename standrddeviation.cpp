#include<iostream>
#include<cmath>>
using namespace std;
float calculateSD(float data[]);
int main()
{
    int i;
    float data[10];
    cout<<"enter 10 elements:";
    for(i=0;i<10;++i)
    {
    cin>>data[i];
    }
    cout<<"standred deviation="<<calculateSD(data);
    return 0;
}
float calculateSD(float data[])
{
    float sum=0.0,mean,SD=0.0;
    int i;
    for(i=0;i<10;++i)
    {
        sum=sum+data[i];
    }
    mean=sum/10;
    for(i-0;i<10;++i)
    {
        SD=SD+pow(data[i]-mean,2);
    }
    return sqrt(SD/10);
}
