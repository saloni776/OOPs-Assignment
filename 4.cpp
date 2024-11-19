#include <iostream>
using namespace std;
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int sumDigitsBetween(int start, int end) {
    int totalSum = 0;
    for (int i = start; i <= end; ++i) {
        totalSum += sumOfDigits(i);
    }
    return totalSum;
}

int main() {
    int start, end;
    cout << "Enter the start and end integers: ";
    cin >> start >> end;

    if (start > end) {
        swap(start, end); 
    }

    int result = sumDigitsBetween(start, end);
    cout << "Sum of all digits between " << start << " and " << end << " is: " << result << endl;

    return 0;
}
