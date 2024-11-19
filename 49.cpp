#include <iostream>
using namespace std;

void findTwoRepeating(int arr[], int n) {
    cout << "The repeating elements are: ";
    for (int i = 0; i < n; i++) {
        if (arr[abs(arr[i])] >= 0) {
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        } else {
            cout << abs(arr[i]) << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findTwoRepeating(arr, n);

    return 0;
}
