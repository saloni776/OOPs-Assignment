#include <iostream>
#include <algorithm> 
using namespace std;

void findThreeLargest(int arr[], int arr_size) {
    if (arr_size < 3) {
        cout << "Invalid Input";
        return;
    }

  
    sort(arr, arr + arr_size);

   
    cout << "The three largest elements are " << arr[arr_size-3] << ", "
         << arr[arr_size-2] << ", " << arr[arr_size-1] << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int *arr = new int[n];
    
    cout << "Enter " << n << " elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    findThreeLargest(arr, n);
    
    delete[] arr; 
    return 0;
}
