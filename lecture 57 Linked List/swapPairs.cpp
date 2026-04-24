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

Node* swapPairs(Node* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node* first = head;
    Node* sec = head->next;
    Node* prev = NULL;

    while(first != NULL && sec != NULL) {
        Node* third = sec->next;

        sec->next = first;
        first->next = third;

        if(prev != NULL) {
            prev->next = sec;
        } else {
            head = sec;
        }

        // update
        prev = first;
        first = third;
        if(third != NULL) {
            sec = third->next;
        } else {
            sec = NULL;
        }
    }

    return head;
}


// Print list
void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main() {
    Node* head = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);

    head->next = n2;
    n2->next = n3;
    n3->next = n4;

    head = swapPairs(head);
    printList(head);

    return 0;
}