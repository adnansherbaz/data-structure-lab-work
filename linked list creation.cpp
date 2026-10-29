
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    node* start = NULL;
    node* q;
    node* last = NULL;
    int item;

    cout << "Enter numbers (0 to stop): ";
    cin >> item;

    while (item != 0) {
        q = new node;
        q->data = item;
        q->next = NULL;

        if (start == NULL) {
            start = q;
        } else {
            last->next = q;
        }

        last = q;
        cin >> item;
    }

    cout << "Linked List: ";
    q = start;

    while (q != NULL) {
        cout << q->data << " -> ";
        q = q->next;
    }

    cout << "NULL" << endl;

    while (start != NULL) {
        q = start;
        start = start->next;
        delete q;
    }

    return 0;
}

