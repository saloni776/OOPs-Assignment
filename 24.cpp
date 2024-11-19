#include <iostream>
using namespace std;

void printPattern(int n) {
    
    for (int i=n;i>=1;--i){
        for(int j=1;j<=i;++j){
            cout<<j;
            
        }
        for(int j=i-1;j>=1;--j){
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    int num;
    cout<<"Input numbers of rows";
    cin>> num;
    printPattern(num);
    return 0;
}
    

 



