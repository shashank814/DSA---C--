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

// Floyd’s Cycle Detection Algorithm
ListNode* detectCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        // Cycle detected
        if(slow == fast) {
            slow = head;

            // Find starting node of cycle
            while(slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }

            // Remove cycle
            ListNode* temp = slow;
            while(temp->next != slow) {
                temp = temp->next;
            }
            temp->next = NULL;

            return slow; // starting node of cycle
        }
    }
    return NULL; // no cycle
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);

    // Creating cycle (6 → 2)
    head->next->next->next->next->next->next = head->next;

    ListNode* cycleNode = detectCycle(head);

    if(cycleNode != NULL)
        cout << "Cycle starts at node with value: " << cycleNode->val;
    else
        cout << "No Cycle";

    return 0;
}