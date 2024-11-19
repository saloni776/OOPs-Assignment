#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num<=1)
    return false;
    if(num==2)
    return true;
    if( num%2==0)
    return false;
    for(int i=3;i*i<=num;i+=2){
        if(num%i==0)
        return false;
    }
    return true;
}
int main()
{
    int upperBound;
    cout<<"Input the upper limit";
    cin>>upperBound;
    cout<<"The non prime numbers are:"<<endl;
    for(int i=2;i<=upperBound;i++){
        if(!isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}

