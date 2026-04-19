#include<iostream>
#include<unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int x) {
        val = x;
        next = NULL;
        random = NULL;
    }
};

class Copy {
    public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) {
            return NULL;
        }

        unordered_map<Node*, Node*> m;

        Node* newHead = new Node(head->val);
        Node* oldTemp = head->next;
        Node* newTemp = newHead;
        m[head] = newHead;

        while(oldTemp != NULL) {
            Node* copyNode = new Node(oldTemp->val);
            m[oldTemp] = copyNode;
            newTemp->next = copyNode;

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        oldTemp = head; 
        newTemp = newHead;
        while(oldTemp != NULL) {
            newTemp->random = m[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
        return newHead;
    }
};

void printList(Node* head) {
    while(head != NULL) {
        cout << "Val: " << head->val;

        if(head->random)
            cout << " Random: " << head->random->val;
        else
            cout << " Random: NULL";

        cout << endl;
        head = head->next;
    }
}

int main() {
    // Create original list: 1 -> 2 -> 3
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Assign random pointers
    head->random = head->next->next;   // 1 -> 3
    head->next->random = head;         // 2 -> 1
    head->next->next->random = NULL;   // 3 -> NULL

    cout << "Original List:\n";
    printList(head);

    Copy obj;
    Node* newHead = obj.copyRandomList(head);

    cout << "\nCopied List:\n";
    printList(newHead);

    return 0;
}