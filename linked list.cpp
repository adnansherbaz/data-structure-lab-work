
#include <iostream>
#include <cstdlib>
using namespace std;

struct node {
    int data;
    node* next;
};

int main() {
    node* p = (node*)malloc(sizeof(node));

    p->data = 10;
    p->next = NULL;

    cout << p->data;
    free(p);

    return 0;
}

