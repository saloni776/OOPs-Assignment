#include<iostream>
using namespace std;
int main(){
int num, reverse=0;
cout<<"Enter your number";
cin>>num;
while(num!=0){
    int digit=num%10;
    reverse=reverse*10+digit;
    num=num/10;
}
    cout<<"The required answer is:"<<reverse<<endl;

    return 0;
}

