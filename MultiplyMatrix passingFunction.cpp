#include<iostream>
using namespace std;
void enterdata(int a[][10],int b[][10],int c1,int r1, int r2,int c2);
void Multmatrix(int a[][10],int b[][10],int multresult[][10],int r1,int c1,int r2,int c2);
void display(int mult[][10],int r1,int c2);
int main()
{

int r1,r2,c1,c2,a[10][10],b[10][10],i,j,k,mult[10][10];
cout<<"enter no of rows and column of first matrix:";
cin>>r1>>c1;
cout<<"enter no of rows and column of second matrix:";
cin>>r2>>c2;
cout<<endl;
while(c1!=r2)
{
    cout<<"Error!column of first matrix not equal to row of second";

    cout<<"enter no of rows and column of first matrix:";
     cin>>r1>>c1;
     cout<<"enter no of rows and column of second matrix:";
     cin>>r2>>c2;
}
 enterdata( a, b,c1,r1, r2, c2);
 Multmatrix( a, b, mult, r1, c1, r2, c2);
 display( mult, r1, c2);
 return 0;
}
void enterdata(int a[][10],int b[][10],int c1,int r1,int r2,int c2)
{
    int i,j;
    cout<<endl<<"enter elements of matrix1:"<<endl;
 for(i=0;i<r1;++i)
   {
    for(j=0;j<c1;++j)
    {
        cout<<"enter element of a"<<i+1<<j+1<<":";
        cin>>a[i][j];
    }
}
cout<<endl<<"enter elements of matrix2:"<<endl;
for(i=0;i<r2;++i)
{
    for(j=0;j<c2;++j)
    {
        cout<<"enter element of b"<<i+1<<j+1<<":";
        cin>>b[i][j];
    }
}
}
void Multmatrix(int a[][10],int b[][10],int multresult[][10],int r1,int c1,int r2,int c2)
{
    int i,j,k;
   for(i=0;i<r1;++i)
{
    for(j=0;j<c2;++j)
    {
        multresult[i][j]=0;
    }
}
for(i=0;i<r1;++i)
{
    for(j=0;j<c2;++j)
    {
        for(k=0;k<c1;++k)
        {
            multresult[i][j]=multresult[i][j]+a[i][k]*b[k][j];

        }
    }
}
}
void display(int mult[][10],int r1,int c2)
{
    int i,j;
    cout<<endl<<"Output matrix is:"<<endl;
for(i=0;i<r1;++i)
{
    for(j=0;j<c2;++j)
    {
       cout<<" "<< mult[i][j];
       if(j==c2-1)
       {
           cout<<endl;
       }
    }
}
}





