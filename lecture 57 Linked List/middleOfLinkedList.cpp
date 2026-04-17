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

// Brute Force
// void midList(ListNode* head) {
//     ListNode* temp = head;
//     int count = 0;
//     while (temp != NULL) {
//         temp = temp->next;
//         count++;
//     }
//     int mid = count/2 + 1;
//     cout << "count : " << count << endl;
//     cout << "mid : " << mid << endl;
// }


// Slow Fast Technique
ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
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

    // midList(head);

    ListNode* mid = middleNode(head);

    cout << "Middle Node Value: " << mid->val << endl;
    return 0;
}