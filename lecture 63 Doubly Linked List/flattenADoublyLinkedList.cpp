#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node* child;

    Node(int val) {
        data = val;
        next = prev = child = NULL;
    }
};

// Function to flatten the list
Node* flatten(Node* head) {
    if(head == NULL) return head;

    Node* curr = head;

    while(curr != NULL) {
        if(curr->child != NULL) {

            Node* next = curr->next;

            // Flatten child list 
            Node* childHead = flatten(curr->child);

            // Connect current with child
            curr->next = childHead;
            childHead->prev = curr;
            curr->child = NULL;

            // Find tail of child list
            Node* temp = childHead;
            while(temp->next != NULL) {
                temp = temp->next;
            }

            // Connect tail with next
            if(next != NULL) {
                temp->next = next;
                next->prev = temp;
            }
        }

        curr = curr->next;
    }

    return head;
}

// Print list
void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    /*
        Creating this structure:

        1 - 2 - 3 - 4
            |
            7 - 8
                |
                11 - 12
    */

    Node* head = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);

    head->next = n2;
    n2->prev = head;
    n2->next = n3;
    n3->prev = n2;
    n3->next = n4;
    n4->prev = n3;

    Node* n7 = new Node(7);
    Node* n8 = new Node(8);
    n7->next = n8;
    n8->prev = n7;

    Node* n11 = new Node(11);
    Node* n12 = new Node(12);
    n11->next = n12;
    n12->prev = n11;

    // Attach child pointers
    n2->child = n7;
    n8->child = n11;

    cout << "Original list (flattened view): ";
    printList(head);  // only main level visible

    head = flatten(head);

    cout << "Flattened list: ";
    printList(head);

    return 0;
}