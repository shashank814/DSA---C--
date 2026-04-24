#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* temp;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to flatten the list
Node* reverseKGroup(Node* head, int k) {
    Node* temp = head;
    int count = 0;

    // check if k nodes exist
    while(count < k) {
        if(temp == NULL) {
            return head;
        } 
        temp = temp->next;
        count++;
    }

    // recursively call for rest of LL
    Node* prevNode = reverseKGroup(temp, k);

    // reverse current group
    temp = head; count = 0;
    while(count < k) {
        Node* next = temp->next;
        temp->next = prevNode;

        prevNode = temp;
        temp = next;

        count++;
    }

    return prevNode;
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

    head = reverseKGroup(head, 2);
    printList(head);

    return 0;
}