#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int start, int end) {
    if (start > end) {
        return start;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == mid) {
        return findSmallestMissing(arr, mid + 1, end);
    } else {
        return findSmallestMissing(arr, start, mid - 1);
    }
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

    int missing = findSmallestMissing(arr, 0, n - 1);
    cout << "The smallest missing element is " << missing << endl;

    return 0;
}


