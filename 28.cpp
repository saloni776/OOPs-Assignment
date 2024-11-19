#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the terms to be displayed"<<endl;
    cin>>n;
    if(n<=0){
        cout<<"Please enter any other number"<<endl;
        return 1;
    }
    int a=0,b=1;
    cout<<"The series is"<<n<<"terms:"<<endl;
    if(n>=1){
        cout<<a<<" ";
    }
        if(n>=2){
            cout<<b <<" ";
        }
            for (int i=3;i<=n;i++){
                int nextTerm=a+b;
                 cout<< nextTerm<<" ";
                 a=b;
                 b=nextTerm;
            }
            cout<<endl;
            return 0;
        
    }
