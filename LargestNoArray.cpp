
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    float num[100];
    cout<<"enter the no of elements:";
    cin>>n;
    for(i=0;i<n;++i)
    {

        cout<<"enter no "<<i+1<<":";
        cin>>num[i];
    }
    for(i=1;i<n;++i)
    {
     if(num[0]<num[i])
     {
         num[0]=num[i];
     }
    }
    cout<<endl<<"Largest no="<<num[0];

    return 0;
}
