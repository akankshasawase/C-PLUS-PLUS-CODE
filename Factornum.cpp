#include<iostream>
using namespace std;
int main()
{
    int num,temp=1;
    cout<<"Enter the number to determine its factors:"<<endl;
    cin>>num;
    cout<<"The factors of"<<num<<"are:"<<endl;
    while(temp<=num)
    {
        if(num%temp==0)
        {
            cout<<temp<<" "<<endl;
            ++temp;
        }
    }
    return 0;
}
