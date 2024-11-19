#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Input the number of terms";
    cin>>n;
    int sum=0;
    int term=0;
    for (int i=1;i<=n;i++){
        term=term*10+1;
        sum+=term;
        if(i<n){
            cout<<term<<"+";
        } else{
            cout<<term;
        }
    
        }
        cout<<endl<<"The sum of given series is:"<<sum<<endl;
        return 0;
    }



