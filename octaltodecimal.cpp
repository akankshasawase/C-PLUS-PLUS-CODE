#include<iostream>
#include<cmath>
using namespace std;
int conversion(int decimalNo);
int main()
{
    int decimalNo;;
    cout<<"Enter a decimal number:";
    cin>>decimalNo;
    cout<<decimalNo<<" in decimal = "<<conversion(decimalNo)<<"in octal";
    return 0;
}
int conversion(int decimalNo)
{
    int octalNO=0;
    for(int i=1;decimalNo!=0;i=i*10)
    {
        octalNO=octalNO+(decimalNo%8)*i;
        decimalNo=decimalNo/8;
    }
    return octalNO;
}
