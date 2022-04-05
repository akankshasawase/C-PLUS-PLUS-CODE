#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
         char str[1000],ch;
         int i,count=0;
         cout<<"enter a string:";
         fgets(str,sizeof(str),stdin);
         cout<<"enter a character to find its frequency:";
         cin>>ch;
         for(i=0;str[i]!='\0';++i)
         {
             if(ch==str[i])
             {
                 ++count;
             }

         }
         cout<<"Frequency of charater"<<ch<<<" "<<"is:"<<count;
         return 0;
         }
