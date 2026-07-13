#include<iostream>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;
    ListNode* prev;
    ListNode* child;

    ListNode(int val) {
        data = val;
        next = NULL;
        prev = NULL;
        child = NULL;
    }
};

// Function to flatten the list
ListNode* flatten(ListNode* head) {
    if(head == NULL) return head;

    ListNode* curr = head;

    while(curr != NULL) {
        if(curr->child != NULL) {
            ListNode* nextNode = curr->next;

            // Flatten child list
            ListNode* childHead = flatten(curr->child);

            // Attach child
            curr->next = childHead;
            childHead->prev = curr;
            curr->child = NULL;

            // Find tail of child list
            ListNode* temp = childHead;
            while(temp->next != NULL) {
                temp = temp->next;
            }

            // Connect to next node
            if(nextNode != NULL) {
                temp->next = nextNode;
                nextNode->prev = temp;
            }
        }
        curr = curr->next;
    }
    return head;
}

// Function to print list
void printList(ListNode* head) {
    ListNode* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creating nodes
    ListNode* head = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);
    ListNode* n4 = new ListNode(4);
    ListNode* n5 = new ListNode(5);

    // Main list: 1 - 2 - 3 - 4 - 5
    head->next = n2;
    n2->prev = head;

    n2->next = n3;
    n3->prev = n2;

    n3->next = n4;
    n4->prev = n3;

    n4->next = n5;
    n5->prev = n4;

    // Creating child list: 3 -> 7 -> 8
    ListNode* c1 = new ListNode(7);
    ListNode* c2 = new ListNode(8);

    n3->child = c1;
    c1->next = c2;
    c2->prev = c1;

    // Flatten list
    head = flatten(head);

    // Print flattened list
    cout << "Flattened List: ";
    printList(head);

    return 0;
}