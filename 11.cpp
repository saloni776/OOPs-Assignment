#include<iostream>
using namespace std;
bool isPowerofThree(int num)
{
    if(num<=0){
        return false;
    }
    while(num>1){
        if(num%3!=0){
            return false;
        }
        num/=3;
    }
    return num==1;
}
int main(){
int num;
cout<<"Enter an num";
cin>>num;
if(isPowerofThree(num)){
cout<<"true"<<endl;
} else{
    cout<<"false"<<endl;
}
return 0;
}
