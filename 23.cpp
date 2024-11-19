#include <iostream>
using namespace std;


void printPattern(int rows) {
    
    for (int i = 1; i <= rows; ++i) {
        
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }

        
        for (int k = i; k >= 1; --k) {
            cout << k;
        }

       
        cout << endl;
    }
}

int main() {
    int num;

    
    cout << "Input number of rows: ";
    cin >> num;

    
    printPattern(num);

    return 0;
}
