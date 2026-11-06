
#include <iostream>
#include <new>
using namespace std;

struct node {
    int data;
    node* next;
};

void push(node*& Top, int item) {
    node* NewNode = new(nothrow) node;

    if (NewNode == NULL) {
        cout << "Stack Overflow: Memory full"
             << endl;
        return;
    }

    NewNode->data = item;
    NewNode->next = Top;
    Top = NewNode;

    cout << "Pushed: " << item << endl;
}

void display(node* Top) {
    cout << "Stack: ";

    while (Top != NULL) {
        cout << Top->data << " -> ";
        Top = Top->next;
    }

    cout << "NULL" << endl;
}

void clearStack(node*& Top) {
    while (Top != NULL) {
        node* ptr = Top;
        Top = Top->next;
        delete ptr;
    }
}

int main() {
    node* Top = NULL;
    int item;

    // Case B: Initially empty stack
    cout << "Case B: Empty stack" << endl;
    push(Top, 10);
    display(Top);

    // Case C: Stack already has nodes
    cout << "\nCase C: Existing stack" << endl;
    push(Top, 20);
    display(Top);

    // Case A: Attempt to handle allocation failure
    cout << "\nCase A: Memory allocation failure" << endl;
    cout << "If allocation fails, push() displays "
         << "Stack Overflow." << endl;

    clearStack(Top);
    return 0;
}

