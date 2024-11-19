#include <iostream>
#include <string>  
using namespace std;

int main() {
    string inputStr, reversedStr;  
    
    cout << "Enter a string: ";
    cin >> inputStr;

    
    for (int i = inputStr.length() - 1; i >= 0; i--) {
        reversedStr += inputStr[i];  


    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}
