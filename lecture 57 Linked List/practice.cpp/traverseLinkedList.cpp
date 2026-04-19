#include<iostream>
using namespace std;

class Node {
    public:

    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void PrintList(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "Null";
}

int main() {
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);

    n1->next = n2;
    n2->next = n3;

    PrintList(n1);

    return 0;
}

