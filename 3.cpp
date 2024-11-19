#include <iostream>
#include <cmath>
using namespace std;

int swapFirstLastDigits(int num) {
    int digits = log10(num); 
    int first = num / pow(10, digits); 
    int last = num % 10; 
    int middle = num % static_cast<int>(pow(10, digits)); 
    middle = middle / 10;

    int newNum = last * pow(10, digits) + middle * 10 + first;

    return newNum;
}

int main() {
    int number;
    cout << "Input any number: ";
    cin >> number;

    int result = swapFirstLastDigits(number);
    cout << "The number after swapping the first and last digits is: " << result << endl;

    return 0;
}
