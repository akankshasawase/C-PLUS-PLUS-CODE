#include<iostream>
using namespace std;
int main()
{
    int low,high,i;
    bool prime=true;
    cout<<"enter two numbers:";
    cin>>low>>high;
    while(low<high)
    {
        prime=true;
        if(low==0||low==1)
        {
            prime=false;

        }
        for(i=2;i<=low/2;++i)
        {
            if(low%i==0)
            {
                prime=false;
               break;

            }
        }

        if(prime)
        {
            cout<<low<<", ";
            ++low;
        }
}
return 0;
}
