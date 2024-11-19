#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    // Sort the array in descending order
    sort(arr, arr + n, greater<int>());

    // Print the first k elements
    cout << "The " << k << " largest elements are: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


