#include<iostream>
using namespace std;
int main()
{
    int rows;
    int currentNumber=1;
    cout<<"Input the number of rows";
    cin>>rows;
    for (int i=1;i<=rows;++i){
        for (int j=1;j<=i;++j){
            cout<<currentNumber<<""; ++currentNumber;
        }
        cout<<endl;
    }
    return 0;
}
