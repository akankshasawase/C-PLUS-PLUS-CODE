#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,rem,temp;
    cout<<"enter a number:";
    cin>>num;
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    if(rev==num)
    {
        cout<<"NO is palindrome";
    }
    else{
        cout<<"No is not palindrome";
    }
 return 0;
}



