#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,determinant,r1,r2,real,imag;
    cout<<"enter a coefficient of a,b,c:";
    cin>>a>>b>>c;
    determinant=b*b-4*a*c;
    if(determinant>=0)
    {
        r1=(-b+sqrt(determinant))/2*a;
        r2=(-b-sqrt(determinant))/2*a;
        cout<<"square Roots are:"<<r1<<r2;
    }
    else
    {
        real=-b/(2*a);
        imag=sqrt(-determinant)/(2*a);
        cout<<"Square roots are:"<<real<<"+"<<imag<<"i,"<<real<<"-"<<imag<<"i";
    }
    return 0;
}
