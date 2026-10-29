
#include <iostream>
using namespace std;

int sum(int arr[], int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    return total;
}

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Size must be positive." << endl;
        return 0;
    }

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Sum = " << sum(arr, n) << endl;
    cout << "Size of int = " << sizeof(int)
         << " bytes" << endl;
    cout << "Fixed array-pointer overhead = "
         << sizeof(arr) << " bytes" << endl;
    cout << "Dynamic array memory = "
         << n * sizeof(int) << " bytes" << endl;

    delete[] arr;
    return 0;
}

