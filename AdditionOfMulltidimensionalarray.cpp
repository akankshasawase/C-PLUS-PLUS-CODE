
#include<iostream>
using namespace std;
int main()
{

int r,c,a[100][100],b[100][100],i,j,sum[100][100];
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
        cout<<"enter element of b"<<i+1<<j+1<<":";
        cin>>b[i][j];
    }
}
for(i=0;i<r;++i)
{
    for(j=0;j<c;++j)
    {
        sum[i][j]=a[i][j]+b[i][j];
    }
}
for(i=0;i<r;++i)
{
    for(j=0;j<c;++j)
    {
        cout<<sum[i][j]<<" ";
        if(j==c-1)
        {
            cout<<endl;
        }
    }
}
}
