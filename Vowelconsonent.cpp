#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a character:";
    cin>>c;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        cout<<"vowel";
    }else if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        cout<<"Vowel";

    }
    else
    {
        cout<<"consonent";

    }
    return 0;
}
