
#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 numbers:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int maximum = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << "Largest element = "
         << maximum << endl;

    return 0;
}

