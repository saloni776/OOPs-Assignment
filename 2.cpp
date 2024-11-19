#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter firstNumber";
    cin>>a;
    cout<<"Enter SecondNumber";
    cin>>b;

    cout<<"Before swap:a="<<a<<",b="<<b<<endl;
    
     int temp=a;
     a=b;
     b=temp;
     cout<<"After swapping:a="<<a<<",b="<<b<<endl;
     return 0;
     
}
