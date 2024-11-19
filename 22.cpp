#include <iostream>
using namespace std;


void printPyramid(int n) {
    
    for (int i = 1; i <= n; ++i) {
       
        for (int j = n; j > i; --j) {
            cout << " ";
        }

        
        for (char ch = 'A'; ch < 'A' + i; ++ch) {
            cout << ch << ' ';
        }

        
        for (char ch = 'A' + i - 2; ch >= 'A'; --ch) {
            cout << ch << ' ';
        }

        
        cout << endl;
    }
}

int main() {
    int num;

    cout << "Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> num;

 
    if (num < 1 || num > 25) {
        cout << "Please enter a number between 1 and 25." << endl;
        return 1; 
    }

    
    printPyramid(num);

    return 0;
}
