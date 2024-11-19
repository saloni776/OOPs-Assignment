#include <iostream>
using namespace std;

void printPascal(int numRows) {
    for (int i = 0; i < numRows; ++i) {
        
        for (int j = 0; j < numRows - i - 1; ++j)
            cout << " ";

        int value = 1; // First value in the row is always 1

        // Print the values in the current row
        for (int j = 0; j <= i; ++j) {
            cout << value << " ";

            // Update value to the next value in the row
            value = value * (i - j) / (j + 1);
        }
        cout << endl; 
    }
}

int main() {
    int numRows = 8; 
    printPascal(numRows); 

    return 0; 
}

