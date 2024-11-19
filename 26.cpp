#include<iostream>
using namespace std;
    bool isPrime(int num){
        if(num<2)
        return false;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                return false;
            }
        }
            return true;
        }
        int main(){
            int n;
            cout<<"Enter a number";
            cin>>n;
            int lastPrime =-1;
            for(int i=n-1;i>=2;i--){
                if(isPrime(i)){
                    lastPrime=i;
                    break;
                }
            }
            if(lastPrime!=-1){
                cout<<"This is prime number before your given number"<<lastPrime<<endl;
                }else{
                cout<<"There is no prime number"<<endl;
        
    }
    return 0;
}
