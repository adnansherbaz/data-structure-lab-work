
#include <iostream>
using namespace std;

class NumberList {
private:
    int arr[5];
    int count = 0;

public:
    void insert(int n) {
        arr[count] = n;
        count++;
    }

    void printLast() {
        cout << "Last number: " << arr[count - 1];
    }
};

int main() {
    NumberList list;
    list.insert(10);
    list.insert(20);
    list.printLast();

    return 0;
}

