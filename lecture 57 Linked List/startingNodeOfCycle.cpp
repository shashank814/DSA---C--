#include<iostream>
using namespace std;

// Definition of ListNode
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Slow Fast Technique
ListNode* detectCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    bool isCycle = false;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            isCycle = true;
            break;
        }
    }

    if(!isCycle) {
        return NULL;
    }

    slow = head;
    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

int main() {
    // Creating linked list: 1 -> 2 -> 3 -> 4
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);

    head->next->next->next->next->next->next = head->next;

    ListNode* start = detectCycle(head);

if(start != NULL) {
    cout << "Cycle starts at node: " << start->val << endl;
} else {
    cout << "No cycle detected" << endl;
}
    return 0;
}