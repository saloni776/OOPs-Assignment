#include <iostream>
#include <climits>
using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(array) / sizeof(array[0]);

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (array[i] > first) {
            second = first;
            first = array[i];
        } else if (array[i] > second && array[i] < first) {
            second = array[i];
        }
    }

    if (second == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << second << endl;
    }

    return 0;
}

