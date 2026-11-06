
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    node* start = NULL;
    node* last = NULL;
    node* p;
    node* q;
    int value, item;

    cout << "Enter list values (0 to stop): ";
    while (cin >> value && value != 0) {
        node* newNode = new node{value, NULL};

        if (start == NULL) {
            start = newNode;
        } else {
            last->next = newNode;
        }
        last = newNode;
    }

    cout << "Enter item to delete: ";
    cin >> item;

    p = NULL;
    q = start;

    while (q != NULL && q->data != item) {
        p = q;
        q = q->next;
    }

    if (q == NULL) {
        cout << "Item not found." << endl;
    } else {
        if (p == NULL) {
            start = q->next;
        } else {
            p->next = q->next;
        }

        delete q;

        cout << "Updated list: ";
        q = start;

        while (q != NULL) {
            cout << q->data << " -> ";
            q = q->next;
        }
        cout << "NULL" << endl;
    }

    while (start != NULL) {
        q = start;
        start = start->next;
        delete q;
    }

    return 0;
}

