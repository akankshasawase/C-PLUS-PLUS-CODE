#include<iostream>
using namespace std;
void cyclicswap(int *a, int *b,int *c);

int main()
{
 int a,b,c;
 cout<<"enter 3 numbers:";
 cin>>a>>b>>c;
 cout<<"value before swap:"<<a<<" "<<b<<" "<<c<<endl;
 cyclicswap(&a,&b,&c);
 cout<<"value after swap:"<<a<<" "<<b<<" "<<c<<endl;
 return 0;
}
void cyclicswap(int *a, int *b,int *c)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;
}

