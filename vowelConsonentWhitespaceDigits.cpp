
#include<iostream>
using namespace std;
int main()
{
    char line[50];
    int v=0,c=0,d=0,s=0;
    cout<<"Enter a line of string:";
    cin.getline(line,150);
    for(int i=0;line[i]!='\0';++i)
    {
    if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
    {
        ++v;
    }else if((line[i]>='A'&&line[i]<='Z')||(line[i]>='a'&&line[i]<='z'))
    {
        ++c;

    }
    else if((line[i]>='0'&&line[i]<='9'))
    {
        ++d;

    }
    else if(line[i]==' ')
    {
        ++s;
    }
 }
 cout<<"vowels:"<<v<<endl;
 cout<<"consonants:"<<c<<endl;
 cout<<"Digits:"<<d<<endl;
 cout<<"white spaces:"<<s<<endl;
    return 0;
}
