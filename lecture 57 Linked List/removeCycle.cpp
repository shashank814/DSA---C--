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

    // Step 1: Detect cycle
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            // Step 2: Find cycle start
            slow = head;
            while(slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }

            // Step 3: Remove cycle
            ListNode* temp = slow;
            while(temp->next != slow) {
                temp = temp->next;
            }
            temp->next = NULL;

            return slow;
        }
    }

    return NULL;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);

    // Create cycle (6 → 2)
    head->next->next->next->next->next->next = head->next;

    ListNode* start = detectCycle(head);

    if(start != NULL) {
        cout << "Cycle starts at node: " << start->val << endl;
    } else {
        cout << "No cycle detected" << endl;
    }

    // ✅ Verify cycle removed
    cout << "Linked List after removing cycle: ";
    ListNode* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}