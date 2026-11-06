
#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int Q[N + 1] = {0, 10, 20, 30, 0, 0};

    int f = 1;
    int r = 3;
    int item;

    cout << "Queue before dequeue: ";

    for (int i = f; i <= r; i++) {
        cout << Q[i] << " ";
    }
    cout << endl;

    if (f == 0 && r == 0) {
        cout << "Queue Underflow" << endl;
    } else {
        item = Q[f];

        if (f == r) {
            f = 0;
            r = 0;
        } else {
            f = f + 1;
        }

        cout << "Deleted item: " << item << endl;

        if (f == 0 && r == 0) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue after dequeue: ";

            for (int i = f; i <= r; i++) {
                cout << Q[i] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}

