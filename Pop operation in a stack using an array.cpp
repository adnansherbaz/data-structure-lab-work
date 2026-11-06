
#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int S[N] = {10, 20, 30};
    int Top = 2;
    int item;

    cout << "Stack before pop: ";
    for (int i = Top; i >= 0; i--) {
        cout << S[i] << " ";
    }
    cout << endl;

    if (Top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        item = S[Top];
        Top = Top - 1;

        cout << "Deleted item: " << item << endl;
        cout << "Stack after pop: ";

        for (int i = Top; i >= 0; i--) {
            cout << S[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

