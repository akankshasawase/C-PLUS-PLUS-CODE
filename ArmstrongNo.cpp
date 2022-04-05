#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,temp,r;
    cout<<"enter a number:";
    cin>>n;
    temp=n;
    while(n>0)
    {
            r=n%10;
    sum=sum+(r*r*r);
    n=n/10;

   }
   if(temp==sum)
   {
       cout<<"no is armstrong";
   }
   else{
     cout<<"no is not armstrong";
   }

   return 0;
}

