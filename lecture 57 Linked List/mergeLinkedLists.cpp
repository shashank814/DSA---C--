#include<iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Merge {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 == NULL || head2 == NULL) {
            return head1 == NULL ? head2 : head1;
        }

        if(head1->val <= head2->val) {
            head1->next = mergeTwoLists(head1->next, head2);
            return head1;
        } else {
            head2->next = mergeTwoLists(head1, head2->next);
            return head2;
        }
    }
};

// function to print list
void printList(ListNode* head) {
    while(head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // List 1: 1->2->3->4
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);

    // List 2: 3->4->5->6 (sorted)
    ListNode* head2 = new ListNode(3);
    head2->next = new ListNode(4);
    head2->next->next = new ListNode(5);
    head2->next->next->next = new ListNode(6);

    cout << "List 1: ";
    printList(head1);

    cout << "List 2: ";
    printList(head2);

    Merge obj;
    ListNode* merged = obj.mergeTwoLists(head1, head2);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}