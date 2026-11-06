
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
    int value, item;

    cout << "Enter sorted values (0 to stop): ";
    while (cin >> value && value != 0) {
        node* newNode = new node{value, NULL};

        if (start == NULL) {
            start = newNode;
        } else {
            last->next = newNode;
        }
        last = newNode;
    }

    cout << "Enter value to insert: ";
    cin >> item;

    node* newNode = new node{item, NULL};

    if (start == NULL || item < start->data) {
        newNode->next = start;
        start = newNode;
    } else {
        p = start;

        while (p->next != NULL &&
               p->next->data <= item) {
            p = p->next;
        }

        newNode->next = p->next;
        p->next = newNode;
    }

    cout << "Updated sorted list: ";
    p = start;

    while (p != NULL) {
        cout << p->data << " -> ";
        p = p->next;
    }
    cout << "NULL" << endl;

    while (start != NULL) {
        p = start;
        start = start->next;
        delete p;
    }

    return 0;
}

