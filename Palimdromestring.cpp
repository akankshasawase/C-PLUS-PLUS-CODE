#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[20];
    int i,length;
    int flag=0;
    cout<<"Enter a string:";
    cin>>str1;
    length=strlen(str1);
    for(i=0;i<length;i++)
    {
        if(str1[i]!=str1[length-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        cout<<str1<<" is not a palimdrome"<<endl;
    }
    else{
        cout<<str1<<"is   a palimdrome"<<endl;
    }

    return 0;
}
