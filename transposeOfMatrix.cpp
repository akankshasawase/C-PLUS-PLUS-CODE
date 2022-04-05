#include<iostream>
using namespace std;
int main()
{

int r,c,a[10][10],i,j,transpose[10][10];
cout<<"enter no of rows:";
cin>>r;
cout<<"enter no of column:";
cin>>c;
cout<<endl;
for(i=0;i<r;++i)
{
    for(j=0;j<c;++j)
    {
        cout<<"enter element of a"<<i+1<<j+1<<":";
        cin>>a[i][j];

    }
}
for(i=0;i<r;++i)
{
    for(j=0;j<c;++j)
    {
        cout<<" "<<a[i][j];
        if(j==c-1)
        {
            cout<<endl<<endl;
        }

    }
}
for(i=0;i<r;++i)
{
    for(j=0;j<c;++j)
    {
        transpose[j][i]=a[i][j];
    }
}
for(i=0;i<c;++i)
{
    for(j=0;j<r;++j)
    {
        cout<<"Tranposed matrixis:"<<endl;
        cout<<" "<<transpose[i][j];
        if(j==r-1)
        {
            cout<<endl<<endl;
        }
    }
}
return 0;
}
