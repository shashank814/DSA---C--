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

int searchElement(Node* head, int target) {
    Node* temp = head;
    int pos = 1;

    while(temp != NULL) {
        if(temp->data == target) {
            // return true;
            return pos;
        }
        temp = temp->next;
        pos++;
    }

    return -1;
}

int main() {
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);

    n1->next = n2;
    n2->next = n3;

    cout << searchElement(n1, 30);

    return 0;
}

