#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    sort(arr, arr + n);

    
    int secondLowest = arr[1];
    int secondHighest = arr[n - 2];

    cout << "The second lowest element is " << secondLowest << endl;
    cout << "The second highest element is " << secondHighest << endl;

    return 0;
}
