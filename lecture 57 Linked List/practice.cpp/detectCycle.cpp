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

bool hasCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            return true;
        }
    }
    return false;
}

int main() {
    ListNode* n = new ListNode(1);
    n->next = new ListNode(2);
    n->next->next = new ListNode(0);
    n->next->next->next = new ListNode(-4);

    // Create cycle: last node points to second node
    n->next->next->next->next = n->next;

    if(hasCycle(n)) {
        cout << "Cycle detected" << endl;
    } else {
        cout << "No cycle" << endl;
    }

    return 0;
}