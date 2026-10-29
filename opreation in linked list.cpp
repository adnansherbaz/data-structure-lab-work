
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    node* head = NULL;
    node* tail = NULL;
    node* q;
    int value, item;

    cout << "Enter list values (0 to stop): ";
    while (cin >> value && value != 0) {
        node* newNode = new node{value, NULL};

        if (head == NULL) {
            head = newNode;
        } else {
            tail->next = newNode;
        }

        tail = newNode;
    }

    cout << "Enter item to search: ";
    cin >> item;

    q = head;

    while (q != NULL && q->data != item) {
        q = q->next;
    }

    if (q == NULL) {
        cout << "Item not found." << endl;
    } else {
        cout << "Item found." << endl;
    }

    while (head != NULL) {
        q = head;
        head = head->next;
        delete q;
    }

    return 0;
}

