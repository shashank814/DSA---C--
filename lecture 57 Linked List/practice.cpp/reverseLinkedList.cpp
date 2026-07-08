#include<iostream>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int val) {
        data = val;
        next = NULL;
    }
};

// Recursive reverse
ListNode* reverse(ListNode* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    ListNode* newHead = reverse(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead;
}

// Print linked list
void printList(ListNode* head) {
    while(head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating linked list: 1 -> 2 -> 3 -> 4 -> NULL
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "Original List: ";
    printList(head);

    head = reverse(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}