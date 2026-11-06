
#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int Q[N + 1];
    int f = 0, r = 0;
    int item;

    cout << "Enter value to enqueue: ";
    cin >> item;

    if (r == N) {
        cout << "Queue Overflow" << endl;
    } else {
        if (f == 0) {
            f = 1;
        }

        r = r + 1;
        Q[r] = item;

        cout << "Inserted: " << item << endl;
        cout << "Queue: ";

        for (int i = f; i <= r; i++) {
            cout << Q[i] << " ";
        }

        cout << endl;
    }

    return 0;
}

