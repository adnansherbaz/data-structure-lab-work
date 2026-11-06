
#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int S[N];
    int Top = -1;
    int item;

    cout << "Enter value to push: ";
    cin >> item;

    if (Top == N - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        Top = Top + 1;
        S[Top] = item;

        cout << "Pushed: " << item << endl;
        cout << "Stack: ";

        for (int i = Top; i >= 0; i--) {
            cout << S[i] << " ";
        }

        cout << endl;
    }

    return 0;
}

