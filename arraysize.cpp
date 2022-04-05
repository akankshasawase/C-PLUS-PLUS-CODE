# include<iostream>
using namespace std;
 int main()
 {
     int MyNum[5]={10,20,30,40,50};
     cout<<sizeof(MyNum)<<"\n";
     //*****length for get array***
     int getarraylength=sizeof(MyNum)/sizeof(int);
     cout<<getarraylength;
     return 0;
 }
